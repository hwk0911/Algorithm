import java.util.Scanner;

public class BOJ_1546_평균 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        float max = 0;
        float sum = 0;
        float num;

        for(int i = 0 ; i < N ; i++) {
            num = sc.nextInt();
            if (max < num) max = num;
            sum += num;
        }
        System.out.printf("%.2f",sum / (max*N) * 100);
    }
}
