import java.util.ArrayList;

public class Java {
    public static void main(String[] args) {
        ArrayList list = new ArrayList();
        for(int i = 0 ; i < 10 ; i++){
            list.add(i+1);
        }
        System.out.println(list);
    }
}
