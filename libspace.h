#include "TXLib.h"
void korpys(int x, int y) {
    txSetColour(TX_LIGHTGRAY);
    txSetFillColour(TX_LIGHTGRAY);
    txLine(x + 60, y + 60, x - 75, y + 60);
    txLine(x - 75, y + 60, x - 120, y + 90);
    txLine(x - 120, y + 90, x - 60, y + 120);
    txLine(x - 60, y + 120, x + 495, y + 120);
    txLine(x + 495, y + 120, x + 465, y + 90);
    txLine(x + 465, y + 90, x + 480, y + 75);
    txLine(x + 480, y + 75, x + 480, y + 45);
    txLine(x + 480, y + 45, x + 465, y + 30);
    txLine(x + 465, y + 30, x + 480, y);
    txLine(x + 480, y, x + 495, y - 15);
    txLine(x + 495, y - 15, x + 520, y - 210);
    txLine(x + 520, y - 210, x + 430, y - 165);
    txLine(x + 430, y - 165, x + 370, y - 15);
    txLine(x + 370, y - 15, x + 355, y - 15);
    txLine(x + 355, y - 15, x + 325, y - 45);
    txLine(x + 325, y - 45, x + 108.5, y - 45);
    txLine(x + 108.5, y - 45, x + 60, y + 60);
    txFloodFill(x + 120, y - 30);
}
void ctikla(int x, int y, int R, int G, int B) {
    txSetColour(RGB(R, G, B));
    txSetFillColour(RGB(R, G, B));
    txLine(x, y, x + 105, y - 30);
    txLine(x + 105, y - 30, x + 60, y + 60);
    txLine(x + 60, y + 60, x - 75, y + 60);
    txLine(x - 75, y + 60, x, y);
    txFloodFill(x + 30, y);
    txCircle(x + 165, y + 15, 30);
    txCircle(x + 255, y + 15, 30);
}
void chip(int x, int y, int R, int G, int B) {
    korpys(x, y);
    ctikla(x, y, R, G, B);
}
void zvezda(int x, int y, int z) {
    txSetColour(TX_WHITE);
    txSetFillColour(TX_WHITE);
    txCircle(x, y, z);
}
void sozvezdia() {
    zvezda(100, 550, 2);
    zvezda(110, 250, 1);
    zvezda(176, 571, 3);
    zvezda(760, 140, 1);
    zvezda(300, 550, 1);
    zvezda(110, 350, 1);
    zvezda(130, 50, 2);
    zvezda(560, 130, 2);
    zvezda(400, 670, 1);
    zvezda(350, 150, 2);
    zvezda(530, 150, 2);
    zvezda(360, 228, 3);
    zvezda(760, 150, 2);
    zvezda(740, 150, 2);
    zvezda(310, 130, 2);
    zvezda(500, 640, 4);
    zvezda(230, 160, 2);
    zvezda(150, 150, 2);
    zvezda(170, 250, 1);
    zvezda(180, 240, 1);
    zvezda(340, 610, 2);
    zvezda(780, 760, 3);
}
void shel(int x, int y, int R, int G, int B) {
    txSetColour(RGB(R, G, B));
    txSetFillColour(RGB(R, G, B));
    txCircle(x, y - 7.5, 7.5);
    txLine(x, y, x, y + 30);
    txLine(x, y, x - 7.5, y + 15);
    txLine(x, y, x + 7.5, y + 15);
    txLine(x, y + 30, x - 7.5, y + 45);
    txLine(x, y + 30, x + 7.5, y + 45);
}
void text(int x, int y,
    const char * t) {
    txSetColor(TX_WHITE);
    txSelectFont("Arial", 20, 0, FW_BOLD);
    txDrawText(x, y, x + 400, y + 150, t);
    txSleep(3000);

}
void novai_vraza() {
    txClear();
    txSetFillColor(TX_BLACK);
    txFloodFill(1, 1);
    sozvezdia();
    shel(805, 555, 0, 128, 0);
    shel(700, 555, 255, 128, 0);
    chip(350, 345, 1, 1, 140.7);
    txSetColour(TX_LIGHTGRAY, 5);
    txLine(585, 465, 705, 535);
    txSleep(100);
}
void novai_vraza2() {
    txClear();
    txSetFillColor(TX_BLACK);
    txFloodFill(1, 1);
    sozvezdia();
    shel(805, 555, 0, 128, 0);
    shel(700, 555, 1, 128, 0);
    chip(350, 345, 1, 1, 140.7);
    txSetColour(TX_LIGHTGRAY, 5);
    txLine(585, 465, 705, 535);
    txSleep(100);
}
void novai_vraza3() {
    txClear();
    txSetFillColor(TX_BLACK);
    txFloodFill(1, 1);
    sozvezdia();
    shel(-15, 555, 0, 128, 0);
    shel(700, 555, 1, 128, 0);
    chip(350, 345, 1, 1, 140.7);
    txSetColour(TX_LIGHTGRAY, 5);
    txLine(585, 465, 705, 535);
    txSleep(100);
}

void text2(int x, int y,
    const char * t) {
    txSetColor(TX_WHITE);
    txSelectFont("Arial", 100, 0, FW_BOLD);
    txDrawText(x, y, x + 800, y + 550, t);
    txSleep(2500);
}

void novai_vraza4() {
    txClear();
    txSetFillColor(TX_BLUE);
    txFloodFill(1, 1);
    text2(100, 100, "НИКОГДА НОСКАМИ\n НЕ ОБИЖАЙТЕ СВОИХ ДРУЗЕЙ");
}