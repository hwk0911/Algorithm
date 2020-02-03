import java.util.Scanner;

public class BOJ_2753_윤년 {
    public static void main(String[] args) {
        Integer A;
        Scanner sc = new Scanner(System.in);

        A = sc.nextInt();

        if (A % 4 == 0 && A % 100 != 0)
            System.out.println(1);
        else if (A % 400 == 0)
            System.out.println(1);
        else
            System.out.println(0);
    }
}
