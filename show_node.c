#include <stdio.h>
#include <stdlib.h>
#include "ttt.h"
#include <string.h>
/*Prints off the specific board specified by the user.*/
int main(int argc, char * argv[]){
    int i = 0;
    
    init_boards();
    init_board(START_BOARD);
    join_graph(START_BOARD);
    compute_score();
    if(argc != 1){
        for(i = 1; i < argc; i++){
            print_node(htable[atoi(argv[i])]);
        }
    } 
    
}