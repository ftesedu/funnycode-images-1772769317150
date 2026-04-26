import java.util.Scanner;

class Product {
    // 1. Tạo các thuộc tính
    String id;
    String name;
    double price;
    double discount;

    // 2. Tạo constructor để khởi tạo sản phẩm
    public Product(String id, String name, double price, double discount) {
        this.id = id;
        this.name = name;
        this.price = price;
        this.discount = discount;
    }

    // 3. Tạo phương thức tính giá sau khi giảm
    public double getFinalPrice() {
        return price - (price * discount / 100);
    }

    // 4. Tạo phương thức static in thông tin cửa hàng
    public static void storeInfo() {
        System.out.println("Cửa hàng FunnyCode – FPT University");
    }

    // Phương thức bổ trợ để in thông tin sản phẩm
    public void displayDetails() {
        System.out.println("--- Thông tin sản phẩm ---");
        System.out.println("Mã: " + id);
        System.out.println("Tên: " + name);
        System.out.println("Giá gốc: " + price);
        System.out.println("Giảm giá: " + discount + "%");
        System.out.println("Giá sau giảm: " + getFinalPrice());
    }
}

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        // Nhập thông tin từ bàn phím
        System.out.print("Nhập mã sản phẩm: ");
        String id = sc.nextLine();
        
        System.out.print("Nhập tên sản phẩm: ");
        String name = sc.nextLine();
        
        System.out.print("Nhập giá gốc: ");
        double price = sc.nextDouble();
        
        System.out.print("Nhập % giảm giá: ");
        double discount = sc.nextDouble();

        // Tạo đối tượng Product
        Product p = new Product(id, name, price, discount);

        // In thông tin sản phẩm và giá cuối cùng
        p.displayDetails();

        // Gọi phương thức static để in thông tin cửa hàng
        Product.storeInfo();
        
        sc.close();
    }
}