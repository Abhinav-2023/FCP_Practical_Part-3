#include <stdio.h>
#include <string.h>

#define MAX_STRING_LENGTH 100

typedef struct {
    int intData;
    float floatData;
    char charData;
    char stringData[MAX_STRING_LENGTH];
} DataContainer;

void setInt(DataContainer *container, int value) {
    container->intData = value;
}

int getInt(const DataContainer *container) {
    return container->intData;
}

void setFloat(DataContainer *container, float value) {
    container->floatData = value;
}

float getFloat(const DataContainer *container) {
    return container->floatData;
}

void setChar(DataContainer *container, char value) {
    container->charData = value;
}

char getChar(const DataContainer *container) {
    return container->charData;
}

void setString(DataContainer *container, const char *value) {
    strncpy(container->stringData, value, MAX_STRING_LENGTH - 1);
    container->stringData[MAX_STRING_LENGTH - 1] = '\0'; // Ensure null-terminated string
}

const char* getString(const DataContainer *container) {
    return container->stringData;
}
void main() {
    DataContainer data;

    setInt(&data, 42);
    setFloat(&data, 3.14f);
    setChar(&data, 'A');
    setString(&data, "Hello, World!");

    printf("Integer: %d\n", getInt(&data));
    printf("Float: %f\n", getFloat(&data));
    printf("Char: %c\n", getChar(&data));
    printf("String: %s\n", getString(&data));
    
}
