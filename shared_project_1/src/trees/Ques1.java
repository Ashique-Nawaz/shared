package trees;

//Ques1: Check if given binary tree is a sum tree.


public class Ques1 {
	
	Node root;
	public void controllerQues1(){
		initBinaryTree();
		businessLogic();
	}

	private void businessLogic() {
		System.out.println(isBinaryTreeSumTree(root) ? "this Binary Tree is a Sum Tree" : "this Binary Tree is not a Sum Tree" );
	}

	private boolean isBinaryTreeSumTree(Node currentRoot) {
		return sumOfSubTrees(currentRoot) > -1;
	}
	
	private int sumOfSubTrees(Node currentRoot) {
		if(currentRoot.leftChild == null && currentRoot.rightChild == null) {
			return currentRoot.data;
		}
		int leftSubtreeSum =  currentRoot.leftChild == null ? 0 : sumOfSubTrees(currentRoot.leftChild);
		int rightSubtreeSum = currentRoot.rightChild == null ? 0 : sumOfSubTrees(currentRoot.rightChild);
		return (leftSubtreeSum != -1 && rightSubtreeSum != -1 && (leftSubtreeSum + rightSubtreeSum) == currentRoot.data)
				? (leftSubtreeSum + rightSubtreeSum + currentRoot.data)
				: -1;
	}

	private void initBinaryTree() {
		Node tree = new Node(26);
		root = tree; 
		tree.leftChild = new Node(10);
		tree.rightChild = new Node(3);
//		tree.rightChild = new Node(4);		// for not 
		tree.leftChild.leftChild = new Node(6);
		tree.leftChild.rightChild = new Node(4);
		tree.rightChild.leftChild = new Node(1);
		tree.rightChild.rightChild = new Node(2);
	}
	
	class Node {
		int data;
		Node leftChild;
		Node rightChild;
		
		public Node(int data){
			this.data = data;
		}
		
	}
	
}
