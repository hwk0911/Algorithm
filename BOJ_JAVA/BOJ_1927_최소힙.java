import java.util.ArrayList;
import java.util.Scanner;

public class BOJ_1927_최소힙 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int N = sc.nextInt();
        ArrayList<Integer> arr = new ArrayList<Integer>();

        Integer num;

        for (int i = 0; i < N; i++) {
            if ((num = sc.nextInt()) == 0) {
                if (arr.isEmpty())
                    System.out.println(0);
                else {
                    getMin(arr);
                }
            } else
                arr.add(num);
        }
    }

    public static void getMin(ArrayList<Integer> arr) {
        int min = arr.get(0);
        int index = 0;

        for (int i = 1; i < arr.size(); i++) {
            if (min > arr.get(i)) {
                index = i;
                min = arr.get(i);
            }
        }

        System.out.println(min);
        arr.remove(index);

        return;
    }
}
