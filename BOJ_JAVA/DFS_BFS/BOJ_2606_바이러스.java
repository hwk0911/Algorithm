package DFS_BFS;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.*;

public class BOJ_2606_바이러스 {
    public static void main(String[] args) throws Exception{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        Integer N = Integer.parseInt(br.readLine());
        Integer link = Integer.parseInt(br.readLine());

        Map<Integer, Queue<Integer>> linkMap = new WeakHashMap<>();

        StringTokenizer st;

        for(int index = 0 ; index < link ; ++index) {
            st = new StringTokenizer(br.readLine());

            Integer key = Integer.parseInt(st.nextToken());
            Integer value = Integer.parseInt(st.nextToken());

            setMap(linkMap, key, value);
            setMap(linkMap, value, key);
        }

        int result = 0;
        boolean[] visited = new boolean[N];
        visited[0] = true;

        Queue<Integer> BFS = linkMap.get(1);

        while (!BFS.isEmpty()) {
            Integer next = BFS.poll();

            if(visited[next - 1]) continue;

            visited[next - 1] = true;
            Queue<Integer> nextQueue = linkMap.get(next);

            while (!nextQueue.isEmpty()) {
                Integer node = nextQueue.poll();

                if(visited[node - 1]) continue;

                BFS.offer(node);
            }
        }

        for(boolean check : visited) {
            if(check) ++result;
        }

        System.out.println(result - 1);
    }

    public static Map<Integer, Queue<Integer>> setMap (Map<Integer, Queue<Integer>> linkMap, int key, int value) {
        Queue<Integer> tempQueue;

        if(linkMap.containsKey(key)) {
            tempQueue = linkMap.get(key);
        }
        else {
            tempQueue = new LinkedList<>();
        }

        tempQueue.offer(value);

        linkMap.put(key, tempQueue);

        return linkMap;
    }
}