#include <stdio.h>

//与えられた配列を並び替えるための関数
void highScoreOrder(int array[],int size){
    //配列の要素文
    for (int i=0; i<size-1; i++){
        for (int j=0; j<size-1;j++){
            if(array[j] < array[j+1]){         
                int Replacement = array[j];    
                array[j] = array[j+1];         
                array[j+1] = Replacement;      
            }
        }
    }
}





int main(){
    const int SIZE = 6; //定数として配列のサイズを宣言                          
    int scores[SIZE] = {100, 60, 70, 100, 90, 80};

    // 関数呼び出し時には、引数として配列名をそのまま記述する。
   
    printf("scores = ");
    for(int i=0; i<SIZE; i++){
        printf("%d ",scores[i]);
    }

    highScoreOrder(scores,SIZE);

    printf("results = ");
    for(int i=0; i<SIZE; i++){
        printf("%d ",scores[i]);
    }

    

    return 0;
    
}

/*
    実装したいこと
    ・並び替えた後のリスト（配列）を用意する
    ・自作の関数を一つ以上含む
    
    
*/

