#include <stdlib.h>
#include "dog.h"
/**
 *
 *
 *
 *
 */
void free_dog(dog_t *d)
{
  if ( != NULL)
    {
      free(d->owner);
  free(d->name);
  free(d);
    }
}
