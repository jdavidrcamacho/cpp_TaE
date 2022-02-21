#include <cstdlib>
#include <iostream>
#include <numeric>
#include <tuple>
#include <vector>

using namespace std::string_literals;

auto twoVectors() -> std::tuple<std::vector<int>, std::vector<int>>
{
    const std::vector<int> a = { 1, 2, 3 };
    const std::vector<int> b = { 4, 5, 6 };
    return { a, b };
}

auto main() -> int
{
    auto [a, b] = twoVectors();
    auto const sum = std::accumulate(a.begin(), a.end(), std::accumulate(b.begin(), b.end(), 0));
    std::cout << "sum: "s << sum << std::endl;
    return EXIT_SUCCESS;
}