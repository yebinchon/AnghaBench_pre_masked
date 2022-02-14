
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct trie_node_f {int children_count; } ;
struct trie_child_entry_f {int child_off; int c; } ;
struct TYPE_6__ {TYPE_1__* head; } ;
typedef TYPE_2__ sd_hwdb ;
struct TYPE_5__ {int child_entry_size; int node_size; } ;


 struct trie_child_entry_f* FUNC_0 (struct trie_child_entry_f*,char const*,int ,int,int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 struct trie_node_f const* FUNC_2 (TYPE_2__*,int ) ;

__attribute__((used)) static const struct trie_node_f *FUNC_3(sd_hwdb *VAR_1, const struct trie_node_f *VAR_2, uint8_t VAR_3) {
        struct trie_child_entry_f *VAR_4;
        struct trie_child_entry_f VAR_5;

        VAR_5.c = VAR_3;
        VAR_4 = FUNC_0(&VAR_5, (const char *)VAR_2 + FUNC_1(VAR_1->head->node_size), VAR_2->children_count,
                        FUNC_1(VAR_1->head->child_entry_size), VAR_0);
        if (VAR_4)
                return FUNC_2(VAR_1, VAR_4->child_off);
        return ((void*)0);
}
