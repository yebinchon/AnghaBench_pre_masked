
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef int stream_t ;
struct TYPE_17__ {int i_channels; } ;
struct TYPE_18__ {int i_codec; TYPE_1__ audio; } ;
struct TYPE_19__ {int i_block_flags; int i_next_block_flags; int p_es; int i_pts_backup; int i_dts_backup; scalar_t__ p_asf; TYPE_2__ fmt; int rgi_chans_reordering; scalar_t__ b_chans_reorder; } ;
typedef TYPE_3__ mp4_track_t ;
struct TYPE_20__ {int out; int * s; TYPE_5__* p_sys; } ;
typedef TYPE_4__ demux_t ;
struct TYPE_21__ {int asfpacketsys; } ;
typedef TYPE_5__ demux_sys_t ;
struct TYPE_22__ {int i_flags; int i_buffer; int i_pts; int i_dts; int p_buffer; } ;
typedef TYPE_6__ block_t ;


 int FUNC_0 (int *,int ,int ) ;
 TYPE_6__* FUNC_1 (TYPE_4__*,TYPE_3__*,TYPE_6__*) ;
 int FUNC_2 (int ,int ,int ,int ,int ) ;
 int FUNC_3 (TYPE_6__*) ;
 int FUNC_4 (int ,int ,TYPE_6__*) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (TYPE_4__*,int ,int ,int) ;

__attribute__((used)) static void FUNC_7( demux_t *VAR_0, mp4_track_t *VAR_1, block_t *VAR_2 )
{
    demux_sys_t *VAR_3 = VAR_0->p_sys;

    VAR_2 = FUNC_1( VAR_0, VAR_1, VAR_2 );
    if( VAR_2 == ((void*)0) )
        return;

    if ( VAR_1->b_chans_reorder )
    {
        FUNC_2( VAR_2->p_buffer, VAR_2->i_buffer,
                             VAR_1->fmt.audio.i_channels,
                             VAR_1->rgi_chans_reordering,
                             VAR_1->fmt.i_codec );
    }

    VAR_2->i_flags |= VAR_1->i_block_flags;
    if( VAR_1->i_next_block_flags )
    {
        VAR_2->i_flags |= VAR_1->i_next_block_flags;
        VAR_1->i_next_block_flags = 0;
    }


    if( VAR_1->p_asf )
    {

        stream_t *VAR_4 = VAR_0->s;
        VAR_0->s = FUNC_6( VAR_0, VAR_2->p_buffer, VAR_2->i_buffer, 1 );
        if ( VAR_0->s )
        {
            VAR_1->i_dts_backup = VAR_2->i_dts;
            VAR_1->i_pts_backup = VAR_2->i_pts;

            FUNC_0( &VAR_3->asfpacketsys, VAR_2->i_buffer, VAR_2->i_buffer );
            FUNC_5(VAR_0->s);
        }
        FUNC_3(VAR_2);
        VAR_0->s = VAR_4;
    }
    else
        FUNC_4( VAR_0->out, VAR_1->p_es, VAR_2 );
}
