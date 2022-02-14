
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_15__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ vod_t ;
struct TYPE_16__ {int media; int i_media; } ;
typedef TYPE_2__ vod_sys_t ;
struct TYPE_17__ {scalar_t__ i_rtsp; scalar_t__ i_es; int lock; TYPE_8__** es; struct TYPE_17__* psz_rtsp_control_v4; struct TYPE_17__* psz_rtsp_control_v6; struct TYPE_17__* psz_rtsp_path; TYPE_8__** rtsp; int p_rtsp_url; } ;
typedef TYPE_3__ vod_media_t ;
struct TYPE_18__ {int fmt; } ;


 int FUNC_0 (TYPE_1__*,TYPE_3__*,int *) ;
 int FUNC_1 (TYPE_3__*,TYPE_8__*) ;
 int FUNC_2 (scalar_t__,TYPE_8__**) ;
 int FUNC_3 (int ,int ,TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_1__*,char*,TYPE_3__*) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8( vod_t *VAR_0, vod_media_t *VAR_1 )
{
    vod_sys_t *VAR_2 = VAR_0->p_sys;

    FUNC_6( VAR_0, "deleting media: %s", VAR_1->psz_rtsp_path );

    FUNC_3( VAR_2->i_media, VAR_2->media, VAR_1 );

    FUNC_5( VAR_1->p_rtsp_url );

    while( VAR_1->i_rtsp > 0 )
        FUNC_1( VAR_1, VAR_1->rtsp[0] );
    FUNC_2( VAR_1->i_rtsp, VAR_1->rtsp );

    FUNC_4( VAR_1->psz_rtsp_path );
    FUNC_4( VAR_1->psz_rtsp_control_v6 );
    FUNC_4( VAR_1->psz_rtsp_control_v4 );

    while( VAR_1->i_es )
        FUNC_0( VAR_0, VAR_1, &VAR_1->es[0]->fmt );
    FUNC_2( VAR_1->i_es, VAR_1->es );

    FUNC_7( &VAR_1->lock );

    FUNC_4( VAR_1 );
}
