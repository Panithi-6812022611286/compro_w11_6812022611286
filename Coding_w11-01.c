#include <stdio.h>

void inputAndShow() {

    int math;
    int phy;
    int chem;

    printf("Enter Math: ");
    scanf("%d",&math);

    printf("Enter Physics: ");
    scanf("%d",&phy);

    printf("Enter Chemistry: ");
    scanf("%d",&chem);

    printf("Score: Math = %d, Physics = %d, Chemistry = %d", math, phy, chem);
}

int main() {
    inputAndShow();
    return 0;
}