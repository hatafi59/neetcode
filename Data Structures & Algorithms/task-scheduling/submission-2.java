class Solution {
    public int leastInterval(char[] tasks, int n) {
        int[] freq = new int[26];
        int max_freq=0;
        for(char t:tasks){
            freq[t-'A']++;
            max_freq=Math.max(max_freq,freq[t-'A']);
        }
        int max_count=-1;
        for(int f:freq)
            if(f==max_freq) max_count++;

        int ans = (max_freq-1)*n+max_freq+max_count;

        return Math.max(tasks.length,ans);

    }
}
