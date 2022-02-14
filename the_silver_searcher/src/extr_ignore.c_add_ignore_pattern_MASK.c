
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char** extensions; size_t extensions_len; char** slash_regexes; size_t slash_regexes_len; char** invert_regexes; size_t invert_regexes_len; char** regexes; size_t regexes_len; char** slash_names; size_t slash_names_len; char** names; size_t names_len; char* abs_path; } ;
typedef TYPE_1__ ignores ;


 char** FUNC_0 (char**,size_t) ;
 char* FUNC_1 (char const*,int) ;
 scalar_t__ FUNC_2 (char const*) ;
 int FUNC_3 (char const) ;
 int FUNC_4 (char*,...) ;
 TYPE_1__* VAR_0 ;
 scalar_t__ FUNC_5 (char const*,char) ;
 scalar_t__ FUNC_6 (char const*,char*) ;
 int FUNC_7 (char const*) ;
 scalar_t__ FUNC_8 (char const*,char*,int) ;

void FUNC_9(ignores *VAR_1, const char *VAR_2) {
    int VAR_3;
    int VAR_4;


    if (FUNC_8(VAR_2, "./", 2) == 0) {
        VAR_2++;
    }


    for (VAR_4 = FUNC_7(VAR_2); VAR_4 > 0; VAR_4--) {
        if (!FUNC_3(VAR_2[VAR_4 - 1])) {
            break;
        }
    }

    if (VAR_4 == 0) {
        FUNC_4("Pattern is empty. Not adding any ignores.");
        return;
    }

    char ***VAR_5;
    size_t *VAR_6;
    if (FUNC_2(VAR_2)) {
        if (VAR_2[0] == '*' && VAR_2[1] == '.' && FUNC_5(VAR_2 + 2, '.') && !FUNC_2(VAR_2 + 2)) {
            VAR_5 = &(VAR_1->extensions);
            VAR_6 = &(VAR_1->extensions_len);
            VAR_2 += 2;
            VAR_4 -= 2;
        } else if (VAR_2[0] == '/') {
            VAR_5 = &(VAR_1->slash_regexes);
            VAR_6 = &(VAR_1->slash_regexes_len);
            VAR_2++;
            VAR_4--;
        } else if (VAR_2[0] == '!') {
            VAR_5 = &(VAR_1->invert_regexes);
            VAR_6 = &(VAR_1->invert_regexes_len);
            VAR_2++;
            VAR_4--;
        } else {
            VAR_5 = &(VAR_1->regexes);
            VAR_6 = &(VAR_1->regexes_len);
        }
    } else {
        if (VAR_2[0] == '/') {
            VAR_5 = &(VAR_1->slash_names);
            VAR_6 = &(VAR_1->slash_names_len);
            VAR_2++;
            VAR_4--;
        } else {
            VAR_5 = &(VAR_1->names);
            VAR_6 = &(VAR_1->names_len);
        }
    }

    ++*VAR_6;

    char **VAR_7;


    *VAR_5 = VAR_7 = FUNC_0(*VAR_5, (*VAR_6) * sizeof(char *));

    for (VAR_3 = *VAR_6 - 1; VAR_3 > 0; VAR_3--) {
        if (FUNC_6(VAR_2, VAR_7[VAR_3 - 1]) > 0) {
            break;
        }
        VAR_7[VAR_3] = VAR_7[VAR_3 - 1];
    }
    VAR_7[VAR_3] = FUNC_1(VAR_2, VAR_4);
    FUNC_4("added ignore pattern %s to %s", VAR_2,
              VAR_1 == VAR_0 ? "root ignores" : VAR_1->abs_path);
}
