#include "main.h"

/*
ccid : nawalage 

 *the main includes main.h 
 -g for generating sequences 
 -o for outputing it to file
 -c for lcs
 -p for lps
 -t for lts
 -cp for lcps 
 -ct for lcts 

 NOTE: I'm in the A3 section so I have used Hazel's algorithm.

 for outputting it to text file. I have used Enter___Output() 
 * 
*/
int main(int agrc, char *argv[]){
  if (agrc <= 1){
    printf("Error, need more arguments\n");
  }
  if(agrc > 1){
    if(agrc == 2){
      if(strcmp(argv[1], "-g") == 0){
        printf("Generating sequences\n");
        generatesequence();
      }
      else if(strcmp(argv[1], "-p") == 0){
        EnterSequenceForLPS();
      }   
      else if(strcmp(argv[1], "-c") == 0){
        EnterSequenceForLCS();
      }
      else if(strcmp(argv[1], "-t") == 0){
        EnterSequenceForLTS();
      }
      else if(strcmp(argv[1], "-cp") == 0){
        EnterSequenceForLCPS();
      }
      else if(strcmp(argv[1], "-ct") == 0){
        EnterSequenceForLCTS();
      }
    }
    if(agrc > 2){
      if(strcmp(argv[1], "-g") == 0){
        if (strcmp(argv[2], "-o") == 0){
          printf("Generating sequences\n");
          generatesequenceandfile(argv[3]);
        }
      }
      if((strcmp(argv[1], "-c") == 0) && (strcmp(argv[2], "-i") == 0)){
      }
      else if((strcmp(argv[1], "-p") == 0) && (strcmp(argv[2], "-i") == 0)){
        
      }
      else if((strcmp(argv[1], "-t") == 0) && (strcmp(argv[2], "-i") == 0)){
        
      }
      else if((strcmp(argv[1], "-cp") == 0) && (strcmp(argv[2], "-i") == 0)){
        
      }
      else if((strcmp(argv[1], "-ct") == 0) && (strcmp(argv[2], "-i") == 0)){
        
      }
      if((strcmp(argv[1], "-c") == 0) && (strcmp(argv[2], "-o") == 0)){
        file = argv[3];
        EnterSequenceForLCSOutput();
      }
      else if((strcmp(argv[1], "-p") == 0) && (strcmp(argv[2], "-o") == 0)){
        file = argv[3];
        EnterSequenceForLPSOutput();
      }
      else if((strcmp(argv[1], "-t") == 0) && (strcmp(argv[2], "-o") == 0)){
        file = argv[3];
        EnterSequenceForLTSOutput();
      }
      // else if((strcmp(argv[1], "-cp") == 0) && (strcmp(argv[2], "-o") == 0)){
      //   file = argv[3];
      //   EnterSequenceForLCPSOutput();
      // }
      // else if((strcmp(argv[1], "-ct") == 0) && (strcmp(argv[2], "-o") == 0)){
      //   file = argv[3];
      //   EnterSequenceForLCTSOutput();
      // }
    }
  }
}