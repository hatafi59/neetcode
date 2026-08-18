class Solution {
    /**
     * @param {string} s
     * @param {number} k
     * @return {number}
     */
    characterReplacement(s, k) {
        const map={};
         let left = 0 ;
        let right = 0 ;
        let mostFreqCharCount = 0 ;
   
    for(right = 0 ; right < s.length ; right++){
        map[s[right]]=(map[s[right]] || 0)+1;
        mostFreqCharCount = Math.max(mostFreqCharCount, map[s[right]]);
        if(right - left + 1   > k+mostFreqCharCount ){
            map[s[left++]]-- ;
        }
    }
    return right - left ;
    }
}
