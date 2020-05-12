#include<stdio.h>
#include<assert.h>
#include<stdlib.h>
#include<string.h>

struct Person {
    char *name;
    int age;
    int height;
    int weight;
};

struct Person *Person_create(char *name, int age, int height, int weight) {
    struct Person *who = malloc(sizeof(struct Person));
    assert(who != NULL);

    who->name = strdup(name);
    who->age = age;
    who->height = height;
    who->weight = weight;

    return who;
}

void Person_destroy(struct Person *who) {
    assert(who != NULL);
    free(who->name);
    free(who);
}

void Person_print(struct Person *who) {
    printf("Name: %s \n", who->name);
    printf("\tAge: %d \n", who->age);
    printf("\tAge: %d \n", who->age);
}

int main(int argc, char *argv[])
{
    //make two people strcutures/class
    struct Person *joe = Person_create(
