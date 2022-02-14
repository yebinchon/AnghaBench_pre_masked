
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


typedef int ssize_t ;
struct TYPE_12__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ sout_access_out_t ;
struct TYPE_13__ {int b_mtu_warning; scalar_t__ i_packet_size; TYPE_10__* p_pktbuffer; } ;
typedef TYPE_2__ sout_access_out_sys_t ;
struct TYPE_14__ {scalar_t__ i_buffer; size_t p_buffer; struct TYPE_14__* p_next; int i_dts; } ;
typedef TYPE_3__ block_t ;
struct TYPE_11__ {scalar_t__ i_buffer; scalar_t__ p_buffer; int i_dts; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*,TYPE_10__*) ;
 size_t FUNC_1 (scalar_t__,scalar_t__) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (scalar_t__,size_t,size_t) ;
 int FUNC_5 (TYPE_1__*,char*,scalar_t__,scalar_t__) ;

__attribute__((used)) static ssize_t FUNC_6( sout_access_out_t *VAR_1, block_t *VAR_2 )
{
    sout_access_out_sys_t *VAR_3 = VAR_1->p_sys;
    int VAR_4 = 0;

    while( VAR_2 )
    {
        block_t *VAR_5;
        int VAR_6 = 0;

        if( !VAR_3->b_mtu_warning && VAR_2->i_buffer > VAR_3->i_packet_size )
        {
            FUNC_5( VAR_1, "Buffer data size (%zu) > configured packet size (%zu), you " "should probably increase the configured packet size", VAR_2->i_buffer,

                VAR_3->i_packet_size );
            VAR_3->b_mtu_warning = 1;
        }


        if( VAR_3->p_pktbuffer->i_buffer + VAR_2->i_buffer > VAR_3->i_packet_size )
        {
            FUNC_0(VAR_1, VAR_3->p_pktbuffer);
            VAR_3->p_pktbuffer->i_buffer = VAR_0;
        }

        VAR_4 += VAR_2->i_buffer;

        while( VAR_2->i_buffer )
        {

            size_t VAR_7 = FUNC_1( VAR_2->i_buffer, VAR_3->i_packet_size );

            VAR_6++;

            if( VAR_3->p_pktbuffer->i_buffer == VAR_0 )
            {
                VAR_3->p_pktbuffer->i_dts = VAR_2->i_dts;
            }

            FUNC_4( VAR_3->p_pktbuffer->p_buffer + VAR_3->p_pktbuffer->i_buffer,
                    VAR_2->p_buffer, VAR_7 );

            VAR_3->p_pktbuffer->i_buffer += VAR_7;
            VAR_2->p_buffer += VAR_7;
            VAR_2->i_buffer -= VAR_7;




            if( VAR_3->p_pktbuffer->i_buffer == VAR_3->i_packet_size || VAR_6 > 1 )
            {
                FUNC_0(VAR_1, VAR_3->p_pktbuffer);
                VAR_3->p_pktbuffer->i_buffer = VAR_0;
            }

        }

        VAR_5 = VAR_2->p_next;
        FUNC_3( VAR_2 );
        VAR_2 = VAR_5;

    }

    if ( VAR_4 <= 0 ) {
        FUNC_2( VAR_2 );
    }
    return VAR_4;
}
