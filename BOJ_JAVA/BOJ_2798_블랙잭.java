import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.Scanner;

public class BOJ_2798_블랙잭 {
    public static void main(String[] args)throws IOException {
        int N, M;
        int maxSum = 0;
        int sum = 0;
        Scanner sc = new Scanner(System.in);

        N = sc.nextInt();
        M = sc.nextInt();

        ArrayList<Integer> arr = new ArrayList<Integer>();

        for(int i = 0 ; i < N ; i++){
            arr.add(sc.nextInt());
        }

        for(int i = 0 ; i < N - 2 ; i++){
            for(int j = i + 1 ; j < N - 1 ; j++){
                for(int k = j + 1 ; k < N ; k++){
                    sum = arr.get(i) + arr.get(j) + arr.get(k);
                    if( sum <= M && sum > maxSum)
                        maxSum = sum;
                }
            }
        }

        System.out.println(maxSum);
    }
}
