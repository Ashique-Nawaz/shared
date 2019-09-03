package matrix;

public class MatrixController {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		MatrixController matrix = new MatrixController();
		System.out.println("Matrix Controller");
		matrix.controllerQues1();

	}

	//Ques1: Find an element in a vertically and horizontally sorted matrix.
	public void controllerQues1(){
		System.out.println("Controller Question1");
		int inputArray[][] = {{1,10,12,18},{6,11,17,19},{15,16,26,28},{20,22,27,29}};
		int lostElement = 17;
		int cols = inputArray[0].length;
		int rows = inputArray.length;
		int i=rows,j=cols;
		int prevMinAbsoluteSum = Integer.MAX_VALUE;
		int minAbsoluteSum = Integer.MAX_VALUE;
		//boolean terminate = false;
		//starting from bottom right coordinate _|
		int result = businessLogicQues1( rows, cols, inputArray, lostElement);
		if(result!= -1){
			int max = rows>cols ? rows : cols;
			int col = result % max;
			int row = result / max;
		}
	}

	//My logic failed for repeated values
//	1  3  6 
//	2  7  9 
//	5  9  11
	
	private int businessLogicQues1(int i, int j,int [][] inputArray, int lostElement) {
//		khalid ka logic but bottom right to top right then binary search
		
		if(inputArray[i][j] == lostElement){
			int col = inputArray[0].length;
			int row = inputArray.length;
			int max = row>col ? row : col;
			return   (max*i)+j;
		} else{
			boolean validLeftCoord = isValidLeftCoord(i-1,j);
			boolean validTopCoord = isValidTopCoord(i,j-1);
			if(validLeftCoord && validTopCoord){
				if(leftDiffValue(i,j) >=)
				return businessLogicQues1(i, j, inputArray, lostElement)
			}
		}
			
			if(absoluteDifference())
			if(validLeftCoord && validTopCoord){
				
			}
		if( i==0 && j==0){
			return -1;
		}
	}

	private boolean isValidTopCoord(int i, int j) {
		// TODO Auto-generated method stub
		return isValidCoordinate(i,j);
	}

	private boolean isValidLeftCoord(int i, int j) {
		// TODO Auto-generated method stub
		return isValidCoordinate(i,j);
	}

	private boolean isValidCoordinate(int i, int j) {
		// TODO Auto-generated method stub
		return i>=0 && j>=0;
	}
}
