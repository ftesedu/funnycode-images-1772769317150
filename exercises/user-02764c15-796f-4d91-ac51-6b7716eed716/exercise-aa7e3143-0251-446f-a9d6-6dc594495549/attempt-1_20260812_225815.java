
package exercise1;
import java.util.Scanner;


public class main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        System.out.print("Enter ID: ");
        String id = sc.nextLine();
        System.out.print("Enter name: ");
        String name = sc.nextLine();
        System.out.print("Enter price: ");
        double price = Double.parseDouble(sc.nextLine());
        System.out.print("Enter discount: ");
        double discount = Double.parseDouble(sc.nextLine());
        
        Product prd = new Product(id, name, price, discount);
        prd.display();
        System.out.println(prd.getFinalPrice());
        prd.storeInfo();
        
        System.out.print("Information of the product: ");
    }
    
}
