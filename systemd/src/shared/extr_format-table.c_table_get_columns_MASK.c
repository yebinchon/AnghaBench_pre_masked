
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ n_columns; } ;
typedef TYPE_1__ Table ;


 int FUNC_0 (int) ;

size_t FUNC_1(Table *VAR_0) {
        if (!VAR_0)
                return 0;

        FUNC_0(VAR_0->n_columns > 0);
        return VAR_0->n_columns;
}
