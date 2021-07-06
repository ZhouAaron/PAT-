//
//  main.cpp
//  1001 害死人不偿命的(3n+1)猜想
//
//  Created by 周杰 on 2021/7/6.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int n, count = 0;
    cin >> n;
    while(n!=1)
    {
        if (n%2 == 0) {
            n /= 2;
        }else{
            n = (3 * n + 1)/2;
        }
        count++;
    }
    printf("%d", count);
    return 0;
}
