
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trie_node_f {size_t children_count; int values_count; int prefix_off; } ;
struct trie_child_entry_f {int child_off; int c; } ;
struct linebuf {int dummy; } ;
typedef int sd_hwdb ;


 scalar_t__ FUNC_0 (int ,char const*,int ) ;
 int FUNC_1 (int *,int ) ;
 size_t FUNC_2 (int ) ;
 int FUNC_3 (struct linebuf*,char const*,size_t) ;
 int FUNC_4 (struct linebuf*,int ) ;
 int FUNC_5 (struct linebuf*) ;
 int FUNC_6 (struct linebuf*,size_t) ;
 int FUNC_7 (struct linebuf*) ;
 size_t FUNC_8 (char const*) ;
 struct trie_child_entry_f* FUNC_9 (int *,struct trie_node_f const*,size_t) ;
 struct trie_node_f* FUNC_10 (int *,int ) ;
 int FUNC_11 (int *,struct trie_node_f const*,size_t) ;
 char* FUNC_12 (int *,int ) ;

__attribute__((used)) static int FUNC_13(sd_hwdb *VAR_0, const struct trie_node_f *VAR_1, size_t VAR_2,
                          struct linebuf *VAR_3, const char *VAR_4) {
        size_t VAR_5;
        size_t VAR_6;
        const char *VAR_7;
        int VAR_8;

        VAR_7 = FUNC_12(VAR_0, VAR_1->prefix_off);
        VAR_5 = FUNC_8(VAR_7 + VAR_2);
        FUNC_3(VAR_3, VAR_7 + VAR_2, VAR_5);

        for (VAR_6 = 0; VAR_6 < VAR_1->children_count; VAR_6++) {
                const struct trie_child_entry_f *VAR_9 = FUNC_9(VAR_0, VAR_1, VAR_6);

                FUNC_4(VAR_3, VAR_9->c);
                VAR_8 = FUNC_13(VAR_0, FUNC_10(VAR_0, VAR_9->child_off), 0, VAR_3, VAR_4);
                if (VAR_8 < 0)
                        return VAR_8;
                FUNC_7(VAR_3);
        }

        if (FUNC_2(VAR_1->values_count) && FUNC_0(FUNC_5(VAR_3), VAR_4, 0) == 0)
                for (VAR_6 = 0; VAR_6 < FUNC_2(VAR_1->values_count); VAR_6++) {
                        VAR_8 = FUNC_1(VAR_0, FUNC_11(VAR_0, VAR_1, VAR_6));
                        if (VAR_8 < 0)
                                return VAR_8;
                }

        FUNC_6(VAR_3, VAR_5);
        return 0;
}
