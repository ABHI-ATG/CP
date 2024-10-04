import java.util.*;

class Pair{
    public int a,b;
    Pair(int a,int b){
        this.a=a;
        this.b=b;
    }
}


// a<b  -1
// a==b 0
// a>b  1

class comp implements Comparator<Pair>{
    public int compare(Pair a,Pair b){
        if(a.a==b.a){
            if(a.b==b.b){
                return 0; 
            }else if(a.b<b.b){
                return -1;
            }
            return 1;
        }
        if(a.a<b.a){
            return -1;
        }
        return 1;
    }

}



// set lb

class JCF {

    public static void main(String[] args) throws java.lang.Exception {
        Scanner sc = new Scanner(System.in);


        // 
        // initially all elements of array is 0
        int[] a=new int[4];
        // Integer[] a={9,1,5,0};
        a[0]=9;
        a[1]=1;
        a[2]=5;
        // Arrays.sort(a);
        // Arrays.sort(a,0,3); // 3 is exclusive
        // for(int ele:a){
        //     System.out.println(ele);
        // }

        Integer[] b=new Integer[6];
        Arrays.fill(a,0);
        // for(int ele:b)System.out.println(ele);
        // Arrays.sort(b,Collections.reverseOrder());
        // now Collections.reverseOrder() will work as it does not work for primitive type






        // 
        // 
        // 
        // vector - arrayList
        ArrayList<Integer> arr=new ArrayList<>();
        arr.add(4);
        arr.add(7);
        arr.add(6);
        arr.add(5);

        // to access element at index
        // System.out.println(arr.get(0));

        // sort ArrayList
        Collections.sort(arr);
        Collections.sort(arr,Collections.reverseOrder());

        // for each loop
        // for(int ele:arr){
        //     System.out.print(ele+" ");
        // }
        // System.out.println();

        // to change element at particular index
        // arr.set(0,5);





        // 
        // 
        ArrayList<Pair> p=new ArrayList<>();

        p.add(new Pair(3,5));
        p.add(new Pair(1,4));
        p.add(new Pair(1,6));
        p.add(new Pair(1,2));
        p.add(new Pair(2,3));

        Collections.sort(p,new comp());

        // for(Pair ele:p){
        //     System.out.println(ele.a+" "+ele.b);
        // }

        Set<Integer> st=new TreeSet<>();
        st.add(2);
        st.add(5);
        st.add(1);
        st.add(1);
        for(int ele:st){
            System.out.println(ele);
        }

        Map<Integer,Integer> mp=new HashMap<>();
        mp.put(1,1);
        mp.put(1,2);
        if(mp.containsKey(1)){
            // System.out.println("yes");
        }

        tmp.put(x,tmp.getOrDefault(x,0)+1);

        for(Map.Entry<Integer,Integer> a : tmp.entrySet()){
            mp.put(a.getKey(),mp.getOrDefault(a.getKey(), 0)+1);
        }


        Arrays.sort(p,Comparator.comparingInt((Pair pair) -> pair.a).reversed());

        Collections.sort(brr,Collections.reverseOrder());

    }

}