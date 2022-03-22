import java.util.Scanner;
public class Java {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int [][]matrica = new int[3][3];
        for (int i = 0 ; i<3 ;i++){
            for (int j=0; j<3 ; j++){
            matrica[i][j]= sc.nextInt();

            }
        }
        for (int i = 0 ; i<3 ;i++){
            for (int j=0; j<3 ; j++){
        System.out.print(matrica[i][j]);
                System.out.print("\t");
            }
            System.out.println("\n");
        }
    }
}
