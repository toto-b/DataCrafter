#include <stdio.h>
#include <stdlib.h>
#include "generator.h"

int randomNumber(int min, int max) {
    return (rand() % (max - min + 1)) + min;
}

char* getName(char **reference_names, unsigned int size_reference_names)
{
    int random_index = randomNumber(0, size_reference_names - 1);
    return reference_names[random_index];
}
char* getSurName(char **reference_sur_names, unsigned int size_reference_sur_names)
{
    int random_index = randomNumber(0, size_reference_sur_names - 1);
    return reference_sur_names[random_index];
}

int getAge(int minAge, int maxAge){
    return (rand() % (maxAge - minAge + 1)) + minAge;
}

int generateEntry(EntryDefinition *entry, const ReferenceData *reference_data){
    entry->age = getAge(0,116);
    entry->name = getName(reference_data->reference_names, reference_data->size_reference_names);
    entry->sur_name = getSurName(reference_data->reference_sur_names, reference_data->size_reference_sur_names);
}
