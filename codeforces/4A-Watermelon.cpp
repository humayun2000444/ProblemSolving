#include <iostream>

int main() {
    int W,i;
    scanf("%d",&W);
    if(W%2==0)
        {
            if(W<3)
            std::cout << "NO";
            else
            std::cout << "YES";
        }
    else
    std::cout << "NO";

    return 0;
}
