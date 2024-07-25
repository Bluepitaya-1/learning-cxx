#include "../exercise.h"
#include <numeric>

// READ: `std::accumulate` <https://zh.cppreference.com/w/cpp/algorithm/accumulate>

int main(int argc, char **argv) {
    using DataType = float;
    int shape[]{1, 3, 224, 224};
    // TODO: 调用 `std::accumulate` 计算 `shape` 的元素之积
    // int size = std::accumulate(shape,shape+3,1,[](int x,int y){return x*y;});
    int size = std::accumulate(shape,shape+3,1,std::multiplies<int>());
    ASSERT(size = 602112, "4x1x3x224x224 = 602112");
    return 0;
}
