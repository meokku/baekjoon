import java.util.*;

public class Solution {
    public int solution(int n) {
        int R=0;
        while(true){
            R+=n%10;
            if(n<10) break;
            n/=10;
        }
        return R;
    }
}