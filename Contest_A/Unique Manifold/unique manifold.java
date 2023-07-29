import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();

        while (t-- > 0) {
            int n = scanner.nextInt();

            ArrayList<Integer> arr = new ArrayList<>();
            for (int i = 0; i < n; i++)
                arr.add(scanner.nextInt());

            Collections.sort(arr);
            int ans = 0;

            for (int i = 1; i < n; i++) {
                if (arr.get(i) <= arr.get(i - 1)) {
                    ans += arr.get(i - 1) - arr.get(i) + 1;
                    arr.set(i, arr.get(i - 1) + 1);
                }
            }

            System.out.println(ans);
        }
    }
}
