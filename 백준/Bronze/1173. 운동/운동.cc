#include <iostream>
using namespace std;

int calculate(int goalTime, int min, int max, int addTrain, int addRest);


int main(void)
{
	int goalTime;
	int min, max;
	int addTrain;
	int addRest;

	cin >> goalTime >> min >> max >> addTrain >> addRest;
	cout << calculate(goalTime, min, max, addTrain, addRest);

	return 0;
}

int calculate(int goalTime, int min, int max_, int addTrain, int addRest)
{
    if (min + addTrain > max_)  // 운동을 한 번도 할 수 없는 경우
        return -1;

    int now = min;            // 현재 맥박
    int nowTrainTime = 0;     // 현재까지 운동한 시간
    int timeCheck = 0;        // 전체 소요 시간

    while (nowTrainTime < goalTime)
    {
        if (now + addTrain <= max_)  // 운동이 가능한 경우
        {
            now += addTrain;
            nowTrainTime++;
            timeCheck++;
        }
        else  // 휴식이 필요한 경우
        {
            now = max(min, now - addRest);  // 최소 맥박 이하로 떨어지지 않도록 처리
            timeCheck++;

            if (now + addTrain > max_)  // 휴식을 취했는데도 운동할 수 없는 상태라면
            {
                continue;  // 다시 휴식을 취함
            }
        }
    }
    return timeCheck;
}

int max(int min, int rest)
{
    if (rest < min)
        return min;
}