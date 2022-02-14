
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint64_t ;
struct trie_value_entry_f {int dummy; } ;
struct trie_value_entry2_f {int dummy; } ;
struct trie_node_f {int dummy; } ;
struct trie_node {size_t children_count; size_t values_count; TYPE_1__* children; } ;
struct trie_f {int strings_off; } ;
struct trie_child_entry_f {int dummy; } ;
struct TYPE_2__ {struct trie_node* child; } ;



__attribute__((used)) static void FUNC_0(struct trie_f *VAR_0, struct trie_node *VAR_1, bool VAR_2) {
        uint64_t VAR_3;

        for (VAR_3 = 0; VAR_3 < VAR_1->children_count; VAR_3++)
                FUNC_0(VAR_0, VAR_1->children[VAR_3].child, VAR_2);

        VAR_0->strings_off += sizeof(struct trie_node_f);
        for (VAR_3 = 0; VAR_3 < VAR_1->children_count; VAR_3++)
                VAR_0->strings_off += sizeof(struct trie_child_entry_f);
        for (VAR_3 = 0; VAR_3 < VAR_1->values_count; VAR_3++)
                VAR_0->strings_off += VAR_2 ? sizeof(struct trie_value_entry_f) : sizeof(struct trie_value_entry2_f);
}
