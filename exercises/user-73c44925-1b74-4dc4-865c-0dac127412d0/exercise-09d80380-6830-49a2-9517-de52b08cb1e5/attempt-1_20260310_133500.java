package quanlythucung;

import java.util.ArrayList;

public class Main {

    public static void main(String[] args) {

       Dog d = new Dog("Mun",2,10.5);
        Cat c = new Cat("Miu", 2, 4.5);

        ArrayList<Pet> pets = new ArrayList<>();
        pets.add(d);
        pets.add(c);

        for (Pet p : pets) {
            System.out.println(p.speak());
        }

        d.fetchBall();
        c.chaseMouse();
    }
}