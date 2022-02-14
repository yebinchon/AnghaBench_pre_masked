
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char const* dirname; size_t dirname_len; scalar_t__ abs_path_len; char* abs_path; struct TYPE_5__* parent; scalar_t__ slash_regexes_len; int * slash_regexes; scalar_t__ invert_regexes_len; int * invert_regexes; scalar_t__ regexes_len; int * regexes; scalar_t__ slash_names_len; int * slash_names; scalar_t__ names_len; int * names; scalar_t__ extensions_len; int * extensions; } ;
typedef TYPE_1__ ignores ;


 int FUNC_0 (char**,char*,char const*,...) ;
 void* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;

ignores *FUNC_3(ignores *VAR_0, const char *VAR_1, const size_t VAR_2) {
    ignores *VAR_3 = FUNC_1(sizeof(ignores));
    VAR_3->extensions = ((void*)0);
    VAR_3->extensions_len = 0;
    VAR_3->names = ((void*)0);
    VAR_3->names_len = 0;
    VAR_3->slash_names = ((void*)0);
    VAR_3->slash_names_len = 0;
    VAR_3->regexes = ((void*)0);
    VAR_3->regexes_len = 0;
    VAR_3->invert_regexes = ((void*)0);
    VAR_3->invert_regexes_len = 0;
    VAR_3->slash_regexes = ((void*)0);
    VAR_3->slash_regexes_len = 0;
    VAR_3->dirname = VAR_1;
    VAR_3->dirname_len = VAR_2;

    if (VAR_0 && FUNC_2(VAR_0) && VAR_0->parent) {
        VAR_3->parent = VAR_0->parent;
    } else {
        VAR_3->parent = VAR_0;
    }

    if (VAR_0 && VAR_0->abs_path_len > 0) {
        FUNC_0(&(VAR_3->abs_path), "%s/%s", VAR_0->abs_path, VAR_1);
        VAR_3->abs_path_len = VAR_0->abs_path_len + 1 + VAR_2;
    } else if (VAR_2 == 1 && VAR_1[0] == '.') {
        VAR_3->abs_path = FUNC_1(sizeof(char));
        VAR_3->abs_path[0] = '\0';
        VAR_3->abs_path_len = 0;
    } else {
        FUNC_0(&(VAR_3->abs_path), "%s", VAR_1);
        VAR_3->abs_path_len = VAR_2;
    }
    return VAR_3;
}
