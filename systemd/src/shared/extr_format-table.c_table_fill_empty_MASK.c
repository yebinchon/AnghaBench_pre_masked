
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {size_t n_columns; size_t n_cells; } ;
typedef TYPE_1__ Table ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int *,int ,int *) ;

int FUNC_2(Table *VAR_2, size_t VAR_3) {
        int VAR_4;

        FUNC_0(VAR_2);




        if (VAR_3 >= VAR_2->n_columns)
                return -VAR_0;

        do {
                VAR_4 = FUNC_1(VAR_2, ((void*)0), VAR_1, ((void*)0));
                if (VAR_4 < 0)
                        return VAR_4;

        } while ((VAR_2->n_cells % VAR_2->n_columns) != VAR_3);

        return 0;
}
