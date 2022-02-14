
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_13__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ sout_mux_t ;
struct TYPE_14__ {int i_packet_size; int i_pk_used; int i_preroll_time; scalar_t__ i_pk_frame; scalar_t__ i_dts_first; TYPE_6__* pk; scalar_t__ i_pk_dts; scalar_t__ b_asf_http; } ;
typedef TYPE_2__ sout_mux_sys_t ;
typedef int bo_t ;
struct TYPE_15__ {int i_buffer; int i_flags; struct TYPE_15__* p_next; scalar_t__ i_dts; int * p_buffer; } ;
typedef TYPE_3__ block_t ;
struct TYPE_16__ {int i_id; int i_sequence; scalar_t__ b_audio_correction; } ;
typedef TYPE_4__ asf_track_t ;
struct TYPE_17__ {int * p_buffer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,int) ;
 TYPE_3__* FUNC_2 (TYPE_1__*) ;
 TYPE_6__* FUNC_3 (int) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (int *,int *,int) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int *,int *,int) ;

__attribute__((used)) static block_t *FUNC_10( sout_mux_t *VAR_2,
                                   asf_track_t *VAR_3, block_t *VAR_4 )
{
    sout_mux_sys_t *VAR_5 = VAR_2->p_sys;

    int VAR_6 = VAR_4->i_buffer;
    int VAR_7 = 0;
    uint8_t *VAR_8= VAR_4->p_buffer;
    block_t *VAR_9 = ((void*)0), **VAR_10 = &VAR_9;
    int VAR_11 = VAR_5->b_asf_http ? 12 : 0;

    while( VAR_7 < VAR_6 )
    {
        bo_t VAR_12;
        int VAR_13;

        if( VAR_5->pk == ((void*)0) )
        {
            VAR_5->pk = FUNC_3( VAR_5->i_packet_size + VAR_11 );

            VAR_5->i_pk_used = 14 + VAR_11;
            VAR_5->i_pk_frame = 0;
            VAR_5->i_pk_dts = VAR_4->i_dts;
        }

        FUNC_9( &VAR_12, &VAR_5->pk->p_buffer[VAR_5->i_pk_used],
                 VAR_5->i_packet_size - VAR_5->i_pk_used );


        VAR_13 = FUNC_1( VAR_6 - VAR_7,
                           VAR_5->i_packet_size - VAR_5->i_pk_used - 17 );

        if( VAR_3->b_audio_correction && VAR_5->i_pk_frame && VAR_13 < VAR_6 )
        {

            *VAR_10 = FUNC_2( VAR_2 );
            VAR_10 = &(*VAR_10)->p_next;
            continue;
        }

        FUNC_6 ( &VAR_12, !(VAR_4->i_flags & VAR_1 ||
                      VAR_4->i_flags & VAR_0) ?
                      0x80 | VAR_3->i_id : VAR_3->i_id );
        FUNC_6 ( &VAR_12, VAR_3->i_sequence );
        FUNC_8( &VAR_12, VAR_7 );
        FUNC_6 ( &VAR_12, 0x08 );
        FUNC_8( &VAR_12, VAR_6 );
        FUNC_8( &VAR_12, FUNC_0(VAR_4->i_dts - VAR_5->i_dts_first) +
                      VAR_5->i_preroll_time );
        FUNC_7( &VAR_12, VAR_13 );
        FUNC_5 ( &VAR_12, &VAR_8[VAR_7], VAR_13 );
        VAR_7 += VAR_13;
        VAR_5->i_pk_used += 17 + VAR_13;

        VAR_5->i_pk_frame++;

        if( VAR_5->i_pk_used + 17 >= VAR_5->i_packet_size )
        {

            *VAR_10 = FUNC_2( VAR_2 );
            VAR_10 = &(*VAR_10)->p_next;
        }
    }

    VAR_3->i_sequence++;
    FUNC_4( VAR_4 );

    return VAR_9;
}
