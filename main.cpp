#include "libspace.h"

int main()
{
    txCreateWindow(1170, 870);

    // Прилет
    for(int i=1; i<150; i++)
    {
        clearall(TX_BLACK);
        txFloodFill(1,1);
        chip(800-i*3, 345, 255, 255, 128);
        txSleep(10);
    }

    // Свет
    for(int i=1; i<127; i++)
    {
        clearall(TX_BLACK);
        chip(350, 345, 255-i*2, 255-i*2, 128+i*0.1);
        txSleep(5);
    }

    text(200, 300, "О, нет, у нас\n кончилось электричество");

    // Люк
    for(int i=1; i<70; i++)
    {
        clearall(TX_BLACK);
        sozvezdia();
        chip(350, 345, 1, 1, 140.7);
        txSetColour(TX_LIGHTGRAY, 5);
        txLine(      585,   465, 845-i*2,  465+i);
        txSleep(17);
    }

    //shel_prishil
    for(int i=1; i<15; i++)
    {
        clearall(TX_BLACK);
        sozvezdia();
        shel(580+i*15, 405+i*10, 255, 128, 0);
        chip(350, 345, 1, 1, 140.7);
        txSetColour(TX_LIGHTGRAY, 5);
        txLine(      585,   465, 705,  535);
        txSleep(100);
    }

    for(int i=1; i<15; i++)
    {
        clearall(TX_BLACK);
        sozvezdia();
        shel(580+i*15, 405+i*10, 0, 128, 0);
        shel(805-i*7, 555, 255, 128, 0);
        chip(350, 345, 1, 1, 140.7);
        txSetColour(TX_LIGHTGRAY, 5);
        txLine(      585,   465, 705,  535);
        txSleep(100);
    }

    text(460, 500, "надо найти\n источник электричества");
    novai_vraza();
    text(570, 500, "где здесь его\n найти");
    novai_vraza();
    text(460, 500, "можно взять\n звезду");
    novai_vraza();
    text(570, 500, "она слишком\n горячая");

    for(int i=1; i<127; i++)
    {
        clearall(TX_BLACK);
        sozvezdia();
        shel(805, 555, 0, 128, 0);
        shel(700, 555, 255-i*2, 128, 0);
        chip(350, 345, 1, 1, 140.7);
        txSetColour(TX_LIGHTGRAY, 5);
        txLine(      585,   465, 705,  535);
        txSleep(5);
    }

    text(460, 500, "кхря кхря\n кхря кхря");
    novai_vraza2();
    text(570, 500, "тебе плохо?");
    novai_vraza2();
    text(460, 500, "а что не видно?\n я позеленел!!!");
    novai_vraza2();
    text(460, 500, "ой");
    novai_vraza2();
    text(570, 500, "то есть я-\n больной?");
    novai_vraza2();
    text(460, 500, "я не хотел\n говорить, но...");
    novai_vraza2();
    text(460, 500, "\n ДА!");
    novai_vraza2();
    text(570, 500, "\n разъясни-ка");
    novai_vraza2();
    text(460, 500, "лишь больной\n будет ");
    novai_vraza2();
    text(460, 500, "тратить весь заряд\n на сушку своих");
    novai_vraza2();
    text(460, 500, "НОСКОВ!!!");
    novai_vraza2();
    text(570, 500, "раз так-\n я улечу от тебя");
    novai_vraza2();
    text(460, 500, "\n ну давай");

    for(int i=1; i<410; i++)
    {
        clearall(TX_BLACK);
        sozvezdia();
        shel(805-i*2, 555, 0, 128, 0);
        shel(700, 555, 1, 128, 0);
        chip(350, 345, 1, 1, 140.7);
        txSetColour(TX_LIGHTGRAY, 5);
        txLine(585, 465, 705, 535);
        txSleep(0.1);
    }

    novai_vraza3();
    text(460, 500, "СТОЙ\n Я НЕ ХОТЕЛ");
    novai_vraza4();
}


