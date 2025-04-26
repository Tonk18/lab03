#include "solver.h"

namespace solver {
    std::string solve(const std::string& equation) {
        return formatter_ex::format_ex("Solution for " + equation);
    }
}