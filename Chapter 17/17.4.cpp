#include <vector>
#include <queue>
#include <iostream>
#include <cstdlib>
#include "17.4h.h"

using namespace std;
void Simulation() {
    while(!event_queue.empty()) {
        Event* next_event = event_queue.top();
        event_queue.pop();
        next_event->do_event();
        delete next_event;
    }
}

class HotDogStand {
public:
    HotDogStand(int s);
  
    bool can_seat();
  
    void customer_leaves();
private:
    int empty_seats;
};

HotDogStand(int s) : empty_seats(s) {}

bool HotDogStand.can_seat() {
    if (empty_seats > 0) {
        empty_seats--;
        return true;
    } else
        return false;
}

void HotDogStand.customer_leaves() {
    empty_seats++;
}

HotDogStand freds(3);

class ArriveEvent {
public:
    ArriveEvent(int t);
    void do_event();
};

class LeaveEvent {
public:
    LeaveEvent(int t);
    void do_event();
};

ArriveEvent(int t) : Event(t) {}

void ArriveEvent.do_event() {
    if (freds.can_seat()) {
        cout << "time " << time << " Customer is seated ";
        freds.schedule_event(new LeaveEvent(time + random_int(1, 5)));
    }
    else
        cout << "time " << time << " Customer is unable to find a seat, leaves ";
}

LeaveEvent(int t) : Event(t) {}

void LeaveEvent.do_event() {
    cout << "time " << time << " Customer finishes eating, leaves ";
    freds.customer_leaves();
}

int main() {
    for (int i = 0; i < 50; i++)
        freds.schedule_event(new ArriveEvent(random_int(1, 60)));
    freds.run();
    return 0;
}