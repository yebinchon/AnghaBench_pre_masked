
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_1__ ;


typedef int vbuf ;
struct TYPE_11__ {int attr_subst_type; scalar_t__ attr_match_remove_trailing_whitespace; scalar_t__ data; } ;
typedef TYPE_1__ sd_device ;
typedef int nbuf ;
typedef TYPE_1__ UdevRuleToken ;
typedef TYPE_1__ UdevEvent ;





 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int *) ;
 int FUNC_3 (TYPE_1__*,char const*,char const**) ;
 int FUNC_4 (char*,int,char const*) ;
 int FUNC_5 (TYPE_1__*,char const*) ;
 int FUNC_6 (TYPE_1__*,char const*,char*,int,int) ;
 int FUNC_7 (char const*,char*,int,int) ;

__attribute__((used)) static bool FUNC_8(UdevRuleToken *VAR_2, sd_device *VAR_3, UdevEvent *VAR_4) {
        char VAR_5[VAR_0], VAR_6[VAR_0];
        const char *VAR_7, *VAR_8;

        FUNC_0(VAR_2);
        FUNC_0(VAR_3);
        FUNC_0(VAR_4);

        VAR_7 = (const char*) VAR_2->data;

        switch (VAR_2->attr_subst_type) {
        case 130:
                (void) FUNC_6(VAR_4, VAR_7, VAR_5, sizeof(VAR_5), 0);
                VAR_7 = VAR_5;
                VAR_1;
        case 129:
                if (FUNC_3(VAR_3, VAR_7, &VAR_8) < 0)
                        return 0;
                break;
        case 128:
                if (FUNC_7(VAR_7, VAR_6, sizeof(VAR_6), 1) < 0)
                        return 0;
                VAR_8 = VAR_6;
                break;
        default:
                FUNC_1("Invalid attribute substitution type");
        }


        if (VAR_2->attr_match_remove_trailing_whitespace) {
                if (VAR_8 != VAR_6) {
                        FUNC_4(VAR_6, sizeof(VAR_6), VAR_8);
                        VAR_8 = VAR_6;
                }

                FUNC_2(VAR_6, ((void*)0));
        }

        return FUNC_5(VAR_2, VAR_8);
}
