class Solution {
    public double solution(int[] arr) {
        int r=0;
        for(int n:arr){
            r+=n;
        }
        return (double)r/arr.length;
    }
}