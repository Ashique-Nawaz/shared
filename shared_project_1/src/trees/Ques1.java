package trees;

//Ques1: Check if given binary tree is a sum tree.


public class Ques1 {
	
	Node root;
	public void controllerQues1(){
		initBinaryTree();
		businessLogic();
	}

	private boolean businessLogic() {
		return isBinaryTreeSumTree(root);
	}

	private boolean isBinaryTreeSumTree(Node currentRoot) {
		int leftSubtreeSum = isBinaryTreeSumTree(currentRoot.leftChild);
		int rightSubtreeSum = isBinaryTreeSumTree(currentRoot.rightChild);
		return if((leftSubtreeSum + rightSubtreeSum)== currentRoot.data) true; else false;
	}
	
	
	fun(root){
		lsts = fun(root.left);
		rsts = fun(root.right);
		
		if(fun(lst)== -1 || fun(rst) == -1 ){
			return false;
		}
		if(fun(lst)+fun(rst) == root.data) return true; else return false;
	}
	
	

	private void initBinaryTree() {
		Node tree = root;
		tree = new Node(26);
		tree.leftChild = new Node(10);
		tree.rightChild = new Node(3);
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
//			this.leftChild = lChild;
//			this.rightChild = rChild;
		}
		
	}
	
}
