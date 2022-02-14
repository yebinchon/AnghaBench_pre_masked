
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


struct TYPE_19__ {int granulepos; scalar_t__ packetno; scalar_t__ e_o_s; scalar_t__ b_o_s; scalar_t__ bytes; int * packet; } ;
typedef TYPE_2__ ogg_packet ;
struct TYPE_18__ {int p_extra; } ;
struct TYPE_20__ {TYPE_1__ fmt_in; TYPE_4__* p_sys; } ;
typedef TYPE_3__ decoder_t ;
struct TYPE_21__ {int b_has_headers; scalar_t__ b_packetizer; } ;
typedef TYPE_4__ decoder_sys_t ;
struct TYPE_22__ {int i_flags; scalar_t__ i_buffer; int * p_buffer; } ;
typedef TYPE_5__ block_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;
 scalar_t__ FUNC_2 (TYPE_3__*) ;
 TYPE_5__* FUNC_3 (TYPE_3__*,TYPE_2__*,TYPE_5__**) ;
 int FUNC_4 (TYPE_5__*) ;
 int FUNC_5 (TYPE_3__*,char*) ;

__attribute__((used)) static block_t *FUNC_6( decoder_t *VAR_2, block_t **VAR_3 )
{
    decoder_sys_t *VAR_4 = VAR_2->p_sys;
    ogg_packet VAR_5;

    block_t *VAR_6 = *VAR_3;

    if( VAR_6 != ((void*)0) )
    {
        if( VAR_6->i_flags & (VAR_0|VAR_1) )
        {
            FUNC_1( VAR_2 );
            if( VAR_6->i_flags & VAR_0 )
            {
                FUNC_4( VAR_6 );
                *VAR_3 = ((void*)0);
                return ((void*)0);
            }
        }

        VAR_5.packet = VAR_6->p_buffer;
        VAR_5.bytes = VAR_6->i_buffer;
    }
    else
    {
        if( VAR_4->b_packetizer ) return ((void*)0);


        VAR_5.packet = ((void*)0);
        VAR_5.bytes = 0;
    }

    VAR_5.granulepos = -1;
    VAR_5.b_o_s = 0;
    VAR_5.e_o_s = 0;
    VAR_5.packetno = 0;


    if( !VAR_4->b_has_headers )
    {
        if( !VAR_2->fmt_in.p_extra )
        {
            FUNC_5( VAR_2, "Header missing, using default settings" );

            if( FUNC_0( VAR_2 ) )
            {
                if( VAR_6 != ((void*)0) )
                    FUNC_4( VAR_6 );
                return ((void*)0);
            }
        }
        else if( FUNC_2( VAR_2 ) )
        {
            if( VAR_6 != ((void*)0) )
                FUNC_4( VAR_6 );
            return ((void*)0);
        }
        VAR_4->b_has_headers = 1;
    }

    return FUNC_3( VAR_2, &VAR_5, VAR_3 );
}
