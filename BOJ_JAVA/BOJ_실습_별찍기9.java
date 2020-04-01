import java.io.*;

public class BOJ_실습_별찍기9 {
    static BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        StringBuilder star = new StringBuilder();

        int N = Integer.parseInt(br.readLine());

        for (int index = 0, size = N * 2 - 1; index < size; ++index) {
            star.append("*");
        }

        reculsive(N, 1, new StringBuilder(), star);

        bw.flush();
        bw.close();
    }

    public static void reculsive(int N, int tempN, StringBuilder blank, StringBuilder star) throws IOException {
        if (N == tempN) {
            bw.write(blank.toString()+ star.toString() + "\n");
            return;
        }

        bw.write(blank.toString() + star.toString() + "\n");
        reculsive(N, tempN + 1, blank.append(" "), star.delete(0, 2));
        star.append("**");
        blank.delete(0, 1);

        bw.write(blank.toString() + star.toString() + "\n");
    }
}
