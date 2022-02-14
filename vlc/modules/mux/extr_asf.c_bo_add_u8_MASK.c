
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {size_t i_buffer; size_t i_buffer_size; int * p_buffer; } ;
typedef TYPE_1__ bo_t ;



__attribute__((used)) static void FUNC_0( bo_t *VAR_0, uint8_t VAR_1 )
{
    if( VAR_0->i_buffer < VAR_0->i_buffer_size )
    {
        VAR_0->p_buffer[VAR_0->i_buffer] = VAR_1;
    }
    VAR_0->i_buffer++;
}
