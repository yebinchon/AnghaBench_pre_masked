
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* abs_path; int slash_regexes_len; int slash_regexes; int invert_regexes_len; int invert_regexes; int regexes_len; int regexes; int slash_names_len; int slash_names; int names_len; int names; int extensions_len; int extensions; } ;
typedef TYPE_1__ ignores ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int ) ;

void FUNC_2(ignores *VAR_0) {
    if (VAR_0 == ((void*)0)) {
        return;
    }
    FUNC_1(VAR_0->extensions, VAR_0->extensions_len);
    FUNC_1(VAR_0->names, VAR_0->names_len);
    FUNC_1(VAR_0->slash_names, VAR_0->slash_names_len);
    FUNC_1(VAR_0->regexes, VAR_0->regexes_len);
    FUNC_1(VAR_0->invert_regexes, VAR_0->invert_regexes_len);
    FUNC_1(VAR_0->slash_regexes, VAR_0->slash_regexes_len);
    if (VAR_0->abs_path) {
        FUNC_0(VAR_0->abs_path);
    }
    FUNC_0(VAR_0);
}
