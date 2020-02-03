import java.util.Scanner;

public class BOJ_15964_이상한기호 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        long A, B;

        A = sc.nextInt();
        B = sc.nextInt();

        System.out.println((A * A) - (B * B));
    }
}
