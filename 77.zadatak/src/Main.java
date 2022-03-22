import java.util.ArrayList;

public class Main {
    public static void main(String[] args) {
        ArrayList list = new ArrayList();
        Osoba o = new Osoba();
        Ucenik u = new Ucenik();
        list.add(o);
        list.add(u);
        System.out.println(list);
     }
}
