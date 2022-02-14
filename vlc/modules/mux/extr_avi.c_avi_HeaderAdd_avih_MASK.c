
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_8__ {TYPE_3__* p_sys; } ;
typedef TYPE_2__ sout_mux_t ;
struct TYPE_9__ {size_t i_stream_video; int i_streams; TYPE_4__* stream; } ;
typedef TYPE_3__ sout_mux_sys_t ;
typedef int bo_t ;
struct TYPE_10__ {scalar_t__ i_frames; int i_duration; int i_totalsize; TYPE_1__* p_bih; scalar_t__ f_fps; } ;
typedef TYPE_4__ avi_stream_t ;
struct TYPE_7__ {int biWidth; int biHeight; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (TYPE_2__*,char*) ;

__attribute__((used)) static int FUNC_4( sout_mux_t *VAR_3,
                               bo_t *VAR_4 )
{
    sout_mux_sys_t *VAR_5 = VAR_3->p_sys;
    avi_stream_t *VAR_6 = ((void*)0);
    int VAR_7;
    uint32_t VAR_8;
    int VAR_9;
    int VAR_10;
    FUNC_0( "avih" );

    if( VAR_5->i_stream_video >= 0 )
    {
        VAR_6 = &VAR_5->stream[VAR_5->i_stream_video];
        if( VAR_6->i_frames <= 0 )
        {

        }
    }

    if( VAR_6 )
    {
        VAR_8 =
            (uint32_t)( (float)1000000 /
                        (float)VAR_5->stream[VAR_5->i_stream_video].f_fps );
        VAR_10 = VAR_5->stream[VAR_5->i_stream_video].i_frames;
    }
    else
    {
        FUNC_3( VAR_3, "avi file without video track isn't a good idea..." );
        VAR_8 = 0;
        VAR_10 = 0;
    }

    for( VAR_7 = 0,VAR_9 = 0; VAR_7 < VAR_5->i_streams; VAR_7++ )
    {
        if( VAR_5->stream[VAR_7].i_duration > 0 )
        {
            VAR_9 +=
                VAR_5->stream[VAR_7].i_totalsize /
                VAR_5->stream[VAR_7].i_duration;
        }
    }

    FUNC_2( VAR_4, VAR_8 );
    FUNC_2( VAR_4, VAR_9 );
    FUNC_2( VAR_4, 0 );
    FUNC_2( VAR_4, VAR_2 |
                       VAR_0 |
                       VAR_1 );
    FUNC_2( VAR_4, VAR_10 );
    FUNC_2( VAR_4, 0 );
    FUNC_2( VAR_4, VAR_5->i_streams );
    FUNC_2( VAR_4, 1024 * 1024 );
    if( VAR_6 )
    {
        FUNC_2( VAR_4, VAR_6->p_bih->biWidth );
        FUNC_2( VAR_4, VAR_6->p_bih->biHeight );
    }
    else
    {
        FUNC_2( VAR_4, 0 );
        FUNC_2( VAR_4, 0 );
    }
    FUNC_2( VAR_4, 0 );
    FUNC_2( VAR_4, 0 );
    FUNC_2( VAR_4, 0 );
    FUNC_2( VAR_4, 0 );

    FUNC_1( 0 );
}
