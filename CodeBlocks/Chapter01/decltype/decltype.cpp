/* decltype.cpp */
#include <iostream>

// ���ø� �Լ��� �����Ѵ�.
template<typename I, typename J>
auto add(I i, J j) -> decltype(i + j)
{
    return i + j;
}

auto main() -> int
{
    std::cout << "[decltype.cpp]" << std::endl;

    // ���ø� �Լ��� ȣ���Ѵ�.
    auto d = add<int, double>(2, 2.5);

    // ����� ����Ѵ�.
    std::cout << "result of 2 + 2.5: " << d << std::endl;

    return 0;
}

