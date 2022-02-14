
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int filter_t ;
typedef int block_t ;


 int * FUNC_0 (int * const*,unsigned int,int *) ;
 int FUNC_1 (int **,int *) ;
 int * FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;

__attribute__((used)) static block_t *FUNC_4(filter_t *const *VAR_0,
                                          unsigned VAR_1)
{
    block_t *VAR_2 = ((void*)0);

    for (unsigned VAR_3 = 0; VAR_3 < VAR_1; VAR_3++)
    {
        filter_t *VAR_4 = VAR_0[VAR_3];

        block_t *VAR_5 = FUNC_3 (VAR_4);
        if (VAR_5)
        {


            if (VAR_3 + 1 < VAR_1)
                VAR_5 = FUNC_0 (&VAR_0[VAR_3 + 1],
                                                  VAR_1 - VAR_3 - 1, VAR_5);
            if (VAR_5)
                FUNC_1 (&VAR_2, VAR_5);
        }
    }

    if (VAR_2)
        return FUNC_2(VAR_2);
    else
        return ((void*)0);
}
