import java.util.Scanner;

public class BOJ_1330_두수비교하기 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Integer A, B;

        A = sc.nextInt();
        B = sc.nextInt();

        switch(A.compareTo(B)){
            case -1:
                System.out.println('<');
                break;
            case 0:
                System.out.println("==");
                break;
            default:
                System.out.println('>');
        }
    }
}
