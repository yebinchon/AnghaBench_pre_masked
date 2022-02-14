
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int TableCell ;
struct TYPE_4__ {size_t n_columns; size_t n_cells; } ;
typedef TYPE_1__ Table ;


 int * FUNC_0 (size_t) ;
 int FUNC_1 (TYPE_1__*) ;

TableCell *FUNC_2(Table *VAR_0, size_t VAR_1, size_t VAR_2) {
        size_t VAR_3;

        FUNC_1(VAR_0);

        if (VAR_2 >= VAR_0->n_columns)
                return ((void*)0);

        VAR_3 = VAR_1 * VAR_0->n_columns + VAR_2;
        if (VAR_3 >= VAR_0->n_cells)
                return ((void*)0);

        return FUNC_0(VAR_3);
}
