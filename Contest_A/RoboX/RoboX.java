import java.util.*;

public class RoboX {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();

        while (t-- > 0) {
            int n = sc.nextInt();
            int p = sc.nextInt();

            String str = sc.next();

            int ans = (p % 2 == 0 ? 1 : 0);
            for (int i = 0; i < n; i++) {
                if (str.charAt(i) == 'R')
                    p++;
                else if (str.charAt(i) == 'L')
                    p--;

                if (p % 2 == 0)
                    ans++;
            }

            System.out.println(ans);
        }
        sc.close();
    }
}
