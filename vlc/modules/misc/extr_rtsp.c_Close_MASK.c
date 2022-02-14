
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ vod_t ;
struct TYPE_13__ {scalar_t__ i_media; struct TYPE_13__* psz_raw_mux; struct TYPE_13__* psz_path; int media; int p_rtsp_host; int p_fifo_cmd; int thread; } ;
typedef TYPE_2__ vod_sys_t ;
typedef int vlc_object_t ;
struct TYPE_14__ {scalar_t__ i_type; TYPE_2__* psz_arg; TYPE_2__* psz_session; int p_media; } ;
typedef TYPE_3__ rtsp_cmd_t ;
typedef int cmd ;
struct TYPE_15__ {int p_buffer; } ;
typedef TYPE_4__ block_t ;


 int FUNC_0 (TYPE_1__*,int ,int *,int *,int ,double,int *) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (scalar_t__,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 TYPE_4__* FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (TYPE_3__*,int ,int) ;
 int FUNC_10 (TYPE_1__*,char*,scalar_t__) ;
 int FUNC_11 (int *,char*) ;
 int FUNC_12 (int ,int *) ;

__attribute__((used)) static void FUNC_13( vlc_object_t * VAR_2 )
{
    vod_t *VAR_3 = (vod_t *)VAR_2;
    vod_sys_t *VAR_4 = VAR_3->p_sys;


    FUNC_0( VAR_3, VAR_1, ((void*)0), ((void*)0), 0, 0.0, ((void*)0) );
    FUNC_12( VAR_4->thread, ((void*)0) );

    while( FUNC_3( VAR_4->p_fifo_cmd ) > 0 )
    {
        rtsp_cmd_t VAR_5;
        block_t *VAR_6 = FUNC_4( VAR_4->p_fifo_cmd );
        FUNC_9( &VAR_5, VAR_6->p_buffer, sizeof(VAR_5) );
        FUNC_6( VAR_6 );
        if ( VAR_5.i_type == VAR_0 )
            FUNC_1(VAR_3, VAR_5.p_media);
        FUNC_7( VAR_5.psz_session );
        FUNC_7( VAR_5.psz_arg );
    }
    FUNC_5( VAR_4->p_fifo_cmd );

    FUNC_8( VAR_4->p_rtsp_host );
    FUNC_11( VAR_2, "rtsp-session-timeout" );
    FUNC_11( VAR_2, "rtsp-throttle-users" );
    FUNC_11( VAR_2, "rtsp-raw-mux" );


    if( VAR_4->i_media > 0 )
        FUNC_10( VAR_3, "rtsp vod leaking %d medias", VAR_4->i_media );
    FUNC_2( VAR_4->i_media, VAR_4->media );

    FUNC_7( VAR_4->psz_path );
    FUNC_7( VAR_4->psz_raw_mux );
    FUNC_7( VAR_4 );
}
