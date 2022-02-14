
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int stream_t ;
typedef int block_t ;


 int * FUNC_0 (int *) ;
 int * FUNC_1 (int *) ;

__attribute__((used)) static block_t *FUNC_2(stream_t *VAR_0, bool *restrict VAR_1)
{
    stream_t *VAR_2 = FUNC_0(VAR_0);
    if (VAR_2 == ((void*)0))
    {
        *VAR_1 = 1;
        return ((void*)0);
    }

    return FUNC_1(VAR_2);
}
