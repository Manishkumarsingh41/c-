class MyCalendar {
public:
    vector<pair<int, int>> booked;

    MyCalendar() {}

    bool book(int start, int end) {
        for (auto& event : booked) {
            if (start < event.second && end > event.first) {
                return false;
            }
        }
        booked.push_back({start, end});
        return true;
    }
};
