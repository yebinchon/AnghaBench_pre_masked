
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_7__ {TYPE_3__* p_sys; } ;
typedef TYPE_2__ filter_t ;
struct TYPE_8__ {size_t i_out_offset; TYPE_1__* p_out_buf; } ;
typedef TYPE_3__ filter_sys_t ;
struct TYPE_6__ {int i_buffer; int * p_buffer; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*,int *,int ) ;

__attribute__((used)) static void FUNC_2( filter_t *VAR_0, uint16_t VAR_1 )
{
    filter_sys_t *VAR_2 = VAR_0->p_sys;
    FUNC_0( VAR_2->p_out_buf != ((void*)0) );

    FUNC_0( VAR_2->p_out_buf->i_buffer - VAR_2->i_out_offset
            >= sizeof( uint16_t ) );
    FUNC_1( VAR_0, &VAR_2->p_out_buf->p_buffer[VAR_2->i_out_offset], VAR_1 );
    VAR_2->i_out_offset += sizeof( uint16_t );
}
