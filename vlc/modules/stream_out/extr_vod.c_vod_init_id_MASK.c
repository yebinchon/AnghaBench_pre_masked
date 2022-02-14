
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int i_es; int rtsp; TYPE_3__** es; int * psz_mux; } ;
typedef TYPE_1__ vod_media_t ;
typedef int uint32_t ;
typedef int uint16_t ;
typedef int sout_stream_id_sys_t ;
struct TYPE_9__ {int fmtp; } ;
typedef TYPE_2__ rtp_format_t ;
struct TYPE_11__ {int * fmtp; } ;
struct TYPE_10__ {int es_id; int rtsp_id; TYPE_7__ rtp_fmt; } ;
typedef TYPE_3__ media_es_t ;


 int FUNC_0 (int ,char const*,int ,int *,int *,int *) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_2__*,TYPE_7__*,int) ;
 int FUNC_3 (int *) ;

int FUNC_4(vod_media_t *VAR_1, const char *VAR_2, int VAR_3,
                sout_stream_id_sys_t *VAR_4, rtp_format_t *VAR_5,
                uint32_t *VAR_6, uint16_t *VAR_7)
{
    media_es_t *VAR_8;

    if (VAR_1->psz_mux != ((void*)0))
    {
        FUNC_1(VAR_1->i_es == 1);
        VAR_8 = VAR_1->es[0];
    }
    else
    {
        VAR_8 = ((void*)0);

        for (int VAR_9 = 0; VAR_9 < VAR_1->i_es; VAR_9++)
        {
            if (VAR_1->es[VAR_9]->es_id == VAR_3)
            {
                VAR_8 = VAR_1->es[VAR_9];
                break;
            }
        }
        if (VAR_8 == ((void*)0))
            return VAR_0;
    }

    FUNC_2(VAR_5, &VAR_8->rtp_fmt, sizeof(*VAR_5));
    if (VAR_8->rtp_fmt.fmtp != ((void*)0))
        VAR_5->fmtp = FUNC_3(VAR_8->rtp_fmt.fmtp);

    return FUNC_0(VAR_1->rtsp, VAR_2, VAR_8->rtsp_id,
                           VAR_4, VAR_6, VAR_7);
}
