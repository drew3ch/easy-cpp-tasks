/*
Составить программу-тест в MVS на языке программирования С++: на экране по очереди появляются вопросы (вопросы выбираются программистом), с вариантами ответов. В конце работы программа выдает количество заработанных баллов по результатам ответа.
Решение данной задачи неоднозначно, у каждого программиста мозг работает по своему. Поэтому код будет отличаться в любом случае, даже если вы тоже в программе используете операторы выбора if и оператор множественного выбора switch. Кстати, среду программирования выбирайте на свое усмотрение, не обязательно использовать Microsoft Visual Studio.
*/

#include <iostream>
#include <string>

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
        std::cout << i + 1 << ") " << quiz[i].question << std::endl;
        std::cout << "answers:" << std::endl;
        for (int j = 0; j < 3; ++j) {
            std::cout << "-> " << quiz[i].answers[j] << std::endl;
        }

        int userAnswer;
        std::cout << "your answer (enter 1, 2, or 3): ";
        std::cin >> userAnswer;

        // Проверка ответа
        if (userAnswer - 1 == quiz[i].correctAnswer) {
            std::cout << "Correct!" << std::endl;
            score++;
        } else {
            std::cout << "Wrong! The correct answer is: " << quiz[i].answers[quiz[i].correctAnswer] << std::endl;
        }
        std::cout << std::endl; // Пустая строка для разделения вопросов
    }

    // Вывод результата
    std::cout << "Rating = " << score << " ball(s)" << std::endl;

    return 0;
}
