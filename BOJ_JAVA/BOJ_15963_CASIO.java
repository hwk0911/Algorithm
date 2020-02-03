import java.util.Scanner;

public class BOJ_15963_CASIO {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        String N, M;

        N = sc.next();
        M = sc.next();

        if (N.equals(M))
            System.out.println(1);
        else
            System.out.println(0);
    }
}
