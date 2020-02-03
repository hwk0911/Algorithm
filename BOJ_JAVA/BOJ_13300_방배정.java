import java.util.Scanner;

public class BOJ_13300_방배정 {
    public static void main(String[] args) {
        int N, K;
        int S, Y;
        int num = 0;

        Scanner sc = new Scanner(System.in);

        N = sc.nextInt();
        K = sc.nextInt();

        int[][] data = new int[6][2];

        for (int i = 0; i < N; i++) {
            S = sc.nextInt();
            Y = sc.nextInt();

            data[Y - 1][S]++;
        }
        for (int i = 0; i < 6; i++) {
            num += (data[i][0] / K) + (data[i][1] / K);
            if (data[i][0] % K != 0)
                num++;
            if (data[i][1] % K != 0)
                num++;
        }
        System.out.println(num);
    }
}
