
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int block_t ;


 int VAR_0 ;
 int * FUNC_0 (int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char const*,int ) ;

block_t *FUNC_3(const char *VAR_1, bool VAR_2)
{


    int VAR_3 = FUNC_2 (VAR_1, VAR_0);
    if (VAR_3 == -1)
        return ((void*)0);

    block_t *VAR_4 = FUNC_0(VAR_3, VAR_2);
    FUNC_1 (VAR_3);
    return VAR_4;
}
