
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trie_child_entry_f {int c; } ;



__attribute__((used)) static int FUNC_0(const void *VAR_0, const void *VAR_1) {
        const struct trie_child_entry_f *VAR_2 = VAR_0;
        const struct trie_child_entry_f *VAR_3 = VAR_1;

        return VAR_2->c - VAR_3->c;
}
