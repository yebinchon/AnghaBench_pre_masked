
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {TYPE_3__* p_sys; } ;
typedef TYPE_2__ vod_t ;
struct TYPE_12__ {int psz_rtsp_path; } ;
typedef TYPE_3__ vod_sys_t ;
struct TYPE_13__ {int i_es; int * rtsp; TYPE_5__** es; } ;
typedef TYPE_4__ vod_media_t ;
struct TYPE_10__ {int clock_rate; } ;
struct TYPE_14__ {TYPE_1__ rtp_fmt; int rtsp_id; } ;
typedef TYPE_5__ media_es_t ;


 int FUNC_0 (int *,int *,int ,int ,int) ;
 int * FUNC_1 (int ,TYPE_4__*,char*) ;
 int FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (char**,char*,int ,char const*) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static void FUNC_5( vod_t *VAR_0, vod_media_t *VAR_1,
                        const char *VAR_2 )
{
    vod_sys_t *VAR_3 = VAR_0->p_sys;
    char *VAR_4;

    if( FUNC_3( &VAR_4, "%d%s", VAR_3->psz_rtsp_path, VAR_2 ) < 0 )
        return;

    VAR_1->rtsp = FUNC_1(FUNC_2(VAR_0), VAR_1, VAR_4);
    FUNC_4( VAR_4 );

    if (VAR_1->rtsp == ((void*)0))
        return;

    for (int VAR_5 = 0; VAR_5 < VAR_1->i_es; VAR_5++)
    {
        media_es_t *VAR_6 = VAR_1->es[VAR_5];
        VAR_6->rtsp_id = FUNC_0(VAR_1->rtsp, ((void*)0), 0,
                                  VAR_6->rtp_fmt.clock_rate, -1);
    }
}
