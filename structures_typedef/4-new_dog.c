#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
int _strlen(char *s);
char *_strcpy(char *dest, char *src);
/**
 *new_dog - function that adds a new dog to structure
 *@name: name input value
 *@age: age input value
 *@owner: owner input value
 *Return: pointer big_dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *big_dog;
int N_L = 0;
int O_L = 0;
if (name != NULL && owner != NULL)
{
N_L = _strlen(name) + 1;
O_L = _strlen(owner) + 1;
big_dog = malloc(sizeof(dog_t));
if (big_dog == NULL)
return (NULL);
big_dog->name = malloc(sizeof(char) * N_L);
if (big_dog->name == NULL)
{
free(big_dog);
return (NULL);
}
big_dog->owner = malloc(sizeof(char) * O_L);
if (big_dog->owner == NULL)
{
free(big_dog->name);
free(big_dog);
return (NULL);
}
big_dog->name = _strcpy(big_dog->name, name);
big_dog->owner = _strcpy(big_dog->owner, owner);
big_dog->age = age;
}
return (big_dog);
}
/**
 *_strlen - function that gathers the length of given input
 *@s: input value
 *Return: the length
 */
int _strlen(char *s)
{
int c = 0;
for (; *s != '\0'; s++)
{
c++;
}
return (c);
}
/**
 *_strcpy - function that copies a given input
 *@dest: given input
 *@src: input value
 *Return: copied value in pointer dest
 */
char *_strcpy(char *dest, char *src)
{
int i;
for (i = 0; src[i] != '\0'; i++)
{
dest[i] = src[i];
}
dest[i++] = '\0';
return (dest);
}
