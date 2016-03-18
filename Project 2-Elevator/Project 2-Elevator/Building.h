#include "Elevator.h"
#include "Person.h"
#include <list>
#include <queue>

class building {
	struct grid {
		int floorNo;
		bool elevator=false;
	};
	list<grid> frame;
	list<elevator> elevator;
	queue<int> floorCalls;
	int numberFloors;
public:
	building();
	void setFloor();
	void getCurFloor();
	void getElevator();
	void getFloorCalls();
};
