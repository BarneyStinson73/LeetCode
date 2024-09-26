
class Solution {
    public String reverseWords(String s) {
        String[] t=s.split("\\s+");
        String ans="";
        for(String r:t){
            ans=r+" "+ans;
        }
        return ans.trim();
        
    }
}
class Main{
    public static void main(String[] args){
        System.out.println("Hello World");
    }
}