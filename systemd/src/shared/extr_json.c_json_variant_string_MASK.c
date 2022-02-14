
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ type; char const* string; struct TYPE_6__* reference; scalar_t__ is_reference; } ;
typedef TYPE_1__ JsonVariant ;


 TYPE_1__* VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (char*) ;

const char *FUNC_4(JsonVariant *VAR_2) {
        if (!VAR_2)
                return ((void*)0);
        if (VAR_2 == VAR_0)
                return "";
        if (FUNC_2(VAR_2))
                goto mismatch;
        if (FUNC_1(VAR_2)) {
                uintptr_t VAR_3 = (uintptr_t) VAR_2;

                FUNC_0((VAR_3 & 1) != 0);
                return (const char*) (VAR_3 ^ 1U);
        }

        if (VAR_2->is_reference)
                return FUNC_4(VAR_2->reference);
        if (VAR_2->type != VAR_1)
                goto mismatch;

        return VAR_2->string;

mismatch:
        FUNC_3("Non-string JSON variant requested as string, returning NULL.");
        return ((void*)0);
}
