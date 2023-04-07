#include <stdlib.h>

typedef struct hash_node {
char *key;
void *data;
struct hash_node *next;
} hash_node_t;

typedef struct hash_table {
unsigned long int size;
hash_node_t **table;
} hash_table_t;

hash_table_t *hash_table_create(unsigned long int size) {
hash_table_t *ht = malloc(sizeof(hash_table_t));
if (ht == NULL) {
return NULL;
}

ht->size = size;
ht->table = malloc(size * sizeof(hash_node_t *));
if (ht->table == NULL) {
free(ht);
return NULL;
}

for (unsigned long int i = 0; i < size; i++) {
ht->table[i] = NULL;
}

return ht;
}