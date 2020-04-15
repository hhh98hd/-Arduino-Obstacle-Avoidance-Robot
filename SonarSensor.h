class SonarSensor
{
private:
    int trig;
    int echo;
public:
    SonarSensor(int _trig, int _echo);

    int getDistance();
};


