import java.io.*;

public class BOJ_2523_실습_별찍기13 {
    static BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int N = Integer.parseInt(br.readLine());

        reculsive(N, 1, "*");
        bw.flush();
    }

    public static void reculsive (int N, int tempN, String star) throws IOException{
        if(tempN == N) {
            bw.write(star);
            return;
        }

        bw.write(star);
        bw.write("\n");
        reculsive(N, tempN + 1, star + "*");
        bw.write("\n");
        bw.write(star);
    }
}