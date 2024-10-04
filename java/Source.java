import java.util.*;
import java.io.*;

public class Source{
    
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();

        List<String> a = new ArrayList<>();
        List<String> b = new ArrayList<>();
        for(int i=0;i<n;i++){
            String s=sc.next();
            a.add(s);
        }
        for(int i=0;i<n;i++){
            String s=sc.next();
            b.add(s);
        }
        List<String> ans = new ArrayList<>();

        for (int i = 0; i < a.size(); i++) {
            String s1 = "", t1 = "";
            String s2 = "", t2 = "";

            for (int j = 0; j < a.get(i).length(); j++) {
                if (j % 2 == 0) {
                    s1 += a.get(i).charAt(j);
                    s2 += b.get(i).charAt(j);
                } else {
                    t1 += a.get(i).charAt(j);
                    t2 += b.get(i).charAt(j);
                }
            }

            char[] s1Array = s1.toCharArray();
            char[] s2Array = s2.toCharArray();
            char[] t1Array = t1.toCharArray();
            char[] t2Array = t2.toCharArray();

            Arrays.sort(s1Array);
            Arrays.sort(s2Array);
            Arrays.sort(t1Array);
            Arrays.sort(t2Array);

            if (Arrays.equals(s1Array, s2Array) && Arrays.equals(t1Array, t2Array) && a.get(i).length()==b.get(i).length()) {
                ans.add("Yes");
            } else {
                ans.add("No");
            }
        }
        System.out.println(ans);
        
    }
}