#include "Canvas.h"
#include <stdlib.h>
#include <stdio.h>


Canvas::Canvas(int width, int height) {
    this->width = width;
    this->height = height;
    this-> m = (char**)(malloc(this->width * sizeof(char*)));
    for (int i = 0; i < this->height; i++) m[i] = (char*)(malloc(this->height * sizeof(char)));
}

void Canvas::DrawCircle(int x, int y, int r, char ch) {
    for (int i = 0; i < this->height;i++) {
        for (int j = 0; j < this->width; j++)
        {
            if ((i - x) * (i - x) + (j - y) * (j - y) >= r * (r - 1) && (i - x) * (i - x) + (j - y) * (j - y) <= r * (r + 1)) {
                this->m[j][i] = ch;
            }
            else this->m[j][i] = ' ';
        }
    }
}

void Canvas::FillCircle(int x, int y, int r, char ch){
   
    for (int i = 0; i < this->height;i++) {
        for (int j = 0; j < this->width; j++)
        {
            if ((i - x) * (i - x) + (j - y) * (j - y) <= r * r)
                 {
                this->m[j][i] = ch;
            }
            else this->m[j][i] = ' ';
        }
    }
}

void Canvas::DrawRect(int left, int top, int right, int bottom, char ch) {
    int i,j;
    for (i = 0; i < this->height; i ++) {
        for (j = 0; j < this->width; j++) {
            if (i >= top && i <= bottom && j >= left && j <= right) {
                this->m[j][i] = ch;
            }
            else this->m[j][i] = ' ';
        }
    }
}

void Canvas::FillRect(int left, int top, int right, int bottom, char ch) {
    for (int i = top; i <= bottom; i++) {
        for (int j = left; j<= right; j++) {
            this->m[j][i] = ch;
            this->m[j][i] = ch;
        }
    }
}

void Canvas::SetPoint(int x, int y, char ch) {
        this->m[y][x] = ch;
}

void Canvas::DrawLine(int x1, int y1, int x2, int y2, char ch) {
    int dx = x2 - x1;
    int dy = y2 - y1;
    int D = 2 * dy - dx;
    int y = y1;
    for (int x = x1; x <= x2; x++) {
        this->m[y][x] = ch;
        if (D > 0) {
            y++;
            D = D - 2 * dx;
        }
        D = D + 2 * dy;
    }
    for (int i = 0; i < this->height; i++) {
        for (int j = 0; j < this->width; j++) {
            if (this->m[i][j] !=ch) {
                this->m[i][j] = ' ';
            }
        }
    }
}

void Canvas::Print() {
    for (int i = 0; i < this->height; i++) {
        for (int j = 0; j < this->width; j++) {
            printf("%c", this->m[i][j]);
        }
        printf("\n");
    }
}
// shows what was printed

void Canvas::Clear() {
    for (int i = 0; i < this->height; i++) {
        for (int j = 0; j < this->width; j++) {
            this->m[i][j] =' ';
        }
    }
}// clears the canvas