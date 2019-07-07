import java.util.Scanner;

public class BOJ_2953_나는요리사다 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int num = 0, score = 0, sum = 0;

        for(int i = 0 ; i < 5 ; i++){
            sum += sc.nextInt();
            sum += sc.nextInt();
            sum += sc.nextInt();
            sum += sc.nextInt();
            if(score < sum){
                score = sum;
                num = i + 1;
            }
            sum = 0;
        }
        System.out.println(num + " " + score);
    }
}
