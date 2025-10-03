#include <stdio.h>

int math;
int phy;
int chem; //กำหนดตัวแปร Global

void inputAndShow() { //สร้าง function ชื่อ inputAndShow
    printf("\nScore: Math = %d, Physics = %d, Chemistry = %d\n", math, phy, chem);
}  // นำค่าจากตัวแปร Global ที่รับมามาเเสดงผลใน function inputAndShow

int main() {
   
    printf("Enter Math: ");
    scanf("%d",&math);

    printf("Enter Physics: ");
    scanf("%d",&phy);

    printf("Enter Chemistry: ");
    scanf("%d",&chem); //รับค่าของคะเเนนทั้ง 3 วิชา เเล้วเก็บไว้ในตัวแปร Global

    inputAndShow(); // เรียกใช้ function inputAndShow เพื่อเเสดงผลค่าคะเเนนที่รับมา

    return 0;
}