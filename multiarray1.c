// Write a programe to accept 5 subject for 5 student using multiarray amd find sum and average
#include <stdio.h>
void main()
{
     int students[5][5], count = 0, flash = 0, sum[5];
     float average = 0;
     for (flash = 0; flash < 5; flash++)
     {
          printf("\nEnter marks for student %d ", flash + 1);
          for (count = 0; count < 5; count++)
          {
               printf("\nEnter marks for subject %d ", count + 1);
               scanf("%d", &students[flash][count]);
          }
     }
     for (flash = 0; flash < 5; flash++)
     {
          printf("\nThe marks for student %d are ", flash + 1);
          for (count = 0; count < 5; count++)
          {
               printf("\nsubject %d = %d ", count + 1, students[flash][count]);
          }
     }
     for (flash = 0; flash < 5; flash++)
     {
          sum[flash] = 0;
          // sum[0] = students[0][0] + students[0][1]; // 10 + 20 = 30
          for (count = 0; count < 5; count++)
          {
               sum[flash] = sum[flash] + students[flash][count];
          }
          printf("\nthe value of sum for student %d is %d ", flash + 1, sum[flash]);
     }
     for(flash=0;flash<5;flash++)
     {
          average = average + sum[flash];
     }
     average = average / 5;
     printf("\nthe value of average is %f ",average);
     // average = average + sum[1];
     // average = average + sum[2];
     // average = average + sum[3];
     // average = average + sum[4];
     // sum[1] = 0;
     // for (count = 0; count < 5; count++)
     // {
     //      sum[1] = sum[1] + students[1][count];
     // }
     // printf("\nthe value of sum for student 2 is %d ", sum[1]);
     // sum[2] = 0;
     // for(count=0;count<5;count++)
     // {
     //      sum[2] = sum[2] + students[2][count];
     // }
     // printf("\nthe value of sum for student 3 is %d ", sum[2]);
     // sum[1] = sum[1]+students[1][1];
     // sum[1] = sum[1]+students[1][2];
     // sum[1] = sum[1]+students[1][3];
     // sum[1] = sum[1]+students[1][4];
     // sum[0] = sum[0] + students[0][1];
     // sum[0] = sum[0] + students[0][2]; // 30 + 30 = 60
     // sum[0] = sum[0] + students[0][3];// 60 + 40 = 100
     // sum[0] = sum[0] + students[0][4];

     // printf("\nThe marks for student 2 are ");
     // for (count = 0; count < 5; count++)
     // {
     //      printf("\nsubject %d = %d ",count+1,students[1][count]);
     // }
     // printf("\nsubject 2 - %d ",students[1][1]);
     // printf("subject 2 = %d", students[0][1]);
     // printf("subject 3 = %d ", students[0][2]);
     // printf("subject 3 = %d ", students[0][2]);
     // printf("subject 3 = %d ", students[0][2]);
     // printf("\nEnter marks for subject 2 ");
     // scanf("%d",&students[1][1]);
     // printf("\nEnter marks for subject 2 ");
     // scanf("%d",&students[0][1]);
     // printf("\nEnter marks for subject 3 ");
     // scanf("%d",&students[0][2]);
     // printf("\nEnter marks for subject 3 ");
     // scanf("%d",&students[0][2]);
     // printf("\nEnter marks for subject 3 ");
     // scanf("%d",&students[0][2]);
}