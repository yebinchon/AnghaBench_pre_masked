
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int vod_media_t ;
typedef scalar_t__ vlc_tick_t ;
struct TYPE_6__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ sout_stream_t ;
struct TYPE_7__ {scalar_t__ i_npt_zero; scalar_t__ i_pts_zero; int lock_ts; } ;
typedef TYPE_2__ sout_stream_sys_t ;
struct TYPE_8__ {TYPE_1__* p_stream; } ;
typedef TYPE_3__ sout_stream_id_sys_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int const*,char const*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 () ;

vlc_tick_t FUNC_4( const sout_stream_t *VAR_1, const sout_stream_id_sys_t *VAR_2,
                    const vod_media_t *VAR_3, const char *VAR_4,
                    vlc_tick_t *VAR_5 )
{
    if (VAR_5 != ((void*)0))
        *VAR_5 = 0;

    if (VAR_2 != ((void*)0))
        VAR_1 = VAR_2->p_stream;

    if (VAR_1 == ((void*)0))
        return FUNC_0(VAR_3, VAR_4);

    sout_stream_sys_t *VAR_6 = VAR_1->p_sys;
    vlc_tick_t VAR_7;
    FUNC_1( &VAR_6->lock_ts );
    VAR_7 = VAR_6->i_npt_zero;
    FUNC_2( &VAR_6->lock_ts );

    if( VAR_7 == VAR_0 )
        return VAR_6->i_pts_zero;

    vlc_tick_t VAR_8 = FUNC_3();
    if( VAR_8 < VAR_7 )
        return VAR_6->i_pts_zero;

    vlc_tick_t VAR_9 = VAR_8 - VAR_7;
    if (VAR_5 != ((void*)0))
        *VAR_5 = VAR_9;

    return VAR_6->i_pts_zero + VAR_9;
}
