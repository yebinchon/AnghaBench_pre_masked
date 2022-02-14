
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {size_t n_elements; struct TYPE_9__* reference; scalar_t__ is_reference; int type; } ;
typedef TYPE_1__ JsonVariant ;


 int FUNC_0 (int ,int ,int ) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 TYPE_1__* FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (char*) ;

JsonVariant *FUNC_4(JsonVariant *VAR_4, size_t VAR_5) {
        if (!VAR_4)
                return ((void*)0);
        if (VAR_4 == VAR_1 ||
            VAR_4 == VAR_2)
                return ((void*)0);
        if (!FUNC_2(VAR_4))
                goto mismatch;
        if (!FUNC_0(VAR_4->type, VAR_0, VAR_3))
                goto mismatch;
        if (VAR_4->is_reference)
                return FUNC_4(VAR_4->reference, VAR_5);
        if (VAR_5 >= VAR_4->n_elements)
                return ((void*)0);

        return FUNC_1(VAR_4 + 1 + VAR_5);

mismatch:
        FUNC_3("Element in non-array/non-object JSON variant requested by index, returning NULL.");
        return ((void*)0);
}
