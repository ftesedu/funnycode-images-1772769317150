
package Btvn5;

import java.util.ArrayList;

public class Main {
    public static void main(String[] args) {
        Dog dog = new Dog("Cho muc",3,20.5);
        
        Cat cat = new Cat();
        cat.setName("Meo trang");
        cat.setAge(1);
        cat.setWeight(5.5);
        
        dog.speak();
        dog.fetchBall();
        cat.speak();
        cat.chaseMouse();
        
    }
    
}
