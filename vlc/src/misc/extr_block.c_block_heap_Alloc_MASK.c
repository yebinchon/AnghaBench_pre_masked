
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int block_t ;


 int * FUNC_0 (int *,int *,void*,size_t) ;
 int VAR_0 ;
 int FUNC_1 (void*) ;
 int * FUNC_2 (int) ;

block_t *FUNC_3 (void *VAR_1, size_t VAR_2)
{
    block_t *VAR_3 = FUNC_2 (sizeof (*VAR_3));
    if (VAR_3 == ((void*)0))
    {
        FUNC_1 (VAR_1);
        return ((void*)0);
    }

    return FUNC_0(VAR_3, &VAR_0, VAR_1, VAR_2);
}
