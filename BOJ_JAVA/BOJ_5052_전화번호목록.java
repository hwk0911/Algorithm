package BOJ_JAVA;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.*;

public class BOJ_5052_전화번호목록 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int t, n;
        boolean flag = true;
        ArrayList<String> number = new ArrayList<>();
        t = Integer.parseInt(br.readLine());

        for(int i = 0 ; i < t ; i++){
            n = Integer.parseInt(br.readLine());
            for(int j = 0 ; j < n ; j++){
                number.add(br.readLine());
            }

            Collections.sort(number);

            for(int j = 0 ; j < number.size() - 1; j++){
                for(int k = j + 1 ; k < number.size() ; k++){
                    if(number.get(j).length() >= number.get(k).length()){
                        break;
                    }
                    else if(number.get(j).equals(number.get(k).substring(0, number.get(j).length()))) {
                        flag = false;
                        break;
                    }
                 }
                if(!flag){
                    System.out.println("NO");
                    break;
                }
            }
            if(flag){
                System.out.println("YES");
            }
            number.clear();
            flag = true;
        }
    }
}
