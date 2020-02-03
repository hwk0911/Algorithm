import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class BOJ_3053_택시기하학 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        Integer R = Integer.parseInt(br.readLine());

        System.out.printf("%.6f\n", R * R * Math.PI);
        System.out.printf("%.6f\n", (double) R * R * 2);
    }
}
