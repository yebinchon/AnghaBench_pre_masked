
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ vod_t ;
struct TYPE_11__ {struct TYPE_11__* psz_rtsp_path; int p_fifo_cmd; int thread; } ;
typedef TYPE_2__ vod_sys_t ;
typedef int vlc_object_t ;
struct TYPE_12__ {scalar_t__ i_type; TYPE_2__* psz_arg; int p_media; } ;
typedef TYPE_3__ rtsp_cmd_t ;
typedef int cmd ;
struct TYPE_13__ {int p_buffer; } ;
typedef TYPE_4__ block_t ;


 int FUNC_0 (TYPE_1__*,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 TYPE_4__* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_3__*,int ,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int *) ;

void FUNC_9( vlc_object_t * VAR_1 )
{
    vod_t *VAR_2 = (vod_t *)VAR_1;
    vod_sys_t *VAR_3 = VAR_2->p_sys;


    FUNC_7( VAR_3->thread );
    FUNC_8( VAR_3->thread, ((void*)0) );

    while( FUNC_1( VAR_3->p_fifo_cmd ) > 0 )
    {
        rtsp_cmd_t VAR_4;
        block_t *VAR_5 = FUNC_2( VAR_3->p_fifo_cmd );
        FUNC_6( &VAR_4, VAR_5->p_buffer, sizeof(VAR_4) );
        FUNC_4( VAR_5 );
        if ( VAR_4.i_type == VAR_0 )
            FUNC_0(VAR_2, VAR_4.p_media);
        FUNC_5( VAR_4.psz_arg );
    }
    FUNC_3( VAR_3->p_fifo_cmd );

    FUNC_5( VAR_3->psz_rtsp_path );
    FUNC_5( VAR_3 );
}
