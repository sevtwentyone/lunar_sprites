#ifndef HASHTABLE_H
#define HASHTABLE_H

#include "core/string.h"
#include "core/typedefs.h"

typedef struct HashtableString HashtableString;

HashtableString *hashtable_string_create(size_t capacity);
void hashtable_string_destroy(HashtableString *hashtable);

void hashtable_string_set(HashtableString *hashtable, const String key, void *data);
void *hashtable_string_get(const HashtableString *hashtable, const String key);
bool hashtable_string_has(const HashtableString *hashtable, const String key);
bool hashtable_string_remove(HashtableString *hashtable, const String key);

typedef struct HashtableInt HashtableInt;

HashtableInt *hashtable_int_create(size_t capacity);
void hashtable_int_destroy(HashtableInt *hashtable);

void hashtable_int_set(HashtableInt *hashtable, int32 key, void *data);
void *hashtable_int_get(const HashtableInt *hashtable, int32 key);
bool hashtable_int_has(const HashtableInt *hashtable, int32 key);
bool hashtable_int_remove(HashtableInt *hashtable, int32 key);

#endif // HASHTABLE_H