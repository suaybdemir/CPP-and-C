#include <vector>
#include <string>


int main(void)
{
    std::vector<std::string> svec;

    std::size_t idx{};

    swap(svec[idx],svec.back());
    svec.pop_back();

    return 0;
}