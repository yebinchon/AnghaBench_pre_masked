
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ i_bitrate; scalar_t__ i_cat; } ;
struct TYPE_9__ {int b_reinit; int i_pcr; TYPE_1__ fmt; int * idx; int * p_es; } ;
typedef TYPE_2__ logical_stream_t ;
struct TYPE_10__ {TYPE_4__* p_sys; } ;
typedef TYPE_3__ demux_t ;
struct TYPE_11__ {scalar_t__ i_bitrate; int i_streams; int b_partial_bitrate; scalar_t__ i_total_frames; TYPE_2__** pp_stream; } ;
typedef TYPE_4__ demux_sys_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_3__*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_3__*,char*) ;

__attribute__((used)) static int FUNC_2( demux_t *VAR_5 )
{
    demux_sys_t *VAR_6 = VAR_5->p_sys ;
    int VAR_7;



    if( FUNC_0( VAR_5 ) != VAR_3 )
    {
        FUNC_1( VAR_5, "couldn't find any ogg logical stream" );
        return VAR_2;
    }

    VAR_6->i_bitrate = 0;

    for( VAR_7 = 0 ; VAR_7 < VAR_6->i_streams; VAR_7++ )
    {
        logical_stream_t *VAR_8 = VAR_6->pp_stream[VAR_7];

        VAR_8->p_es = ((void*)0);


        VAR_8->idx=((void*)0);

        if ( VAR_8->fmt.i_bitrate == 0 &&
             ( VAR_8->fmt.i_cat == VAR_1 ||
               VAR_8->fmt.i_cat == VAR_0 ) )
            VAR_6->b_partial_bitrate = 1;
        else
            VAR_6->i_bitrate += VAR_8->fmt.i_bitrate;

        VAR_8->i_pcr = VAR_4;
        VAR_8->b_reinit = 0;
    }


    VAR_6->i_total_frames = 0;

    return VAR_3;
}
