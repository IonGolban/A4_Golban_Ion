#pragma once

#define _CRT_SECURE_NO_WARNINGS
#include "Sort.h"

#include <stdio.h> 
#include <time.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>

Sort::Sort(int nr_elemente, int min, int max) {
    this->nr_elemente = nr_elemente;
    this->vector = (int*)(malloc(nr_elemente * sizeof(int)));

    srand((unsigned)time(NULL));

    for (int i = 0; i < nr_elemente;i++) {
        this->vector[i] = min + rand() % (max - min + 1);
    }

}

Sort::Sort(int* vector, int nr_elemente) {
    this->nr_elemente = nr_elemente;
    this->vector = (int*)(malloc(nr_elemente * sizeof(int)));
    for(int i = 0; i < nr_elemente; i++) {
        this->vector[i] = vector[i];
    }
};

Sort::Sort(): vector(new int[10]{ 1,4,7,6,5,8,10,9,3,2 }) {
    this-> nr_elemente = 10;
}

Sort::Sort(int count, ...) {
    this->nr_elemente = count;
    this->vector = (int*)(malloc(nr_elemente * sizeof(int)));
    va_list vl;
    va_start(vl, count);
    for (int i = 0; i < count; i++){
        this->vector[i] = va_arg(vl, int);
    }
    va_end(vl);
}

Sort::Sort(char* c) {
    char* p;
    p = strtok(c, ",");
    int i = 0;
    int v[200];
    while (p != NULL) {
        v[i] = convert(p);
        p = strtok(NULL, ",");
        i++;
    }
    this->nr_elemente = i;
    this->vector = (int*)(malloc(this->nr_elemente * sizeof(int)));
    for (i = 0; i < this->nr_elemente; i++) {
        this->vector[i] = v[i];
    }
}
int Sort::convert(char* string) {
    int number = 0; int i = 0;
    while (string[i] != NULL)
    {
        number += (string[i] - '0');
        number *= 10;
        i++;
    }
    return number / 10;
}

void Sort::InsertSort(bool ascendent) {
    int i, key, j;

    for (i = 1; i < this->nr_elemente; i++)
    {
        key = this->vector[i];
        j = i - 1;
        if (ascendent) {
            while (j >= 0 && this->vector[j] > key)
            {
                this->vector[j + 1] = this->vector[j];
                j = j - 1;
            }
        }
        else
        {
            while (j >= 0 && this->vector[j] < key)
            {
                this->vector[j + 1] = this->vector[j];
                j = j - 1;
            }
        }
        this->vector[j + 1] = key;
    }
}

void Sort::QuickSort(bool ascendent) {
     
    implQuickSort(this->vector, 0, this->nr_elemente - 1,ascendent);
}

void Sort::implQuickSort(int*vector , int min , int max,bool ascendent) { 
    if (min < max)                                                          //am facut implQuickSort pentru apel recursiv 
    {
        int pi = Partition(this->vector, min, max,ascendent);
        implQuickSort(this->vector, min, pi - 1,ascendent);
        implQuickSort(this->vector, pi + 1, max,ascendent);
    }

}
int Sort::Partition(int* vector, int min, int max,bool ascendent) {
    int tmp;
    int pivot = this->vector[max]; 
    int i = (min - 1); 
  
    for (int j = min; j < max; j++)
    {
        if(ascendent){
            if (this->vector[j] < pivot)
            {
                i++;
                tmp = this->vector[i];
                this->vector[i] = this->vector[j];
                this->vector[j] = tmp;
            }
        }
        else {
            if (this->vector[j] > pivot)
            {
                i++;
                tmp = this->vector[i];
                this->vector[i] = this->vector[j];
                this->vector[j] = tmp;
            }
        }
    }

    
    tmp =this->vector[i + 1];
    this->vector[i + 1] = this->vector[max];
    this->vector[max] = tmp;
    return (i + 1);
}
void Sort::BubbleSort(bool ascendent ) { //done
    int i, j;
    bool swapped;
    for (i = 0; i < this->nr_elemente - 1; i++)
    {
        swapped = false;
        for (j = 0; j < this->nr_elemente - i - 1; j++)
        {
            if (!ascendent) {
                if (this->vector[j] < this->vector[j + 1])
                {
                  
                    int temp = this->vector[j];
                    this->vector[j] = this->vector[j + 1];
                    this->vector[j + 1] = temp;
                    swapped = true;
                }
            } else if (this->vector[j] > this->vector[j + 1])
            {
               
                int temp = this->vector[j];
                this->vector[j] = this->vector[j + 1];
                this->vector[j + 1] = temp;
                swapped = true;
            }
            
        }
        if (swapped == false)
            break;
    }
}

void Sort::Print() {
    for (int i = 0; i < this->nr_elemente; i++) {
        printf("%d ", this->vector[i]);
    }
    printf("\n");
}

int Sort::GetElementsCount() {
    return this->nr_elemente;
}

int  Sort::GetElementFromIndex(int index) {
    return this->vector[index];
}
