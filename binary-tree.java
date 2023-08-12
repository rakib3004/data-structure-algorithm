package UserSection;


public class Node {
    Node left, right;
    int data;

    public Node(int data) {
        this.data = data;
    }


    public void insert(int value) {
        if (value <= data) {
            if (left == null) {
                left = new Node(value);
            } else {
                left.insert(value);
            }
        } else {
            if (right == null) {
                right = new Node(value);
            } else {
                right.insert(value);
            }
        }


    }


    public boolean find(int value) {
if(value==data){
    return true;
}
else if(value<data){
    if(left==null){
        return  false;
    }
    else{
        return left.find(value);
    }

}
else if(value<data){
    if(right==null){
        return  false;
    }
    else{
        return right.find(value);
    }

}
return false;
    }

public void printInOrder(){

    if(left!=null){
        left.printInOrder();

    }
            System.out.println(data);

            if(right!=null){
                right.printInOrder();

            }
        }

        public void printPreOrder(){
            System.out.println(data);


            if(left!=null){
        left.printPreOrder();

    }

            if(right!=null){
                right.printPreOrder();

            }
        }


        public void printPostOrder(){

    if(left!=null){
        left.printPostOrder();

    }

            if(right!=null){
                right.printPostOrder();

            }

            System.out.println(data);

        }

    public static void main(String[] args) {
        Node node = new Node(16);

        node.insert(14);
        node.insert(54);
        node.insert(4);
        node.insert(6);
        node.insert(2);
        node.insert(20);
        node.insert(9);
        node.insert(7);
        node.insert(15);

        node.printInOrder();



    }





}
