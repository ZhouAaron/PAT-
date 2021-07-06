//
//  main.cpp
//  1002 写出这个数
//
//  Created by 周杰 on 2021/7/6.
//

#include <iostream>
#include <string.h>
#include <cmath>
using namespace std;
const int maxSize = 110;
int main(int argc, const char * argv[]) {
    char number[10][5] ={{"ling"},{"yi"},{"er"},{"san"},{"si"},{"wu"},{"liu"},{"qi"},{"ba"},{"jiu"}};
    
    char n[maxSize];
    cin >> n;
    int total = 0;
    int len = strlen(n);
    for (int i = 0; i<len; i++) {
        total += n[i] - '0';
    }
    int num[10];
    int i = 0;
    int temp;
    while (total!= 0) {
        temp = total % 10;
        num[i] = temp;
        i++;
        total /= 10;
    }
    for (; i!=0; i--) {
        printf("%s",number[num[i-1]]);
        if (i -1 != 0) {
            printf(" ");
        }
    }
    return 0;
}
