
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TableCell ;
typedef int Table ;


 void const* FUNC_0 (int *,int *) ;
 int * FUNC_1 (int *,size_t,size_t) ;

const void* FUNC_2(Table *VAR_0, size_t VAR_1, size_t VAR_2) {
        TableCell *VAR_3;

        VAR_3 = FUNC_1(VAR_0, VAR_1, VAR_2);
        if (!VAR_3)
                return ((void*)0);

        return FUNC_0(VAR_0, VAR_3);
}
