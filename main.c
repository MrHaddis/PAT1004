#include <stdio.h>

struct Student {
    char name[11];
    char num[11];
    int achievement;
};

int main() {
    int number;
    //记录一下输入的数量
    scanf("%d", &number);
    //定义一下分数最高的和最低的
    struct Student studentHall;
    struct Student studentLow;
    if (number <= 0) {
        return 0;
    }
    for (int i = 0; i < number; i++) {
        //获取每一次输入的值
        struct Student student;
        scanf("%s %s %d", student.name, student.num, &student.achievement);
        //第一次的时候初始化一下值
        if (i == 0) {
            studentHall = studentLow = student;
        } else {
            //后面进行判断，每次输入的新值和当前最高 或者最低比较即可，
            //没必要去弄个数组记录所有
            if (student.achievement > studentHall.achievement) {
                studentHall = student;
            }
            if (student.achievement < studentLow.achievement) {
                studentLow = student;
            }
        }
    }
    //最后输出结果即可
    printf("%s %s\n", studentHall.name, studentHall.num);
    printf("%s %s\n", studentLow.name, studentLow.num);
    return 0;
}
