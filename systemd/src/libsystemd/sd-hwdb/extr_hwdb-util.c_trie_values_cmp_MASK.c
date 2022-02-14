
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct trie_value_entry {scalar_t__ key_off; } ;
struct trie {TYPE_1__* strings; } ;
struct TYPE_2__ {scalar_t__ buf; } ;


 int FUNC_0 (scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_1(const struct trie_value_entry *VAR_0, const struct trie_value_entry *VAR_1, struct trie *VAR_2) {
        return FUNC_0(VAR_2->strings->buf + VAR_0->key_off,
                      VAR_2->strings->buf + VAR_1->key_off);
}
