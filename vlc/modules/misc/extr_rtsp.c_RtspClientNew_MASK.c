
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int i_throttle_users; int i_connections; } ;
typedef TYPE_1__ vod_sys_t ;
struct TYPE_10__ {TYPE_4__* p_vod; int rtsp; int i_rtsp; } ;
typedef TYPE_2__ vod_media_t ;
struct TYPE_11__ {char* psz_session; scalar_t__ es; } ;
typedef TYPE_3__ rtsp_client_t ;
struct TYPE_12__ {TYPE_1__* p_sys; } ;


 int FUNC_0 (int ,int ,TYPE_3__*) ;
 TYPE_3__* FUNC_1 (int,int) ;
 int FUNC_2 (TYPE_4__*,char*,char*,int ) ;

__attribute__((used)) static rtsp_client_t *FUNC_3( vod_media_t *VAR_0, char *VAR_1 )
{
    rtsp_client_t *VAR_2 = FUNC_1( 1, sizeof(rtsp_client_t) );

    if( !VAR_2 )
        return ((void*)0);
    VAR_2->es = 0;

    VAR_2->psz_session = VAR_1;
    FUNC_0( VAR_0->i_rtsp, VAR_0->rtsp, VAR_2 );

    vod_sys_t *VAR_3 = VAR_0->p_vod->p_sys;
    VAR_3->i_connections++;
    FUNC_2( VAR_0->p_vod, "new session: %s, connections: %d",
             VAR_1, VAR_3->i_throttle_users );

    return VAR_2;
}
