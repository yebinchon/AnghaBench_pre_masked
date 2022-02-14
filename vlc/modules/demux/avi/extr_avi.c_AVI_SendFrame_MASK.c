
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_14__ {int out; } ;
typedef TYPE_2__ demux_t ;
struct TYPE_15__ {scalar_t__ i_buffer; scalar_t__ i_flags; int p_buffer; int i_pts; int i_dts; } ;
typedef TYPE_3__ block_t ;
struct TYPE_13__ {scalar_t__ i_cat; int i_codec; } ;
struct TYPE_16__ {scalar_t__ p_es; scalar_t__ i_next_block_flags; TYPE_1__ fmt; scalar_t__ i_dv_audio_rate; } ;
typedef TYPE_4__ avi_track_t ;


 int FUNC_0 (TYPE_2__*,TYPE_4__*,TYPE_3__*) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int ,scalar_t__,TYPE_3__*) ;

__attribute__((used)) static void FUNC_4( demux_t *VAR_3, avi_track_t *VAR_4, block_t *VAR_5 )
{
    if( VAR_4->fmt.i_cat != VAR_1 )
        VAR_5->i_dts = VAR_5->i_pts;
    else
    {
        VAR_5->i_dts = VAR_5->i_pts;
        VAR_5->i_pts = VAR_2;
    }

    if( VAR_4->i_dv_audio_rate )
        FUNC_0( VAR_3, VAR_4, VAR_5 );


    if( FUNC_1( VAR_4->fmt.i_codec ) )
    {
        if( VAR_5->i_buffer <= VAR_0 )
        {
            FUNC_2( VAR_5 );
            return;
        }

        VAR_5->i_buffer -= VAR_0;
        VAR_5->p_buffer += VAR_0;
    }

    if( VAR_4->i_next_block_flags )
    {
        VAR_5->i_flags = VAR_4->i_next_block_flags;
        VAR_4->i_next_block_flags = 0;
    }

    if( VAR_4->p_es )
        FUNC_3( VAR_3->out, VAR_4->p_es, VAR_5 );
    else
        FUNC_2( VAR_5 );
}
