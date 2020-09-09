#include<stdio.h>
void toh(int, char, char, char);
int main()
{

  int n;
  //char A, B, C;




  printf("Enter value of Plates\n");
  scanf("%d",&n);
  toh(n,'A','C','B');
  return 0;
}


//void toh(int n, char from_rod, char to_rod, char aux_rod)
void toh(int n, char from_rod, char to_rod, char Aux_rod)
{
  if(n==1)
  {
    printf("\nMove 1 disk from %c to %c",from_rod,to_rod);
    return;
  }
  toh(n-1, from_rod, Aux_rod, to_rod);
  printf("\nMove %d disk from %c to %c",n,from_rod,to_rod);
  toh(n-1,Aux_rod,to_rod,from_rod);
}

//If value is 1 them Move that Plat from A to C
//IF value is 2 then MOve n-1 Plat from A to B & Remaning from A to C & the B to C
//Break Every Number with n-1 & Then Take Action Accordingly.
