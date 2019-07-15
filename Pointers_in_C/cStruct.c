#include<stdio.h>
#include<string.h>

typedef struct PersonS {
    char name[20];
    int age;
    float height;
    float weight;
    
} PersonT;

int main(int argc, char* argv[])
{
    char pname[20];
    PersonT person1;
    strcpy(person1.name, "Frank");
    person1.age= 23;
    person1.weight = 72.45;
    person1.height = 169.675;

    printf("Hi my name is %s.\n", person1.name);
    printf("I am %d years old\n", person1.age);
    printf("I weight %f kilogram\n", person1.weight);
    printf("I am %f centimertes tall\n", person1.height);
    printf("\n\n\n---------------\n\n\n");
    PersonT person2;
    
    strcpy(person2.name, "Alice");
    person2.age = 19;
    person2.weight = 55.9001;
    person2.height = 165.545;
    
    
    printf("Hi my name is %s.\n", person2.name);
    printf("I am %d years old\n", person2.age);
    printf("I weight %f kilogram\n", person2.weight);
    printf("I am %f centimertes tall\n", person2.height);
    
    printf("\n\n\nSizeof Person1: %ld\n", sizeof(person1));
    printf("Size of float : %lu", sizeof(float));
    printf("\n\nSizeof Person2: %ld\n", sizeof(person2));
    printf("Size of pname: %ld\n", sizeof(pname));
    
    printf("\n\n\nSizeof Person2: %ld\n", sizeof(person2));
    return 0;
}

   
  
 



