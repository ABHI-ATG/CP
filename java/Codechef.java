//JAI SHREE RAM
import java.util.*;
import java.lang.*;
import java.io.*;

//Atg
class Codechef {

    public static int solve(int n){
        String a="";
        while(n>0){
            if(n%2==1){
                a+='1';
            }else{
                a+='0';
            }
        }
        int sz=a.length();
        if(sz%2==0){
            for(int i=0;i<sz/2;i++){
                if(a.charAt(i)!=a.charAt(sz-1-i)){
                    return 0;
                }
            }
            return 1;
        }
        return 0;
    }

    public static void main(String[] args) throws java.lang.Exception {
        Scanner sc = new Scanner(System.in);

        final int N=200500;
        int[] p=new int[N];

        for(int i=1;i<N;i++){
            p[i]=p[i-1]+solve(i);
        }

        int t = 1;
        t = sc.nextInt();
        while (t-- > 0) {
            int n=sc.nextInt();
            System.out.println(p[n]);
        }
    }

}

// ATG