package Greedy;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.Arrays;

public class BOJ_2217_로프 {
    public static void main(String[] args) throws Exception{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        Integer N = Integer.parseInt(br.readLine());
        Integer min = Integer.MAX_VALUE;

        int[] rope = new int[N];

        for(int index = 0 ; index < N ; ++index) {
            rope[index] = Integer.parseInt(br.readLine());
        }

        int max = Integer.MIN_VALUE;
        Arrays.sort(rope);

        for(int index = 0 ; index < N ; ++index) {
            max = Math.max(max, rope[index] * (N - index));
        }

        System.out.println(max);
    }
}
