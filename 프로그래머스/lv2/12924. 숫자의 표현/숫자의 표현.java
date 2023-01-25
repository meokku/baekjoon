class Solution {
    public int solution(int n) {
        int cnt=0;
        for(int i=1;i<=n;i++){
            int r=0;
            for(int j=i;j<=n;j++){
                r+=j;
                if(r>n) break;
                if(r==n){
                    cnt+=1; break;
                }
            }
        }
        return cnt;
    }
}