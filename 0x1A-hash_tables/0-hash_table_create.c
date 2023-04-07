/**
 * struct hash_node_s - Node of a hash table
 *
 * @key: The key, string
 * The key is unique in the HashTable
 * @value: The value corresponding to a key
 * @next: A pointer to the next node of the List
 */

typedef struct hash_node {
char *key;
void *data;
struct hash_node *next;
} hash_node_t;

/**
 * struct hash_table_s - Hash table data structure
 *
 * @size: The size of the array
 * @array: An array of size @size
 * Each cell of this array is a pointer to the first node of a linked list,
 * because we want our HashTable to use a Chaining collision handling
 */

typedef struct hash_table {
unsigned long int size;
hash_node_t **table;
} hash_table_t;

hash_table_t *hash_table_create(unsigned long int size) {
hash_table_t *ht = malloc(sizeof(hash_table_t));
if (ht == NULL) {
return NULL;
}