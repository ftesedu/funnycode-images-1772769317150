package exercise01;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        
        System.out.print("Nhap ma san pham: ");
        String id = sc.nextLine();

        System.out.print("Nhap ten san pham: ");
        String name = sc.nextLine();

        System.out.print("Nhap gia goc: ");
        double price = Double.parseDouble(sc.nextLine());

        System.out.print("Nhap % giam gia: ");
        double discount = Double.parseDouble(sc.nextLine());

        
        Product p = new Product(id, name, price, discount);

        
        p.display();

       
        Product.storeInfo();
    }
}
    
