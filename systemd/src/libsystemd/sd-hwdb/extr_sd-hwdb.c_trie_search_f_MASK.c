
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct trie_node_f {int values_count; scalar_t__ prefix_off; } ;
struct linebuf {int dummy; } ;
struct TYPE_11__ {TYPE_1__* head; } ;
typedef TYPE_2__ sd_hwdb ;
struct TYPE_10__ {int nodes_root_off; } ;


 scalar_t__ FUNC_0 (char,char,char,char) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 size_t FUNC_2 (int ) ;
 int FUNC_3 (struct linebuf*,char) ;
 int FUNC_4 (struct linebuf*) ;
 int FUNC_5 (struct linebuf*) ;
 struct trie_node_f* FUNC_6 (TYPE_2__*,struct trie_node_f const*,char const) ;
 int FUNC_7 (TYPE_2__*,struct trie_node_f const*,size_t,struct linebuf*,char const*) ;
 struct trie_node_f* FUNC_8 (TYPE_2__*,int ) ;
 int FUNC_9 (TYPE_2__*,struct trie_node_f const*,size_t) ;
 char* FUNC_10 (TYPE_2__*,scalar_t__) ;

__attribute__((used)) static int FUNC_11(sd_hwdb *VAR_0, const char *VAR_1) {
        struct linebuf VAR_2;
        const struct trie_node_f *VAR_3;
        size_t VAR_4 = 0;
        int VAR_5;

        FUNC_4(&VAR_2);

        VAR_3 = FUNC_8(VAR_0, VAR_0->head->nodes_root_off);
        while (VAR_3) {
                const struct trie_node_f *VAR_6;
                size_t VAR_7 = 0;

                if (VAR_3->prefix_off) {
                        char VAR_8;

                        for (; (VAR_8 = FUNC_10(VAR_0, VAR_3->prefix_off)[VAR_7]); VAR_7++) {
                                if (FUNC_0(VAR_8, '*', '?', '['))
                                        return FUNC_7(VAR_0, VAR_3, VAR_7, &VAR_2, VAR_1 + VAR_4 + VAR_7);
                                if (VAR_8 != VAR_1[VAR_4 + VAR_7])
                                        return 0;
                        }
                        VAR_4 += VAR_7;
                }

                VAR_6 = FUNC_6(VAR_0, VAR_3, '*');
                if (VAR_6) {
                        FUNC_3(&VAR_2, '*');
                        VAR_5 = FUNC_7(VAR_0, VAR_6, 0, &VAR_2, VAR_1 + VAR_4);
                        if (VAR_5 < 0)
                                return VAR_5;
                        FUNC_5(&VAR_2);
                }

                VAR_6 = FUNC_6(VAR_0, VAR_3, '?');
                if (VAR_6) {
                        FUNC_3(&VAR_2, '?');
                        VAR_5 = FUNC_7(VAR_0, VAR_6, 0, &VAR_2, VAR_1 + VAR_4);
                        if (VAR_5 < 0)
                                return VAR_5;
                        FUNC_5(&VAR_2);
                }

                VAR_6 = FUNC_6(VAR_0, VAR_3, '[');
                if (VAR_6) {
                        FUNC_3(&VAR_2, '[');
                        VAR_5 = FUNC_7(VAR_0, VAR_6, 0, &VAR_2, VAR_1 + VAR_4);
                        if (VAR_5 < 0)
                                return VAR_5;
                        FUNC_5(&VAR_2);
                }

                if (VAR_1[VAR_4] == '\0') {
                        size_t VAR_9;

                        for (VAR_9 = 0; VAR_9 < FUNC_2(VAR_3->values_count); VAR_9++) {
                                VAR_5 = FUNC_1(VAR_0, FUNC_9(VAR_0, VAR_3, VAR_9));
                                if (VAR_5 < 0)
                                        return VAR_5;
                        }
                        return 0;
                }

                VAR_6 = FUNC_6(VAR_0, VAR_3, VAR_1[VAR_4]);
                VAR_3 = VAR_6;
                VAR_4++;
        }
        return 0;
}
