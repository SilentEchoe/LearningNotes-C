#include <iostream>
#include <chrono>
#include <thread>

int main() {
    int count_down = 10;
    while (count_down > 0) {
        std::cout << count_down << std::endl;
        std::this_thread::sleep_for(std::chrono::seconds(1));
        count_down--;
    }
    std::cout << "Time's up!" << std::endl;
    return 0;
}
