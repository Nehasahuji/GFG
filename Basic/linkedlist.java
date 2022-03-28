public class LinkedList {
	static Node head; // making head
//	creating a node

	static class Node {
		int data;
		Node next;

		public Node(int data) { // to create a new node next is by default initialized as null
			this.data = data;
			next = null;
		}

	}

	public static void printNode() {
		Node n = head;
		while (n != null) {
			System.out.print(n.data + " ");
			n = n.next;
		}

	}

	public static void insertAtBegining(int x) {

		Node newNode = new Node(x);
		newNode.next = head;
		head = newNode;

	}

	public static void insertAtEnd(int x) {

		Node newNode = new Node(x);
		if (head == null) {
			head = newNode;
		} else {
			newNode.next = null;
			Node last = head;
			while (last.next != null)
				last = last.next;

			last.next = newNode;
		}

	}

	public static void insertAtPos(int pos, int x) {

		if (pos == 1) {
			insertAtBegining(x);
		} else {
			Node newNode = new Node(x);
			Node curr = head;
			for (int i = 0; i <= pos - 2 && curr != null; i++) {
				curr = curr.next;
			}

			newNode.next = curr.next;
			curr.next = newNode;
		}

	}

	public static void main(String[] args) {

		LinkedList llist = new LinkedList();

		llist.head = new Node(1);
		Node second = new Node(2);
		Node third = new Node(3);

		llist.head.next = second;
		second.next = third;

		printNode();
		System.out.println("after inserting at first index");
		insertAtBegining(10);
		printNode();
		System.out.println("after inserting at last index");
		insertAtEnd(20);
		printNode();
		System.out.println("after inserting at specific index");
		insertAtPos(2, 2);
		printNode();

	}
}
