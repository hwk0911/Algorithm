import java.util.ArrayList;
import java.util.Scanner;

public class BOJ_5052_전화번호목록 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String data;
        int t, n;
        int length;
        t = sc.nextInt();
        ArrayList<String> [][] number = new ArrayList[t][11];
        for(int i = 0 ; i < t ; i++){
            n = sc.nextInt();
            for(int j = 0 ; j < n ; j++){
                data = sc.nextLine();
                number[i][data.length()].add(data);
            }
            for(int j = 1 ; j < 10 ; j++){

            }
        }
    }
}

