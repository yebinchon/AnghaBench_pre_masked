
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ packetno; scalar_t__ e_o_s; scalar_t__ b_o_s; int granulepos; int bytes; int packet; } ;
typedef TYPE_1__ ogg_packet ;
struct TYPE_13__ {TYPE_3__* p_sys; } ;
typedef TYPE_2__ decoder_t ;
struct TYPE_14__ {int b_has_headers; } ;
typedef TYPE_3__ decoder_sys_t ;
struct TYPE_15__ {int i_dts; int i_buffer; int p_buffer; } ;
typedef TYPE_4__ block_t ;


 scalar_t__ FUNC_0 (TYPE_2__*) ;
 void* FUNC_1 (TYPE_2__*,TYPE_1__*,TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*) ;

__attribute__((used)) static void *FUNC_3( decoder_t *VAR_0, block_t *VAR_1 )
{
    decoder_sys_t *VAR_2 = VAR_0->p_sys;
    ogg_packet VAR_3;


    VAR_3.packet = VAR_1->p_buffer;
    VAR_3.bytes = VAR_1->i_buffer;
    VAR_3.granulepos = VAR_1->i_dts;
    VAR_3.b_o_s = 0;
    VAR_3.e_o_s = 0;
    VAR_3.packetno = 0;


    if( !VAR_2->b_has_headers )
    {
        if( FUNC_0( VAR_0 ) )
        {
            FUNC_2( VAR_1 );
            return ((void*)0);
        }
        VAR_2->b_has_headers = 1;
    }

    return FUNC_1( VAR_0, &VAR_3, VAR_1 );
}
