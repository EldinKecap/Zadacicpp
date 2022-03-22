import java.util.InputMismatchException;
import java.util.Scanner;

public class Main {

    public static int provjera (Scanner sc){
        int a = 0;
        boolean b=true;
        while(b){
        try{
            a = sc.nextInt();
            System.out.println(a);
            b=false;
        }catch(InputMismatchException ex){
            System.out.println("pogresan u3nos");
            sc.next();
        }
        }
        return a;
    };
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a;
        a = provjera(sc);
        System.out.print(a);
    }
}
