
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ extensions_len; scalar_t__ names_len; scalar_t__ slash_names_len; scalar_t__ regexes_len; scalar_t__ slash_regexes_len; } ;
typedef TYPE_1__ ignores ;



int FUNC_0(ignores *VAR_0) {
    return (VAR_0->extensions_len + VAR_0->names_len + VAR_0->slash_names_len + VAR_0->regexes_len + VAR_0->slash_regexes_len == 0);
}
