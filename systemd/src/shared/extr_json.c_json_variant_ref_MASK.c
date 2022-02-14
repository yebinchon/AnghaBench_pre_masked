
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ n_ref; struct TYPE_5__* parent; scalar_t__ is_embedded; } ;
typedef TYPE_1__ JsonVariant ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;

JsonVariant *FUNC_2(JsonVariant *VAR_0) {
        if (!VAR_0)
                return ((void*)0);
        if (!FUNC_1(VAR_0))
                return VAR_0;

        if (VAR_0->is_embedded)
                FUNC_2(VAR_0->parent);
        else {
                FUNC_0(VAR_0->n_ref > 0);
                VAR_0->n_ref++;
        }

        return VAR_0;
}
