import java.io.*;

public class BOJ_1697_숨바꼭질 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        String[] readLine = br.readLine().split(" ");

        int N = Integer.parseInt(readLine[0]);
        int K = Integer.parseInt(readLine[1]);
        boolean[] visited = new boolean[100001];
        visited[N] = true;

        if(N > K) {
            System.out.println(N - K);
            return;
        }

        int currectTime = 0;

        while(!visited[K]) {
            ++currectTime;
            visited = setVisited(visited);
        }

        System.out.println(currectTime);
    }

    public static boolean[] setVisited (boolean[] visited) {
        boolean[] temp = new boolean[visited.length];

        for(int index = 0, size = visited.length ; index < size ; ++index) {
            if(visited[index]) {
                if(index - 1 >= 0 && index - 1 <= 100000 ) {
                    temp[index - 1] = true;
                }
                if(index + 1 >= 0 && index + 1 <= 100000) {
                    temp[index + 1] = true;
                }
                if(index * 2 >= 0 && index * 2 <= 100000) {
                    temp[index * 2] = true;
                }
            }
        }

        return temp;
    }
}
