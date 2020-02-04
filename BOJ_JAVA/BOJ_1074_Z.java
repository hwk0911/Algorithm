import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class BOJ_1074_Z {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String[] input = br.readLine().split(" ");

        Integer N = Integer.parseInt(input[0]);
        Integer r = Integer.parseInt(input[1]);
        Integer c = Integer.parseInt(input[2]);


        System.out.println(answer);
    }

    public static int GetAnswer(Integer N, Integer r, Integer c, Integer x, Integer y, Integer count, Integer Size) {
        System.out.println(count + " " + x + " " + y);

        if (r == x && c == y) {
            return count;
        }

    }
}

/*
최대 (2^15)^2 칸의 배열이 주어진다.
boolean 배열로 선언한다 해도
Bytes : 1,073,741,824
GBytes : 1.073741824

문제의 조건으로 최대 메모리 용량은 512MB 따라서 배열을 선언해서 풀지 못한다.
따라서 가상의 배열을 만들어 그 배열에서 계산하듯이 풀어야 한다.
 */