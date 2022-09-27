
int main(){

int row1 = 4;
int col1 = 4;
int row2 = 2;
int col2 = 2;

int top = 0;
int bottom = row1 - row2;
int left = 0;
int right = col1 - col2;
int coord[2];
int dir = 0;

 while(top <= bottom && left <= right){
    if(dir == 0){
        for(int i = left; i < right + 1; i++){
            coord[0] = top;
            coord[1] = i;
            for(int i = 0; i < 2; i++){
              printf("%d ", coord[0]);
              printf("%d\n", coord[1]);  
            }
        }
        dir = 1;
        top++;
    }else if(dir == 1){
       for(int i = top; i < bottom + 1; i++){
            coord[0] = i;
            coord[1] = right;
            for(int i = 0; i < 2; i++){
              printf("%d ", coord[0]);
              printf("%d\n", coord[1]);  
            }    
        }
        dir = 2;
        right--; 
    } else if (dir == 2){
        for(int i = right; i >= left; i--){
            coord[0] = bottom;
            coord[1] = i;
            for(int i = 0; i < 2; i++){
              printf("%d ", coord[0]);
              printf("%d\n", coord[1]); 
            }
        }
        dir = 3;
        bottom--; 
    }else if(dir == 3){
        for(int i = bottom; i >= top; i--){
            coord[0] = i;
            coord[1] = left;
            for(int i = 0; i < 2; i++){
              printf("%d ", coord[0]);
              printf("%d\n", coord[1]); 
            }
        }
        dir = 0;
        left++; 
    }
 }

    return 0;
}