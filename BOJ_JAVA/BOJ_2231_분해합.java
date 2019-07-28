import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class BOJ_2231_분해합 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        Integer N = Integer.parseInt(br.readLine());
        String data;

        Integer answer = 0;
        Integer num = 1;

        num = N - 45;

        num--;
        while(!answer.equals(N)){
            num++;
            answer = num;
            data = num.toString();
            for(int i = 0 ; i < data.length() ; i++){
                answer += data.charAt(i) - '0';
            }
            if(num > N){
                num = 0;
                break;
            }
        }
        System.out.println(num);
    }
}
