
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef size_t vlc_tick_t ;
typedef int uint8_t ;
typedef int ssize_t ;
struct TYPE_12__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ sout_stream_t ;
struct TYPE_13__ {TYPE_6__* packet; TYPE_3__** es; } ;
typedef TYPE_2__ sout_stream_sys_t ;
struct TYPE_14__ {int i_mtu; } ;
typedef TYPE_3__ sout_stream_id_sys_t ;
struct TYPE_15__ {size_t i_dts; size_t i_buffer; int i_flags; size_t i_length; int * p_buffer; } ;
typedef TYPE_4__ block_t ;
struct TYPE_16__ {size_t i_buffer; size_t i_dts; size_t i_length; int * p_buffer; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (size_t,unsigned int) ;
 TYPE_6__* FUNC_1 (int) ;
 int FUNC_2 (int *,int *,size_t) ;
 int FUNC_3 (TYPE_3__*,TYPE_6__*,int,size_t) ;
 int FUNC_4 (TYPE_3__*,TYPE_6__*) ;

__attribute__((used)) static ssize_t FUNC_5( sout_stream_t *VAR_2,
                                            const block_t *VAR_3 )
{
    sout_stream_sys_t *VAR_4 = VAR_2->p_sys;
    sout_stream_id_sys_t *VAR_5 = VAR_4->es[0];

    vlc_tick_t VAR_6 = VAR_3->i_dts;

    uint8_t *VAR_7 = VAR_3->p_buffer;
    size_t VAR_8 = VAR_3->i_buffer;
    size_t VAR_9 = VAR_5->i_mtu - 12;
    bool VAR_10 = (VAR_3->i_flags & VAR_0);

    size_t VAR_11 = ( VAR_3->i_buffer + VAR_9 - 1 ) / VAR_9;

    while( VAR_8 > 0 )
    {
        size_t VAR_12;


        if( VAR_4->packet &&
            VAR_4->packet->i_buffer + VAR_8 > VAR_9 )
        {
            FUNC_4( VAR_5, VAR_4->packet );
            VAR_4->packet = ((void*)0);
        }

        if( VAR_4->packet == ((void*)0) )
        {

            VAR_4->packet = FUNC_1( VAR_5->i_mtu );

            FUNC_3( VAR_5, VAR_4->packet, VAR_10, VAR_6 );
            VAR_4->packet->i_buffer = 12;
            VAR_4->packet->i_dts = VAR_6;
            VAR_4->packet->i_length = VAR_3->i_length / VAR_11;
            VAR_6 += VAR_4->packet->i_length;
            VAR_10 = 0;
        }

        VAR_12 = FUNC_0( VAR_8,
                        (unsigned)(VAR_5->i_mtu - VAR_4->packet->i_buffer) );

        FUNC_2( &VAR_4->packet->p_buffer[VAR_4->packet->i_buffer],
                VAR_7, VAR_12 );

        VAR_4->packet->i_buffer += VAR_12;
        VAR_7 += VAR_12;
        VAR_8 -= VAR_12;
    }

    return VAR_1;
}
