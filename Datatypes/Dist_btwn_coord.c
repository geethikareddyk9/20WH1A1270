/* to find distance between two co ordinates*/
#include<stdio.h>
#include<math.h>
int main()
{
    int x1,y1,x2,y2;
    double distance,req;
    scanf("%i%i%i%i",&x1,&y1,&x2,&y2);
    distance = pow((x1-x2),2) + pow((y1-y2),2);
    req = sqrt(distance);
    //printf("distance is %f ",distance);
    printf("\nDistance between two coordinates is %f ",req);
    return 1;
}
