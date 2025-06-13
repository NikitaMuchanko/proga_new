#include <iostream>

namespace Game
{
namespace Physics
{
void applyGravity()
{
    std::cout << "Gravity applied!" << std::endl;
}
} // namespace Physics
} // namespace Game

int main()
{
    Game::Physics::applyGravity();
    return 0;
}