#include <iostream>
#include <cmath>

int main() {
        int n = std::pow(2,15);
        int j = 1;

        int countMe = 0;

        while (j < n) {
                countMe++;
                j =  j /2;
        }
        std::cout << countMe << std::endl;
}
