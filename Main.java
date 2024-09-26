class Solution {
    public int lengthOfLastWord(String s) {
        String[] temp=s.split(" ");
        return temp[temp.length-1].length();
    }
}

public class Main{
    public static void main(String[] args) {
        System.out.println("Hello World");
    }

}