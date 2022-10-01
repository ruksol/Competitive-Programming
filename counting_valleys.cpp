//question link: https://www.hackerrank.com/challenges/counting-valleys/problem

int countingValleys(int steps, string path) {
    int x=0;
    int y=0;
    int z=0;
    int ans=0;
    for(int i=0; i<steps-1; i++){
        z=x+y;
        if(path[i]=='U'){
            x++;
        }
        else {
            y--;
        }
        if(x+y<0 && z==0){
            ans ++;
        }
    }
    return ans;
}