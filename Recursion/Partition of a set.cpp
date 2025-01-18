#include <iostream>
#include <vector>

// 打印一个二维向量
void printPartitions(const std::vector<std::vector<int>>& partitions) {
    for (const auto& partition : partitions) {
        std::cout << "{ ";
        for (int element : partition) {
            std::cout << element << " ";
        }
        std::cout << "} ";
    }
    std::cout << std::endl;
}

// 递归函数，用于生成集合的所有划分
void generatePartitions(int n, int k, std::vector<std::vector<int>>& partitions, std::vector<int>& currentPartition, int index) {
    if (index == n + 1) {
        printPartitions(partitions);
        return;
    }

    for (int i = 0; i < k; ++i) {
        currentPartition[index] = i;
        partitions[i].push_back(index);
        generatePartitions(n, k, partitions, currentPartition, index + 1);
        partitions[i].pop_back();
    }
    
    if (k < n) {
        currentPartition[index] = k;
        partitions[k].push_back(index);
        generatePartitions(n, k + 1, partitions, currentPartition, index + 1);
        partitions[k].pop_back();
    }
}

int main() {
    int n;
    std::cout << "Enter the number of elements in the set: ";
    std::cin >> n;

    std::vector<std::vector<int>> partitions(n);
    std::vector<int> currentPartition(n + 1);

    generatePartitions(n, 0, partitions, currentPartition, 1);

    return 0;
}
