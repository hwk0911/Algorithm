package Greedy;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.List;

public class BOJ_1541_잃어버린괄호 {
    public static void main(String[] args) throws Exception{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        String equation = br.readLine();
        StringBuilder sb = new StringBuilder();
        List<Integer> numberList = new ArrayList<>();
        int lastIndex = 0;

        numberList.add(0);

        for(int index = 0, size = equation.length() ; index < size ; ++index) {
            Character charAt = equation.charAt(index);

            if(charAt == '-') {
                numberList.set(lastIndex, numberList.get(lastIndex) + Integer.parseInt(sb.toString()));
                sb = new StringBuilder();
                numberList.add(0);
                ++lastIndex;
            }
            else if(charAt == '+') {
                numberList.set(lastIndex, numberList.get(lastIndex) + Integer.parseInt(sb.toString()));
                sb = new StringBuilder();
            }
            else {
                sb.append(charAt);
            }
        }

        numberList.set(lastIndex, numberList.get(lastIndex) + Integer.parseInt(sb.toString()));

        int reulst = numberList.get(0);

        for(int index = 1, size = numberList.size() ; index < size ; ++index) {
            reulst -= numberList.get(index);
        }

        System.out.println(reulst);
        br.close();
    }
}
