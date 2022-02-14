
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint16_t ;
struct TYPE_8__ {TYPE_3__* p_sys; } ;
typedef TYPE_2__ filter_t ;
struct TYPE_9__ {scalar_t__ i_out_offset; TYPE_1__* p_out_buf; } ;
typedef TYPE_3__ filter_sys_t ;
struct TYPE_7__ {int* p_buffer; scalar_t__ i_buffer; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*,int*,scalar_t__) ;
 int FUNC_2 (TYPE_2__*,scalar_t__) ;

__attribute__((used)) static void FUNC_3( filter_t *VAR_1, uint16_t VAR_2,
                            uint8_t VAR_3 )
{
    filter_sys_t *VAR_4 = VAR_1->p_sys;
    FUNC_0( VAR_4->p_out_buf != ((void*)0) );
    FUNC_0( VAR_2 != 0 );
    uint8_t *VAR_5 = VAR_4->p_out_buf->p_buffer;


    FUNC_0( VAR_4->i_out_offset > VAR_0 );
    FUNC_0( VAR_3 == 1 || VAR_3 == 8 );

    FUNC_1( VAR_1, &VAR_5[0], 0xf872 );
    FUNC_1( VAR_1, &VAR_5[2], 0x4e1f );
    FUNC_1( VAR_1, &VAR_5[4], VAR_2 );

    FUNC_1( VAR_1, &VAR_5[6],
              ( VAR_4->i_out_offset - VAR_0 ) * VAR_3 );


    if( VAR_4->i_out_offset < VAR_4->p_out_buf->i_buffer )
        FUNC_2( VAR_1,
                       VAR_4->p_out_buf->i_buffer - VAR_4->i_out_offset );
}
