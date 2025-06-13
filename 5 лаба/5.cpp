#include <iostream>

class Engine
{
public:
    int power;

    Engine(int p) : power(p) {}

    void start() { std::cout << "Двигатель запущен с мощностью " << power << " л.с." << std::endl; }
};

class Car
{
private:
    Engine engine;

public:
    Car(int p) : engine(p) {}

    void startCar()
    {
        engine.start();
        std::cout << "Автомобиль заведен." << std::endl;
    }
};

int main()
{
    Car car(200);
    car.startCar();

    return 0;
}