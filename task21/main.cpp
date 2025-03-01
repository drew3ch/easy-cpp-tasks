/*
Составить программу-тест в MVS на языке программирования С++: на экране по очереди появляются вопросы (вопросы выбираются программистом), с вариантами ответов. В конце работы программа выдает количество заработанных баллов по результатам ответа.
Решение данной задачи неоднозначно, у каждого программиста мозг работает по своему. Поэтому код будет отличаться в любом случае, даже если вы тоже в программе используете операторы выбора if и оператор множественного выбора switch. Кстати, среду программирования выбирайте на свое усмотрение, не обязательно использовать Microsoft Visual Studio.
*/

#include <iostream>
#include <string>

using namespace std;

struct Question {
    string question;        // Вопрос
    string answers[3];     // Варианты ответов
    int correctAnswer;     // Индекс правильного ответа
};

int main() {
    const int numQuestions = 3; // Количество вопросов
    Question quiz[numQuestions] = {
        {"How many cat lives?", {"5 lives", "7 lives", "9 lives"}, 2},
        {"How many centimeters in a meter?", {"10 centimeters", "100 centimeters", "1000 centimeters"}, 1},
        {"The speed of sound?", {"340 m/s", "320 m/s", "240 m/s"}, 0}
    };

    int score = 0; // Счетчик правильных ответов

    // Проход по вопросам
    for (int i = 0; i < numQuestions; ++i) {
        cout << i + 1 << ") " << quiz[i].question << endl;
        cout << "answers:" << endl;
        for (int j = 0; j < 3; ++j) {
            cout << "-> " << quiz[i].answers[j] << endl;
        }

        int userAnswer;
        cout << "your answer (enter 1, 2, or 3): ";
        cin >> userAnswer;

        // Проверка ответа
        if (userAnswer - 1 == quiz[i].correctAnswer) {
            cout << "Correct!" << endl;
            score++;
        } else {
            cout << "Wrong! The correct answer is: " << quiz[i].answers[quiz[i].correctAnswer] << endl;
        }
        cout << endl; // Пустая строка для разделения вопросов
    }

    // Вывод результата
    cout << "Rating = " << score << " ball(s)" << endl;

    return 0;
}
