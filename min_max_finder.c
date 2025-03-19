#include <stdio.h>
double calculateHighest (double score1, double score2, double score3, double score4);
double calculateLowest (double score1, double score2, double score3, double score4);

int main ()
{
double score1, score2, score3, score4, lowest, highest;

  
printf("\nPlease enter number 1: ");
  scanf("%lf", &score1);
  
printf("\nPlease enter number 2: ");
    scanf("%lf", &score2);

printf("\nPlease enter number 3: ");
    scanf("%lf", &score3);

printf("\nPlease enter number 4: ");
  scanf("%lf", &score4);
printf("\nPlease enter number 1: ");
  scanf("%lf", &score1);
  
printf("\nPlease enter number 2: ");
    scanf("%lf", &score2);

printf("\nPlease enter number 3: ");
    scanf("%lf", &score3);

printf("\nPlease enter number 4: ");
  scanf("%lf", &score4);

  highest = calculateHighest(score1, score2, score3, score4);
  lowest = calculateLowest(score1, score2, score3, score4);

  printf("\nNumber 1: %.2lf\n", score1);
    printf("Number 2: %.2lf\n", score2);
    printf("Number 3: %.2lf\n", score3);
    printf("Number 4: %.2lf\n", score4);
    printf("Lowest: %.2lf\n", lowest);
    printf("Highest: %.2lf\n", highest);
  


return 0;
  }
double calculateHighest (double score1, double score2, double score3, double score4)
{
  double max = score1;
  if (score1<score2)
    max = score2;
  if (score2<score3)
    max = score3;
  if (score3<score4)
    max = score4;
  return max;
}
double calculateLowest (double score1, double score2, double score3, double score4)
{
  double min = score1;
  if (score1>score2)
    min = score2;
  if (score2>score3)
    min = score3;
  if (score3>score4)
    min = score4;
  return min;
}












