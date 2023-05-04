#include<stdio.h>
void main()
{
     int students[5][4], count = 0, flash = 0, sum[5], temp = 0;
     for (flash = 0; flash < 5; flash++)
     {
          printf("Enter marks for student %d ", flash + 1);
          for (count = 0; count < 4; count++)
          {
               printf("\nEnter marks for subject %d ", count + 1);
               scanf("%d", &students[flash][count]);
          }
     }
     for (flash = 0; flash < 5; flash++)
     {
          printf("the value of marks for student %d are", flash + 1);
          for (count = 0; count < 4; count++)
          {
               printf("\nsubject %d = %d ", count + 1, students[flash][count]);
          }
     }
     for (flash = 0; flash < 5; flash++)
     {
          sum[flash] = 0;
          for (count = 0; count < 4; count++)
          {
               sum[flash] = sum[flash] + students[flash][count];
          }
     }
     for (flash = 0; flash < 5; flash++)
     {
          for (count = flash + 1; count < 4; count++)
          {
               if (sum[flash] > sum[count])
               {
                    temp = sum[flash];
                    sum[flash] = sum[count];
                    sum[count] = temp;
               }
          }
     }
     printf("the value of sum in ascending order is ");
     count = 0;
     while (count < 4)
     {
          printf("\n = %d ", count + 1, sum[count]);
          count++;
     }
     // for(count=2;count<4;count++)
     // {
     //      if (sum[1] > sum[count])
     //      {
     //           temp = sum[1];
     //           sum[1] = sum[count];
     //           sum[count] = temp;
     //      }
     // }
     // if (sum[0] > sum[2])
     // {
     //      temp=sum[0];
     //      sum[0] = sum[2];
     //      sum[2] = temp;
     // }
}