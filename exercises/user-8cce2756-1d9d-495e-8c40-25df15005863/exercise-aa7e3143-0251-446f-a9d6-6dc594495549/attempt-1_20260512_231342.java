/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package baitap1;

import java.util.Scanner;

/**
 *
 * @author ADMIN
 */
public class Product {
    // 1. Thuộc tính   
    String id, name;
    double price, discount;
//=================
    // 2. Constructor
    public Product(String id, String name, double price, double discount) {
        this.id = id;
        this.name = name;
        this.price = price;
        this.discount = discount;
    }
//=================
    // 3. Getter & Setter 

    public String getId() {
        return id;
    }

    public void setId(String id) {
        this.id = id;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public double getPrice() {
        return price;
    }

    public void setPrice(double price) {
        this.price = price;
    }

    public double getDiscount() {
        return discount;
    }

    public void setDiscount(double discount) {
        this.discount = discount;
    }
//=================    
    // Sau khi giảm giá 
    public double getFinalPrice() {
        return price - (price * discount / 100);
    }  
 //=================  
    // Tạo phương thức static void storeInfo()
    public static void storeInfo() {
        System.out.println("Cua hang FunnyCode - FPT University");
    }
    
    
    public static void main(String[] args) {
        // TODO code application logic here
      Scanner sc = new Scanner( System.in );
      
      System.out.println("Nhap ma san pham");
      String id = sc.nextLine();
      
      System.out.println("Nhap ten san pham");
      String name = sc.nextLine();
      
      System.out.println("Nhap gia goc:");
      Double price = Double.parseDouble(sc.nextLine());
      
      System.out.println("Nhap % giam gia");
      Double discount = Double.parseDouble(sc.nextLine());
      
      // Tạo Object
      Product p = new Product(id, name, price, discount);
      
      // In ra thông tin sản phẩm và giá cuối cùng
      
        System.out.println("\n--- Thong tin san pham ---");
        System.out.println("Ma: " + p.getId());
        System.out.println("Ten: " + p.getName());
        System.out.println("Gia goc: " + (long)p.getPrice());
        System.out.println("Giam gia: " + (long)p.getDiscount() + "%");
        System.out.println("Gia sau giam: " + (long)p.getFinalPrice());
      
      // Gọi Product.storeInfo() để in thông tin cửa hàng
      Product.storeInfo();
      
      sc.close();
      
    }
    //Nhập dữ liệu

    
}
