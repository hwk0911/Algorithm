package Greedy;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
import java.util.StringTokenizer;

public class BOJ_11399_ATM {
    public static void main(String[] args) throws Exception{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        Integer total = 0;

        Integer N = Integer.parseInt(br.readLine());
        StringTokenizer st = new StringTokenizer(br.readLine());

        List<Integer> P = new ArrayList<>();

        while (st.hasMoreTokens()) {
            P.add(Integer.parseInt(st.nextToken()));
        }

        Collections.sort(P);

        for(int index = 0 ; index < N ; ++index) {
            total += (N - index) * P.get(index);
        }

        System.out.println(total);
    }
}
