#ifndef GENERATOR_H
#define GENERATOR_H

int randomNumber(int min, int max);

char* getName(char **reference_names, unsigned int size_reference_names);
char* getSurName(char **reference_sur_names, unsigned int size_reference_sur_names);
int getAge(int minAge, int maxAge);

typedef struct EntryDefinition {
    char *name;
    char *sur_name;
    int age;
}EntryDefinition;

typedef struct ReferenceData {
    char **reference_names;
    unsigned int size_reference_names;
    char **reference_sur_names;
    unsigned int size_reference_sur_names;
}ReferenceData;

int generateEntry(EntryDefinition *entry, const ReferenceData *reference_data);


#endif //GENERATOR_H