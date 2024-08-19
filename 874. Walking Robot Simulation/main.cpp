#include <tuple>
#include <vector>
#include <algorithm>

class Solution {
public:
    bool isRigged(int x, int y, const std::vector<std::vector<int>>& obstacles) {
        for (const auto& obstacle : obstacles) {
            if (obstacle[0] == x && obstacle[1] == y) {
                return false;
            }
        }
        return true;
    }

    int robotSim(std::vector<int>& commands, std::vector<std::vector<int>>& obstacles) {
        auto coords = std::make_tuple(0, 0);
        int direction = 0;
        int max_distance = 0;

        for (auto i = commands.begin(); i != commands.end(); ++i) {
            if (*i == -1) {
                direction = (direction + 1) % 4;
            } else if (*i == -2) {
                direction = (direction + 3) % 4;
            } else {
                for (int j = 0; j < *i; ++j) {
                    if (direction == 0) {
                        if (isRigged(std::get<0>(coords), std::get<1>(coords) + 1, obstacles)) {
                            std::get<1>(coords) += 1;
                        }
                    } else if (direction == 1) {
                        if (isRigged(std::get<0>(coords) + 1, std::get<1>(coords), obstacles)) {
                            std::get<0>(coords) += 1;
                        }
                    } else if (direction == 2) {
                        if (isRigged(std::get<0>(coords), std::get<1>(coords) - 1, obstacles)) {
                            std::get<1>(coords) -= 1;
                        }
                    } else if (direction == 3) {
                        if (isRigged(std::get<0>(coords) - 1, std::get<1>(coords), obstacles)) {
                            std::get<0>(coords) -= 1;
                        }
                    }
                    max_distance = std::max(max_distance, std::get<0>(coords) * std::get<0>(coords) + std::get<1>(coords) * std::get<1>(coords));
                }
            }
        }

        return max_distance;
    }
};