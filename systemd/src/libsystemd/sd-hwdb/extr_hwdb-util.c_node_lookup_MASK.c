
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct trie_node {int children_count; int children; } ;
struct trie_child_entry {struct trie_node* child; int c; } ;


 int VAR_0 ;
 struct trie_child_entry* FUNC_0 (struct trie_child_entry*,int ,int ,int ) ;

__attribute__((used)) static struct trie_node *FUNC_1(const struct trie_node *VAR_1, uint8_t VAR_2) {
        struct trie_child_entry *VAR_3;
        struct trie_child_entry VAR_4;

        VAR_4.c = VAR_2;
        VAR_3 = FUNC_0(&VAR_4, VAR_1->children, VAR_1->children_count, VAR_0);
        if (VAR_3)
                return VAR_3->child;
        return ((void*)0);
}
