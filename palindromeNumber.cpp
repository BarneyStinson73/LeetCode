class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
         return false;
        int reverse_array[10];
        int temp=x;
        int i=0,length=0;
        while(temp!=0){
            reverse_array[i]=temp%10;
            temp=temp/10;
            i++;
            length++;
        }
        for(int j=0;j<length/2;j++){
            if(reverse_array[j]!=reverse_array[length-j-1])
                return false;
        }
        return true;

    }
};