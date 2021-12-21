#pragma once /* Защита от двойного подключения заголовочного файла */

enum Сurrency {
    RUB,
    USD,
    EUR
};

struct Date {
    int day;
    int month;
    int year;
    
    Date(int newDay, int newMonth, int newYear);
    Date();
    
    std::string getDate();
};

class Сontribution {
    private:

        int sum;
        Date date;
        int percent;
    
    protected: // Содержимое наследуется, но не может испоьзоваться напрямую
    
        Сontribution();
        Сontribution(int newSum, Date newDate, int newPercent);

    public:
        virtual ~Сontribution() = default;
    
        int getSum();
        std::string getDate();
        int getPercent();
        virtual std::string showAll() = 0; // Чистая (пустая) виртуальная функция.   Реализация не будет наследоваться!
};

class SimpleСontribution: public Сontribution {
    private:
    
        Date dateLast;
    
    public:
    
        SimpleСontribution(int newSum, Date newDate, int newPercent, Date newDateLast);
    
        std::string getDateLast();
        std::string showAll() override;
};

class UrgentСontribution: public Сontribution {
    private:
    
        int termOfDepositInMonths;
    
    public:
    
        UrgentСontribution(int newSum, Date newDate, int newPercent, int newTermOfDepositInMonths);
    
        int getTermOfDepositInMonths();
        std::string showAll() override;
};

class CurrencyСontribution: public SimpleСontribution {
    private:
    
        Сurrency curr;
        int exchangeRate;
    
    public:
    
        CurrencyСontribution(int newSum, Date newDate, int newPercent, Date newDateLast, Сurrency newCurr, int newExchangeRate);

        std::string getCurr();
        int getExchangeRate();
        std::string showAll() override;
};
