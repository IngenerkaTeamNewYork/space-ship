#include "libspace.h"

int main()
{

    txCreateWindow(1170, 870);

// prilit
    for(int i=1; i<150; i++)
    {
       txClear();
       sozvezdia();
       txSetFillColor(TX_BLACK);
       txFloodFill(1,1);
       chip(800-i*3, 345, 255, 255, 128);
       txSleep(10);
   }
//svet
   for(int i=1; i<127; i++)
   {
      txClear();
       sozvezdia();
       txSetFillColor(TX_BLACK);
       txFloodFill(1,1);
       chip(350, 345, 255-i*2, 255-i*2, 128+i*0.1);
       txSleep(5);
   }
   text(200, 300, "�, ���, � ���\n ��������� �������������");
//luc
   for(int i=1; i<70; i++)
   {
     txClear();
     txSetFillColor(TX_BLACK);
     txFloodFill(1,1);
     sozvezdia();
     chip(350, 345, 1, 1, 140.7);
     txSetColour(TX_LIGHTGRAY, 5);
     txLine(      585,   465, 845-i*2,  465+i);
     txSleep(17);
   }
//shel_prishil
    for(int i=1; i<15; i++)
    {
     txClear();
     txSetFillColor(TX_BLACK);
     txFloodFill(1,1);
     sozvezdia();
     shel(580+i*15, 405+i*10, 255, 128, 0);
     chip(350, 345, 1, 1, 140.7);
     txSetColour(TX_LIGHTGRAY, 5);
     txLine(      585,   465, 705,  535);
     txSleep(100);
    }
     for(int i=1; i<15; i++)
     {
         txClear();
     txSetFillColor(TX_BLACK);
     txFloodFill(1,1);
     sozvezdia();
     shel(580+i*15, 405+i*10, 0, 128, 0);
     shel(805-i*7, 555, 255, 128, 0);
     chip(350, 345, 1, 1, 140.7);
     txSetColour(TX_LIGHTGRAY, 5);
     txLine(      585,   465, 705,  535);
     txSleep(100);
     }
   text(460, 500, "���� �����\n �������� �������������");
     novai_vraza();
   text(570, 500, "��� ����� ���\n �����");
     novai_vraza();
   text(460, 500, "����� �����\n ������");
     novai_vraza();
   text(570, 500, "��� �������\n �������");
     for(int i=1; i<127; i++)
     {
     txClear();
     txSetFillColor(TX_BLACK);
     txFloodFill(1,1);
     sozvezdia();
     shel(805, 555, 0, 128, 0);
     shel(700, 555, 255-i*2, 128, 0);
     chip(350, 345, 1, 1, 140.7);
     txSetColour(TX_LIGHTGRAY, 5);
     txLine(      585,   465, 705,  535);
     txSleep(5);
     }
   text(460, 500, "���� ����\n ���� ����");
     novai_vraza2();
   text(570, 500, "���� �����?");
     novai_vraza2();
   text(460, 500, "� ��� �� �����?\n � ���������!!!");
     novai_vraza2();
   text(460, 500, "��");
     novai_vraza2();
   text(570, 500, "�� ���� �-\n �������?");
     novai_vraza2();
   text(460, 500, "� �� �����\n ��������, ��...");
     novai_vraza2();
   text(460, 500, "\n ��!");
     novai_vraza2();
   text(570, 500, "\n ��������-��");
     novai_vraza2();
   text(460, 500, "���� �������\n ����� ");
     novai_vraza2();
   text(460, 500, "������� ���� �����\n �� ����� �����");
     novai_vraza2();
   text(460, 500, "������!!!");
     novai_vraza2();
   text(570, 500, "��� ���-\n � ����� �� ����");
     novai_vraza2();
   text(460, 500, "\n �� �����");
   for(int i=1; i<410; i++)
     {
     txClear();
     txSetFillColor(TX_BLACK);
     txFloodFill(1,1);
     sozvezdia();
     shel(805-i*2, 555, 0, 128, 0);
     shel(700, 555, 1, 128, 0);
     chip(350, 345, 1, 1, 140.7);
     txSetColour(TX_LIGHTGRAY, 5);
     txLine(      585,   465, 705,  535);
     txSleep(0.1);
     }
     novai_vraza3();
   text(460, 500, "����\n � �� �����");
     novai_vraza4();
}


