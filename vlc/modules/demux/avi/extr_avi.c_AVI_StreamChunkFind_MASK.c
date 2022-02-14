
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_14__ {int s; TYPE_3__* p_sys; } ;
typedef TYPE_2__ demux_t ;
struct TYPE_15__ {scalar_t__ i_movi_lastchunk_pos; scalar_t__ i_movi_begin; size_t i_track; TYPE_4__** track; } ;
typedef TYPE_3__ demux_sys_t ;
struct TYPE_13__ {int i_codec; } ;
struct TYPE_16__ {int idx; TYPE_1__ fmt; } ;
typedef TYPE_4__ avi_track_t ;
struct TYPE_17__ {size_t i_stream; scalar_t__ i_cat; int i_size; int i_pos; int i_peek; int i_fourcc; } ;
typedef TYPE_5__ avi_packet_t ;
struct TYPE_18__ {int i_length; int i_lengthtotal; int i_pos; int i_flags; int i_id; } ;
typedef TYPE_6__ avi_entry_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (TYPE_2__*,TYPE_5__*) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int *,scalar_t__*,TYPE_6__*) ;
 int FUNC_4 (TYPE_2__*,char*) ;
 scalar_t__ FUNC_5 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_6( demux_t *VAR_4, unsigned int VAR_5 )
{
    demux_sys_t *VAR_6 = VAR_4->p_sys;
    avi_packet_t VAR_7;
    unsigned short VAR_8 = 0;



    if( VAR_6->i_movi_lastchunk_pos >= VAR_6->i_movi_begin + 12 )
    {
        if (FUNC_5(VAR_4->s, VAR_6->i_movi_lastchunk_pos))
            return VAR_2;
        if( FUNC_2( VAR_4 ) )
        {
            return VAR_2;
        }
    }
    else
    {
        if (FUNC_5(VAR_4->s, VAR_6->i_movi_begin + 12))
            return VAR_2;
    }

    for( ;; )
    {
        if( FUNC_1( VAR_4, &VAR_7 ) )
        {
            FUNC_4( VAR_4, "cannot get packet header" );
            return VAR_2;
        }
        if( VAR_7.i_stream >= VAR_6->i_track ||
            ( VAR_7.i_cat != VAR_0 && VAR_7.i_cat != VAR_1 ) )
        {
            if( FUNC_2( VAR_4 ) )
            {
                return VAR_2;
            }

            if( !++VAR_8 )
                 FUNC_4( VAR_4, "don't seem to find any data..." );
        }
        else
        {
            avi_track_t *VAR_9 = VAR_6->track[VAR_7.i_stream];


            avi_entry_t VAR_10;
            VAR_10.i_id = VAR_7.i_fourcc;
            VAR_10.i_flags = FUNC_0(VAR_9->fmt.i_codec, VAR_7.i_peek);
            VAR_10.i_pos = VAR_7.i_pos;
            VAR_10.i_length = VAR_7.i_size;
            VAR_10.i_lengthtotal = VAR_10.i_length;
            FUNC_3( &VAR_9->idx, &VAR_6->i_movi_lastchunk_pos, &VAR_10 );

            if( VAR_7.i_stream == VAR_5 )
            {
                return VAR_3;
            }

            if( FUNC_2( VAR_4 ) )
            {
                return VAR_2;
            }
        }
    }
}
