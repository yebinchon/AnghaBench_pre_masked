
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_6__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ sout_stream_t ;
struct TYPE_7__ {int i_es; struct TYPE_7__* psz_destination; struct TYPE_7__* psz_vod_session; struct TYPE_7__* psz_sdp_file; struct TYPE_7__* psz_sdp; scalar_t__ p_httpd_host; scalar_t__ p_httpd_file; int lock_es; int lock_ts; int lock_sdp; int * rtsp; scalar_t__ packet; int p_grab; int * es; scalar_t__ p_mux; } ;
typedef TYPE_2__ sout_stream_sys_t ;


 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static void FUNC_11( vlc_object_t * VAR_0 )
{
    sout_stream_t *VAR_1 = (sout_stream_t*)VAR_0;
    sout_stream_sys_t *VAR_2 = VAR_1->p_sys;

    if( VAR_2->p_mux )
    {
        FUNC_2( VAR_2->i_es <= 1 );

        FUNC_8( VAR_2->p_mux );
        if ( VAR_2->i_es > 0 )
            FUNC_0( VAR_1, VAR_2->es[0] );
        FUNC_7( VAR_2->p_grab );

        if( VAR_2->packet )
        {
            FUNC_3( VAR_2->packet );
        }
    }

    if( VAR_2->rtsp != ((void*)0) )
        FUNC_1( VAR_2->rtsp );

    FUNC_10( &VAR_2->lock_sdp );
    FUNC_10( &VAR_2->lock_ts );
    FUNC_10( &VAR_2->lock_es );

    if( VAR_2->p_httpd_file )
        FUNC_5( VAR_2->p_httpd_file );

    if( VAR_2->p_httpd_host )
        FUNC_6( VAR_2->p_httpd_host );

    FUNC_4( VAR_2->psz_sdp );

    if( VAR_2->psz_sdp_file != ((void*)0) )
    {
        FUNC_9( VAR_2->psz_sdp_file );
        FUNC_4( VAR_2->psz_sdp_file );
    }
    FUNC_4( VAR_2->psz_vod_session );
    FUNC_4( VAR_2->psz_destination );
    FUNC_4( VAR_2 );
}
