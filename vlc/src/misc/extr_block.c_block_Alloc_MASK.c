
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {size_t i_buffer; void* p_buffer; } ;
typedef TYPE_1__ block_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int *,TYPE_1__*,size_t const) ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__* FUNC_1 (size_t const) ;
 int FUNC_2 (int,char*) ;
 scalar_t__ FUNC_3 (int) ;

block_t *FUNC_4 (size_t VAR_5)
{
    if (FUNC_3(VAR_5 >> 27))
    {
        VAR_4 = VAR_2;
        return ((void*)0);
    }


    const size_t VAR_6 = sizeof (block_t) + VAR_0 + (2 * VAR_1)
                       + VAR_5;
    if (FUNC_3(VAR_6 <= VAR_5))
        return ((void*)0);

    block_t *VAR_7 = FUNC_1 (VAR_6);
    if (FUNC_3(VAR_7 == ((void*)0)))
        return ((void*)0);

    FUNC_0(VAR_7, &VAR_3, VAR_7 + 1, VAR_6 - sizeof (*VAR_7));
    FUNC_2 ((VAR_1 % VAR_0) == 0,
                   "BLOCK_PADDING must be a multiple of BLOCK_ALIGN");
    VAR_7->p_buffer += VAR_1 + VAR_0 - 1;
    VAR_7->p_buffer = (void *)(((uintptr_t)VAR_7->p_buffer) & ~(VAR_0 - 1));
    VAR_7->i_buffer = VAR_5;
    return VAR_7;
}
