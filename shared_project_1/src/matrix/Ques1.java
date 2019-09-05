package matrix;

//Ques1: Find an element in a vertically and horizontally sorted matrix.

public class Ques1 {

	int m_rows;
	int m_cols;
	int m_max;
	public void controllerQues1(){
		System.out.println("Controller Question1");
		int inputArray[][] = {{1,2,3,4},{5,6,7,8},{9,12,13,16},{10,14,15,17},{11,18,19,20}};//{{1,10,12,18},{6,11,17,19},{15,16,26,28},{20,22,27,29}};
		int lostElement = 11;//17;
		m_cols = inputArray[0].length;
		m_rows = inputArray.length;
		m_max = m_rows > m_cols ? m_rows : m_cols;

		int result = businessLogicQues1( 0, m_cols-1, inputArray, lostElement);
		if(result != -1){
			int col = result % m_max;
			int row = result / m_max;
			System.out.println("Lost element found at Input Array["+row+","+col+"]");
		} else {
			System.out.println("Lost element not found");
		}
	}

	//My logic failed for repeated values
	//sample case 1
//	1  3  6 
//	2  7  9 
//	5  9  11
	
	private int businessLogicQues1(int i, int j, int[][] inputArray,
			int lostElement) {
		// top-right to bottom-right hi karna padega.

		if (inputArray[i][j] == lostElement) {
			return (m_max * i) + j;
		} else if (inputArray[i][j] < lostElement) {
			if (isValidCoordinate(i + 1, j)) {
				return businessLogicQues1(i + 1, j, inputArray, lostElement);
			} else {
				return -1;
			}
		} else if (inputArray[i][j] > lostElement) {
			if(isValidCoordinate(i, j - 1)){
				return businessLogicQues1(i, j - 1, inputArray, lostElement);
			} else  {
				return -1;
			}
		} else {
			return -1;
		}
	}
	
	// sample case 2
//	1  10  12  18
//	6  11  17  19
//	15 16  26  28
//	20 22  27  29

	// Sample case 3
//	1  2  3  4
//	5  6  7  8
//	9  12 13 16
//	10 14 15 17
//	11 18 19 20
	
	private boolean isValidCoordinate(int i, int j) {
		
		return (i >= 0 && i < m_rows) && (j >= 0 && j < m_cols);
//					Valid Row		  &&		Valid Col
	}
}
