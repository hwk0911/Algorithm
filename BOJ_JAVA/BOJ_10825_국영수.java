import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;

public class BOJ_10825_국영수 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringBuilder sb = new StringBuilder();
        int N;
        N = Integer.parseInt(br.readLine());

        List<Student> students = new ArrayList<>(N);

        String[] data;

        for (int i = 0; i < N; i++) {
            data = br.readLine().split(" ");
            students.add(new Student(data[0], data[1], data[2], data[3]));
        }

        Collections.sort(students);

        for(Student s : students)
            sb.append(s.name).append("\n");

        System.out.print(sb);
    }

    static class Student implements Comparable<Student> {
        String name;
        int ko;
        int en;
        int ma;

        public Student(String name, String ko, String en, String ma) {
            this.name = name;
            this.ko = Integer.parseInt(ko);
            this.en = Integer.parseInt(en);
            this.ma = Integer.parseInt(ma);
        }

        @Override
        public int compareTo(Student o) {
            if (this.ko == o.ko) {
                if (this.en == o.en) {
                    if (this.ma == o.ma) {
                        return o.name.compareTo(this.name);
                    } else if (this.ma < o.ma) {
                        return 1;
                    }
                } else if (this.en < o.en) {
                    return 1;
                }
            } else if (this.ko < o.ko) {
                return 1;
            }
            return -1;
        }
    }
}
