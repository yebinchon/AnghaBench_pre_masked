
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_14__ {scalar_t__ type; size_t n_elements; int reference; scalar_t__ is_reference; } ;
typedef TYPE_1__ JsonVariant ;


 TYPE_1__* VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (int ,char const*) ;
 TYPE_1__* FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (int ,char const*) ;

JsonVariant *FUNC_8(JsonVariant *VAR_3, const char *VAR_4, JsonVariant **VAR_5) {
        size_t VAR_6;

        if (!VAR_3)
                goto not_found;
        if (!VAR_4)
                goto not_found;
        if (VAR_3 == VAR_0)
                goto not_found;
        if (!FUNC_4(VAR_3))
                goto mismatch;
        if (VAR_3->type != VAR_1)
                goto mismatch;
        if (VAR_3->is_reference)
                return FUNC_0(VAR_3->reference, VAR_4);

        for (VAR_6 = 0; VAR_6 < VAR_3->n_elements; VAR_6 += 2) {
                JsonVariant *VAR_7;

                VAR_7 = FUNC_2(VAR_3 + 1 + VAR_6);

                if (!FUNC_3(VAR_7, VAR_2))
                        continue;

                if (FUNC_7(FUNC_5(VAR_7), VAR_4)) {

                        if (VAR_5)
                                *VAR_5 = FUNC_1(VAR_3 + 1 + VAR_6);

                        return FUNC_1(VAR_3 + 1 + VAR_6 + 1);
                }
        }

not_found:
        if (VAR_5)
                *VAR_5 = ((void*)0);

        return ((void*)0);

mismatch:
        FUNC_6("Element in non-object JSON variant requested by key, returning NULL.");
        if (VAR_5)
                *VAR_5 = ((void*)0);

        return ((void*)0);
}
