range = r*c;
   i = 0;
   j = c/2;
   array[i][j] = count;

   while(count < range) {
      count++;
      if((i-1) < 0 && (j-1) < 0)    //when both row and column crosses the range
         i++;  
      else if((i-1) <0) {    //when only row crosses range, set i to last row, and decrease j
         i = r-1;
         j--;
      }else if((j-1) < 0) {    //when only col crosses range, set j to last column, and decrease i
         j = c-1;
         i--;  
      }else if(array[i-1][j-1] != 0)    //when diagonal element is not empty, go to next row
         i++;
      else{
         i--;
         j--;
      }
      array[i][j] = count;
   }