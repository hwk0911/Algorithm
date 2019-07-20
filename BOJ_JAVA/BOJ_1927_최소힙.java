package BOJ_JAVA;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.PriorityQueue;

public class BOJ_1927_최소힙 {

    public static void main(String[] args) throws IOException {
        PriorityQueue<Integer> heap = new PriorityQueue<>();
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int N, x;

        N = Integer.parseInt(br.readLine());

        for(int i = 0 ; i < N ; i++){
            x = Integer.parseInt(br.readLine());
            if(x == 0){
                if(heap.isEmpty())
                    System.out.println(0);
                else{
                    System.out.println(heap.poll());
                }
            }
            else{
                heap.add(x);
            }
        }
    }
}
