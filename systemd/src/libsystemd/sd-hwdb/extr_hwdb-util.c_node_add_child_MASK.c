
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct trie_node {int children_count; struct trie_child_entry* children; } ;
struct trie_child_entry {struct trie_node* child; int c; } ;
struct trie {int nodes_count; int children_count; } ;


 int VAR_0 ;
 struct trie_child_entry* FUNC_0 (struct trie_child_entry*,int,int) ;
 int VAR_1 ;
 int FUNC_1 (struct trie_child_entry*,size_t,int ) ;

__attribute__((used)) static int FUNC_2(struct trie *VAR_2, struct trie_node *VAR_3, struct trie_node *VAR_4, uint8_t VAR_5) {
        struct trie_child_entry *VAR_6;


        VAR_6 = FUNC_0(VAR_3->children, VAR_3->children_count + 1, sizeof(struct trie_child_entry));
        if (!VAR_6)
                return -VAR_0;

        VAR_3->children = VAR_6;
        VAR_2->children_count++;
        VAR_3->children[VAR_3->children_count].c = VAR_5;
        VAR_3->children[VAR_3->children_count].child = VAR_4;
        VAR_3->children_count++;
        FUNC_1(VAR_3->children, VAR_3->children_count, VAR_1);
        VAR_2->nodes_count++;

        return 0;
}
