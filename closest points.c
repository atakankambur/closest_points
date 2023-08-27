#include <stdio.h>
#include <math.h>

struct Point{
int x[5],y[5],z[5];
};

int main() {

  int i,j,p1,p2;
  float min_distance=1000,num1,num2;

  struct Point apoint;

  for(i=0;i<5;i++){
    printf("Enter %d. Point(x,y,z):",i+1);
    scanf("%d %d %d",&apoint.x[i],&apoint.y[i],&apoint.z[i]);
    
  }

    for (i = 0; i < 5; i++){
        for (j = 0; j < 4; j++){
          if(i!=j+1){
          num1=sqrt(pow(apoint.x[i]-apoint.x[j+1],2)+pow(apoint.y[i]-apoint.y[j+1],2)+pow(apoint.z[i]-apoint.z[j+1],2));
          }
          if(num1<0)
            num1=num1*(-1);
          if(num1<min_distance){
            min_distance=num1;
            p1=i+1;
            p2=j+2;
          }
      }
    }
  printf("Closest points are Point-%d and Point-%d Distance between them = %f",p1,p2,min_distance);
  return 0;
}