// WAP to find a the answer given formula (x+y+z)2.

void main(){
    int x,y,z,p;
    printf("Enter value of x = ");
    scanf("%d",&x);

    printf("Enter value of y = ");
    scanf("%d",&y);

    // z = (x*x*x) + (y*y*y) + 3*x*y*(x+y);
    p = (x+y+z)*(x+y+z);
    printf("(x+y+z)2 = %d",p);
}