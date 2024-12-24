#include<stdio.h>
#include<string.h>

// declaration of structure Device
struct Device
{
    char name[20]; // device name
    float price; // device price
    int quantity; // device quantity
    struct Device* ptr; // self-referential member
};

int main()
{
    struct Device gpu = {"AMD Radeon", 20000, 1, NULL}; // structure variable
    struct Device desktop = {"msi", 100000, 1, NULL}; // structure variable
    desktop.ptr = &gpu;

    printf("Device name : %s\n", desktop.name);
    printf("Device price : %f\n", desktop.price);
    printf("Device quantity : %d\n", desktop.quantity);

    printf("Device gpu name : %s\n", desktop.ptr->name);
    printf("Device gpu price : %f\n", desktop.ptr->price);
    printf("Device gpu quantity : %d\n", desktop.ptr->quantity);
    return 0;
}
