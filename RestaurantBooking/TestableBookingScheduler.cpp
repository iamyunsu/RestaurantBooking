#include "BookingScheduler.cpp"

class TestableBookingScheduler : public BookingScheduler {
public:
	TestableBookingScheduler(int capacityPerHour, tm dateTime) :
		BookingScheduler{ capacityPerHour },
		dateTime{ dateTime } {
	}
	time_t getNow() override {
		return mktime(&dateTime);
	}
private:
	tm dateTime;
};