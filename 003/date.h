class Date
{
public:
    explicit Date(int newMonth, int newDay, int newYear);
    void setMonth(int newMonth);
    void setDay(int newDay);
    void setYear(int newYear);
    int getMonth() const;
    int getDay() const;
    int getYear() const;
    void displayDate() const;
private:
    int month;
    int day;
    int year;
};
