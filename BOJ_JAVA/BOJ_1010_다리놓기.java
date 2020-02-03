import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class BOJ_1010_다리놓기 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        Integer[][] data = new Integer[30][30];
        Integer T, N, M;

        for (int i = 0; i < 30; i++) {
            data[0][i] = i + 1;
            data[i][i] = 1;
        }

        for (int i = 1; i < 30; i++) {
            for (int j = i + 1; j < 30; j++) {
                data[i][j] = data[i - 1][j - 1] + data[i][j - 1];
            }
        }

        T = Integer.parseInt(br.readLine());
        for (; T != 0; T--) {
            StringTokenizer st = new StringTokenizer(br.readLine());
            N = Integer.parseInt(st.nextToken());
            M = Integer.parseInt(st.nextToken());
            System.out.println(data[N - 1][M - 1]);
        }
    }
}
