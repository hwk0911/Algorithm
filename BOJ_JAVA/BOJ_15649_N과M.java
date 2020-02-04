import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class BOJ_15649_N과M {
    public void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        String[] splitBuffer = br.readLine().split(" ");
        Integer N = Integer.parseInt(splitBuffer[0]);
        Integer M = Integer.parseInt(splitBuffer[1]);
        boolean[] visited = new boolean[N];

        for(int index = 0, size = N ; index < size ; index++){
            visited[index] = true;
            DFS(index + 1, N, M, visited);
            visited[index] = false;
        }
    }

    public void DFS(int firstNumber, Integer N, Integer M, boolean[] visited){
        for(int index = 0 ; index < N ; index++){
            if(!visited[index]){
                visited[index] = true;
                System.out.println(firstNumber + " " + index + 1);
                DFS(firstNumber, N, M, visited);
                visited[index] = false;
            }
        }
    }
}

/*
1부터 N까지 자연수 중에서 중복 없이 M개를 고른 수열 출력

 */