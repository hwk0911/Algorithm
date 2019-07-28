import java.util.Scanner;

public class BOJ_11021_AsumB_8 {
    public static void main(String[] args) {
        String command = "Case #";

        Integer T, A, B;

        Scanner sc = new Scanner(System.in);

        T = sc.nextInt();

        for(int i = 0; i < T ; i++){
            A = sc.nextInt();
            B = sc.nextInt();

            System.out.println(command + (i+1) + ": "  + A + " + " + B + " = " + (A+B));
        }
    }
}
