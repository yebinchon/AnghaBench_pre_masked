
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trie_node {size_t children_count; struct trie_node* values; struct trie_node* children; struct trie_node* child; } ;


 int FUNC_0 (struct trie_node*) ;

__attribute__((used)) static void FUNC_1(struct trie_node *VAR_0) {
        size_t VAR_1;

        if (!VAR_0)
                return;

        for (VAR_1 = 0; VAR_1 < VAR_0->children_count; VAR_1++)
                FUNC_1(VAR_0->children[VAR_1].child);
        FUNC_0(VAR_0->children);
        FUNC_0(VAR_0->values);
        FUNC_0(VAR_0);
}
