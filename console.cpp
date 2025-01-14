// подключение библиотеки для ввода-вывода потока консоли (preprocessor directive)
// Препроцессор читает вашу программу до ее компиляции и выполняет только эти строки, 
// начинающиеся с символа #. Думайте о препроцессоре как о программе, которая "настраивает" 
// ваш исходный код для компилятора.
// Для записи или вывода символов на консоль применяется объект cout, который представляет тип ostream. 
// А для чтения с консоли используется объект cin


#include <iostream>

// Оператор, использующий пространство имен std; заявляет, что программа будет 
// получать доступ к объектам, имена которых являются частью пространства имен, 
// называемого std. (Да, даже пространства имен имеют имена.) Причина, по которой 
// программе нужен доступ к пространству имен std, заключается в том, что каждое имя, 
// созданное файлом iostream, является частью этого пространства имен. Чтобы 
// программа использовала сущности в iostream, она должна иметь доступ к пространству имен std.
using namespace std;
//std - standart namespace

// функция main - это точка старта/ основная функция
int main() {
    // это вывод:
    // чтобы сделать перенос строки добавляется endl
    cout << "hello" << endl;
    //также можно обратиться к пространству веёремен непосредственно в statement
    // в таком случае не нужно использовать using namespace std; как сверху
    // делается это сч помощью имени и двойного двоеточия:
    std::cout << "bye" << std::endl;
    // перевод строки можно сделать и с \n
    cout << "gmorning\n";

    // возвращаем значение - 0 - говорит об успешном выполнении файла
    return 0;
}