class Solution {
    public String firstPalindrome(String[] words) {
        String str = "";
        for(int i = 0; i < words.length; i++){
            str = words[i];
            if(str.length() > 0){
                int l = 0;
                int r = str.length()-1;
                if(str.length() == 1) return str;
                while(l < r){
                    if(str.charAt(l) == str.charAt(r)){
                        l++;
                        r--;
                    } else{
                        break;
                    }
                    if(l == r) return str;
                }
            }
        }
        return "";
    }
}