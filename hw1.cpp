#include <iostream>
#include <chrono>
#include <vector>

void findKey(std::vector<int> A) {
        std::sort(A.begin(), A.end());
        for (int i=0; i < A.size(); ++i) {
                std::cout << A[i] << std::endl;
                //for (int j=0; j < A.size(); ++j) {
                //        std::cout << A[j] << std::endl;
                //}
        }
}

int main() {
        auto t1 = std::chrono::high_resolution_clock::now();
        std::vector<int> A = {18,23,4,35,99,67,198,20,38,55,2,18,19,487,11,40,10,13,27,22};
        findKey(A);
        auto t2 = std::chrono::high_resolution_clock::now();

        auto duration = std::chrono::duration_cast<std::chrono::microseconds>(t2-t1).count();

        std::cout << "\n" << "Execution Time: " << duration << " μs" << std::endl;
        return 0;

}

