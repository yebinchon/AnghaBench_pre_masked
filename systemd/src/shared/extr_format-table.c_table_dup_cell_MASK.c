
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int TableCell ;
struct TYPE_4__ {size_t n_cells; int * data; int n_columns; int n_allocated; } ;
typedef TYPE_1__ Table ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int,int ) ;
 size_t FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ) ;

int FUNC_5(Table *VAR_2, TableCell *VAR_3) {
        size_t VAR_4;

        FUNC_3(VAR_2);



        VAR_4 = FUNC_2(VAR_3);
        if (VAR_4 >= VAR_2->n_cells)
                return -VAR_1;

        if (!FUNC_0(VAR_2->data, VAR_2->n_allocated, FUNC_1(VAR_2->n_cells + 1, VAR_2->n_columns)))
                return -VAR_0;

        VAR_2->data[VAR_2->n_cells++] = FUNC_4(VAR_2->data[VAR_4]);
        return 0;
}
