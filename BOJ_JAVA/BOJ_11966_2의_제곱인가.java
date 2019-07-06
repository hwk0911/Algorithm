import java.util.Scanner;

public class BOJ_11966_2의_제곱인가 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int num = sc.nextInt();

        for (int i = 0, j = 1; i < 31; i++) {
            if (num == j) {
                System.out.println(1);
                return;
            } else if (num < j)
                break;
            j *= 2;
        }

        System.out.println(0);
        return;
    }
}
