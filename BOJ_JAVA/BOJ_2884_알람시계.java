import java.util.Scanner;

public class BOJ_2884_알람시계 {
    public static void main(String[] args) {
        Integer H, M;

        Scanner sc = new Scanner(System.in);

        H = sc.nextInt();
        M = sc.nextInt();

        if(M >= 45)
            M -= 45;
        else{
            H--;
            if(H < 0)
                H += 24;
            M = M + 15;
        }
        System.out.println(H + " " + M);
    }
}
