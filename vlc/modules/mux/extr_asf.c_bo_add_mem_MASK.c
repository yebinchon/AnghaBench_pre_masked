
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {size_t i_buffer; int * p_buffer; scalar_t__ i_buffer_size; } ;
typedef TYPE_1__ bo_t ;


 int FUNC_0 (int,scalar_t__) ;
 int FUNC_1 (int *,int *,int) ;

__attribute__((used)) static void FUNC_2( bo_t *VAR_0, uint8_t *VAR_1, int VAR_2 )
{
    int VAR_3 = FUNC_0( VAR_2, VAR_0->i_buffer_size - VAR_0->i_buffer );

    if( VAR_3 > 0 )
    {
        FUNC_1( &VAR_0->p_buffer[VAR_0->i_buffer], VAR_1, VAR_3 );
    }
    VAR_0->i_buffer += VAR_2;
}
