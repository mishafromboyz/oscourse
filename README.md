# oscourse
[![Build Status](https://travis-ci.com/vladxyk/LiteSh1.svg?branch=main)](https://github.com/mishafromboyz/oscourse)
<br>Данный проект содержит следующий функционал
<br>
<br>   копирование файла - требуется путь до файла и путь до директории, куда нужно его скопировать
<br>   перемещение файла - требуется путь к файлу и путь до директории, куда нужно его переместить
<br>   удаление файла - требуется путь к удаляемому файлу
<br>   определение размера файла/директории - требуется путь к файлу/директории
<br>   отображение всех процессов ОС (реализовано с помощью /proc/)
<br>
<br>Проект способен запускать описанные выше функции на стороне сервера, а все результаты выполнения функций пользователь видит на стороне клиента.
<br>
<br>Во время запуска клиента укажите тот же порт, какой был указан серверу.
><br>$ ./Server 8010
><br>$ ./Client 8010
<br>
