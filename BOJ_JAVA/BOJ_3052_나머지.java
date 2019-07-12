package BOJ_JAVA;

import java.util.Scanner;

public class BOJ_3052_나머지 {
    public static void main(String[] args) {
        Integer count = 0;

        Scanner sc = new Scanner(System.in);

        int[] data = new int[42];

        for(int i = 0 ; i < 10 ; i++){
            data[sc.nextInt() % 42]++;
        }
        for(int i = 0 ; i < 42 ; i++){
            if(data[i] != 0)
                count++;
        }

        System.out.println(count);

    }
}
