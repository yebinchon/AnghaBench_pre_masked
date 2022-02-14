
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {size_t i_buffer; int * p_buffer; } ;
typedef TYPE_1__ block_t ;


 TYPE_1__* FUNC_0 (size_t) ;
 int FUNC_1 (int *,int *,size_t) ;

__attribute__((used)) static bool FUNC_2( block_t **VAR_0, block_t **VAR_1, size_t VAR_2 )
{
    block_t *VAR_3 = *VAR_0;
    block_t *VAR_4 = ((void*)0);
    *VAR_1 = ((void*)0);

    size_t VAR_5 = VAR_3->i_buffer - VAR_2;
    if( VAR_5 > VAR_2 )
    {
        if( VAR_2 > 0 )
        {
            VAR_4 = FUNC_0( VAR_2 );
            if( VAR_4 == ((void*)0) )
                return 0;
            FUNC_1( VAR_4->p_buffer, VAR_3->p_buffer, VAR_2 );
            VAR_3->p_buffer += VAR_2;
            VAR_3->i_buffer -= VAR_2;
        }
        *VAR_1 = VAR_3;
        *VAR_0 = VAR_4;
    }
    else
    {
        if( VAR_5 > 0 )
        {
            VAR_4 = FUNC_0( VAR_5 );
            if( VAR_4 == ((void*)0) )
                return 0;
            FUNC_1( VAR_4->p_buffer, &VAR_3->p_buffer[VAR_2], VAR_5 );
            VAR_3->i_buffer -= VAR_5;
        }
        *VAR_1 = VAR_4;
    }
    return 1;
}
