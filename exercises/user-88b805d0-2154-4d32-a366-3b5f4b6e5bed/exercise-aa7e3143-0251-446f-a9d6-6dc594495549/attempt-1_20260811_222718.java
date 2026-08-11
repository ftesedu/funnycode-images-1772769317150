/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package JavaApplication2;

import java.util.Scanner;

/**
 *
 * @author ender
 */
public class Product {
    public String id;
    public String name;
    public int price;
    public int discount;

    public Product(String id, String name, int price, int discount) {
        this.id = id;
        this.name = name;
        this.price = price;
        this.discount = discount;
    }
    
    double getFinalPrice(){
        return price-(price*discount/100);
    }
    
    static void storeInfo(){
        System.out.println("Cửa hàng FunnyCode – FPT University");
    }
    
    public static void main(String[] args) {
        
        Scanner sc = new Scanner(System.in);
        System.out.println("Nhập mã sản phẩm:");
        String id=sc.nextLine();
        System.out.println("Nhập tên sản phẩm:");
        String name=sc.nextLine();
        System.out.println("Nhập giá gốc:");
        int price= Integer.parseInt(sc.nextLine());
        System.out.println("Nhập % giảm giá:");
        int discount= Integer.parseInt(sc.nextLine());
        
        Product num1= new Product(id, name, price, discount);
        
        System.out.println("Mã: "+num1.id+"\n"+"Tên: "+ num1.name+"\n"+"Giá gốc: "+num1.price+"\n"+"Giảm giá: "+num1.discount+"\n"+"Giá sau giảm: "+num1.getFinalPrice());
        
        num1.storeInfo();
        
    }
    
}
