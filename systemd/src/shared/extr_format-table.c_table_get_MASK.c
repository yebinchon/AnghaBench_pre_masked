
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void const* data; } ;
typedef TYPE_1__ TableData ;
typedef int TableCell ;
typedef int Table ;


 int FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (int *,int *) ;

const void *FUNC_2(Table *VAR_0, TableCell *VAR_1) {
        TableData *VAR_2;

        FUNC_0(VAR_0);

        VAR_2 = FUNC_1(VAR_0, VAR_1);
        if (!VAR_2)
                return ((void*)0);

        return VAR_2->data;
}
