import java.util.Scanner;
public class Main{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int L=sc.nextInt();
        int A=sc.nextInt();
        int B=sc.nextInt();
        int C=sc.nextInt();
        int D=sc.nextInt();
        int K=(int)Math.ceil((double)A/C);
        int M=(int)Math.ceil((double)B/D);
        System.out.println(L-Math.max(K,M));
        sc.close();
    }
}