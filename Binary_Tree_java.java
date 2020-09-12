package UserSection;


import java.util.Scanner;

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
    System.out.println("Find the item");

    return true;
}
else if(value<data){
    if(left==null){
        System.out.println("Item not found!!!!!!!");

        return  false;
    }
    else{
        return left.find(value);
    }

}
else if(value<data){
    if(right==null){
        System.out.println("Item not found!!!!!!!");

        return  false;
    }
    else{
        return right.find(value);
    }

}
return true;
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
        Scanner scan = new Scanner(System.in);

        System.out.print("Enter the root value : ");
        int root = scan.nextInt();
        Node node = new Node(root);

          int iterator;

        System.out.print("How many number you want to  insert :");
        int number = scan.nextInt();
int enter;
for(iterator=1;iterator<=number;iterator++){
    enter = scan.nextInt();
    node.insert(enter);

}

        System.out.println("Enter Your Choice");
        System.out.println("1.print in  order");
        System.out.println("2.print  pre order ");
        System.out.println("3.print post order");

int button = scan.nextInt();

if(button==1){
    node.printInOrder();
}
else if(button==2){
    node.printPreOrder();
}
else if(button==3){
    node.printPostOrder();
}

        System.out.print("How many number you want to  find :");
        int number2 = scan.nextInt();
        int enter2;
        for(iterator=1;iterator<=number2;iterator++){
            enter2 = scan.nextInt();
       boolean user=  node.find(enter2);
 

        }

    }





}
