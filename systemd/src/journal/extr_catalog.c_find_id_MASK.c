
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int sd_id128_t ;
typedef int comparison_fn_t ;
struct TYPE_6__ {int catalog_item_size; int n_items; int header_size; } ;
struct TYPE_5__ {char* language; int offset; int id; } ;
typedef TYPE_1__ CatalogItem ;
typedef TYPE_2__ CatalogHeader ;


 int VAR_0 ;
 int FUNC_0 (char const*,char*,char*) ;
 TYPE_1__* FUNC_1 (TYPE_1__*,int const*,int,int,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,int,char const*) ;
 char* FUNC_5 (int ,int *) ;
 char* FUNC_6 (char*,char) ;
 size_t FUNC_7 (char const*,char*) ;
 int FUNC_8 (char*,char const*,size_t) ;
 int FUNC_9 (char*) ;

__attribute__((used)) static const char *FUNC_10(void *VAR_2, sd_id128_t VAR_3) {
        CatalogItem *VAR_4 = ((void*)0), VAR_5 = { .id = VAR_3 };
        const CatalogHeader *VAR_6 = VAR_2;
        const char *VAR_7;

        VAR_7 = FUNC_5(VAR_0, ((void*)0));
        if (!FUNC_2(VAR_7) && !FUNC_0(VAR_7, "C", "POSIX")) {
                size_t VAR_8;

                VAR_8 = FUNC_7(VAR_7, ".@");
                if (VAR_8 > sizeof(VAR_5.language) - 1)
                        FUNC_4("LC_MESSAGES value too long, ignoring: \"%.*s\"", (int) VAR_8, VAR_7);
                else {
                        FUNC_8(VAR_5.language, VAR_7, VAR_8);
                        VAR_5.language[VAR_8] = '\0';

                        VAR_4 = FUNC_1(&VAR_5,
                                    (const uint8_t*) VAR_2 + FUNC_3(VAR_6->header_size),
                                    FUNC_3(VAR_6->n_items),
                                    FUNC_3(VAR_6->catalog_item_size),
                                    (comparison_fn_t) VAR_1);
                        if (!VAR_4) {
                                char *VAR_9;

                                VAR_9 = FUNC_6(VAR_5.language, '_');
                                if (VAR_9) {
                                        *VAR_9 = 0;
                                        VAR_4 = FUNC_1(&VAR_5,
                                                    (const uint8_t*) VAR_2 + FUNC_3(VAR_6->header_size),
                                                    FUNC_3(VAR_6->n_items),
                                                    FUNC_3(VAR_6->catalog_item_size),
                                                    (comparison_fn_t) VAR_1);
                                }
                        }
                }
        }

        if (!VAR_4) {
                FUNC_9(VAR_5.language);
                VAR_4 = FUNC_1(&VAR_5,
                            (const uint8_t*) VAR_2 + FUNC_3(VAR_6->header_size),
                            FUNC_3(VAR_6->n_items),
                            FUNC_3(VAR_6->catalog_item_size),
                            (comparison_fn_t) VAR_1);
        }

        if (!VAR_4)
                return ((void*)0);

        return (const char*) VAR_2 +
                FUNC_3(VAR_6->header_size) +
                FUNC_3(VAR_6->n_items) * FUNC_3(VAR_6->catalog_item_size) +
                FUNC_3(VAR_4->offset);
}
