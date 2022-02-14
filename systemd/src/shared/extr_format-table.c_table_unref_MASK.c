
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {size_t n_cells; int * empty_string; int * reverse_map; int * sort_map; int * display_map; int * data; } ;
typedef TYPE_1__ Table ;


 int FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;

Table *FUNC_3(Table *VAR_0) {
        size_t VAR_1;

        if (!VAR_0)
                return ((void*)0);

        for (VAR_1 = 0; VAR_1 < VAR_0->n_cells; VAR_1++)
                FUNC_2(VAR_0->data[VAR_1]);

        FUNC_0(VAR_0->data);
        FUNC_0(VAR_0->display_map);
        FUNC_0(VAR_0->sort_map);
        FUNC_0(VAR_0->reverse_map);
        FUNC_0(VAR_0->empty_string);

        return FUNC_1(VAR_0);
}
