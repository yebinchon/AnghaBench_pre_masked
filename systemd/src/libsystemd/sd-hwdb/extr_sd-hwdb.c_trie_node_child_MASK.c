
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct trie_node_f {int dummy; } ;
struct trie_child_entry_f {int dummy; } ;
struct TYPE_5__ {TYPE_1__* head; } ;
typedef TYPE_2__ sd_hwdb ;
struct TYPE_4__ {int child_entry_size; int node_size; } ;


 size_t FUNC_0 (int ) ;

__attribute__((used)) static const struct trie_child_entry_f *FUNC_1(sd_hwdb *VAR_0, const struct trie_node_f *VAR_1, size_t VAR_2) {
        const char *VAR_3 = (const char *)VAR_1;

        VAR_3 += FUNC_0(VAR_0->head->node_size);
        VAR_3 += VAR_2 * FUNC_0(VAR_0->head->child_entry_size);
        return (const struct trie_child_entry_f *)VAR_3;
}
