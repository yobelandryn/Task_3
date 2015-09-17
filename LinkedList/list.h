#ifndef TUBESKELOMPOKPEGAWAI_H_INCLUDED
#define TUBESKELOMPOKPEGAWAI_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <string>

#define info(p) (p)->info
#define prev(p) (p)->prev
#define next(p) (p)->next
#define first(l) (l).first
#define last(l) (l).last

typedef struct{
    char nama[30];
    int id;
    int tahunmasuk;
    int umur;
    long gaji;
} infotype;

typedef struct tElm *address;

typedef struct tElm{
    address prev;
    infotype info;
    address next;
} elm;

typedef struct{
    address first;
    address last;
    int mark;
} list;

int isEmpty(list l);
int isFull(list l);
void insert(list *l, infotype x);
void insertFirst(list *l, infotype x);
void insertLast(list *l, infotype x);
void insertAfter(list *l, infotype x);
void insertBefore(list *l, infotype x);
void deleteFirst(list *l);
void deleteLast(list *l);
void deleteAfter(list *l);
void searchData(list l);
void viewAll(list l);


#endif // TUBESKELOMPOKPEGAWAI_H_INCLUDED
