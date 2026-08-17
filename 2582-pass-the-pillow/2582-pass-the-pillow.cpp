class Solution {
public:
    int passThePillow(int n, int time) {
        n--;
        int dir=(time/n)%2;

        int rem = time%n;

        if(dir==0) return 1+rem;
        else return n-rem+1;

    }
};