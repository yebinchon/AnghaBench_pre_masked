
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int vlc_tick_t ;
struct TYPE_13__ {scalar_t__ i_cat; } ;
struct TYPE_14__ {int i_data_start; int os; TYPE_1__ fmt; } ;
typedef TYPE_2__ logical_stream_t ;
typedef int int64_t ;
struct TYPE_15__ {TYPE_4__* p_sys; } ;
typedef TYPE_3__ demux_t ;
struct TYPE_16__ {int i_streams; int i_bitrate; int i_total_length; int i_input_position; } ;
typedef TYPE_4__ demux_sys_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*,TYPE_2__*,int,int,int) ;
 scalar_t__ FUNC_2 (TYPE_2__*,int,int*,int*) ;
 int FUNC_3 (TYPE_2__*,int,int*,int*) ;
 int FUNC_4 (TYPE_2__*,int) ;
 int VAR_1 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_3__*,int) ;

int FUNC_7( demux_t *VAR_2, logical_stream_t *VAR_3,
                                     vlc_tick_t VAR_4, bool VAR_5 )
{
    demux_sys_t *VAR_6 = VAR_2->p_sys;
    int64_t VAR_7 = -1;
    int64_t VAR_8 = -1;
    bool VAR_9 = 0;


    FUNC_3( VAR_3, VAR_4, &VAR_7, &VAR_8 );
    if ( VAR_7 != -1 ) VAR_9 = 1;


    if ( !VAR_9 && FUNC_2( VAR_3, VAR_4, &VAR_7, &VAR_8 ) )
    {
        VAR_9 = 1;
    }


    if ( !VAR_9 && VAR_3->fmt.i_cat == VAR_0 && VAR_6->i_streams == 1
         && VAR_6->i_bitrate && FUNC_4( VAR_3, 0xFF00FF00 ) == 0xFF00FF00 )
    {


        VAR_7 = VAR_1 + (VAR_4 - VAR_1) * VAR_6->i_bitrate / FUNC_0(8000000);
        VAR_9 = 1;
    }


    if ( !VAR_9 && VAR_5 )
    {
        VAR_7 = FUNC_1( VAR_2, VAR_3, VAR_4,
                                            VAR_3->i_data_start, VAR_6->i_total_length );
        VAR_9 = ( VAR_7 != -1 );
    }

    if ( !VAR_9 ) return -1;

    if ( VAR_7 < VAR_3->i_data_start || VAR_8 > VAR_6->i_total_length )
        return -1;


    VAR_6->i_input_position = VAR_7;
    FUNC_6( VAR_2, VAR_6->i_input_position );
    FUNC_5( &VAR_3->os );

    return VAR_7;
}
