import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.lang.*;
import java.util.ArrayList;
import java.util.List;

public class BOJ_14002_가장_긴_증가하는_부분_수열4 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int N;
        N = Integer.parseInt(br.readLine());
        List data = new ArrayList<Integer>();
        List answer = new ArrayList<Integer>();
        String[] num;
        num = br.readLine().split(" ");

        for(int i = 0 ; i < N ; i++) {
            data.add(Integer.parseInt(num[i]));
        }
        for(int i = 0 ; i < N ; i++){
            if(answer.isEmpty())
                answer.add(data.get(i));
            else{

            }
        }
    }
}
