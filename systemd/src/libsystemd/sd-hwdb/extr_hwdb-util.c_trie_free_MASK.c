
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trie {int strings; int root; } ;


 int FUNC_0 (struct trie*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct trie *VAR_0) {
        if (!VAR_0)
                return;

        FUNC_2(VAR_0->root);
        FUNC_1(VAR_0->strings);
        FUNC_0(VAR_0);
}
