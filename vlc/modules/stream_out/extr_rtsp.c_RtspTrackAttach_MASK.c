
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint32_t ;
typedef scalar_t__ uint16_t ;
typedef int sout_stream_id_sys_t ;
struct TYPE_9__ {int lock; } ;
typedef TYPE_1__ rtsp_stream_t ;
typedef int rtsp_stream_id_t ;
struct TYPE_10__ {int rtp_fd; int setup_fd; scalar_t__ seq_init; scalar_t__ ssrc; int * sout_id; int * id; } ;
typedef TYPE_2__ rtsp_strack_t ;
struct TYPE_11__ {int trackc; TYPE_2__* trackv; } ;
typedef TYPE_3__ rtsp_session_t ;


 TYPE_3__* FUNC_0 (TYPE_1__*,char const*) ;
 int FUNC_1 (int,TYPE_2__*,TYPE_2__) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int *,int,int,scalar_t__*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (scalar_t__*,int) ;

int FUNC_9( rtsp_stream_t *VAR_2, const char *VAR_3,
                     rtsp_stream_id_t *VAR_4, sout_stream_id_sys_t *VAR_5,
                     uint32_t *VAR_6, uint16_t *VAR_7 )
{
    int VAR_8 = VAR_0;
    rtsp_session_t *VAR_9;

    FUNC_6(&VAR_2->lock);
    VAR_9 = FUNC_0(VAR_2, VAR_3);

    if (VAR_9 == ((void*)0))
        goto out;

    rtsp_strack_t *VAR_10 = ((void*)0);
    for (int VAR_11 = 0; VAR_11 < VAR_9->trackc; VAR_11++)
    {
        if (VAR_9->trackv[VAR_11].id == VAR_4)
        {
            VAR_10 = VAR_9->trackv + VAR_11;
            break;
        }
    }

    if (VAR_10 != ((void*)0))
    {
        VAR_10->sout_id = VAR_5;
        VAR_10->rtp_fd = FUNC_3(VAR_10->setup_fd);
    }
    else
    {


        rtsp_strack_t VAR_12 = { .id = VAR_4, .sout_id = VAR_5,
                                .setup_fd = -1, .rtp_fd = -1 };
        FUNC_8 (&VAR_12.seq_init, sizeof (VAR_12.seq_init));
        FUNC_8 (&VAR_12.ssrc, sizeof (VAR_12.ssrc));

        FUNC_1(VAR_9->trackc, VAR_9->trackv, VAR_12);
        VAR_10 = VAR_9->trackv + VAR_9->trackc - 1;
    }

    *VAR_6 = FUNC_4(VAR_10->ssrc);
    *VAR_7 = VAR_10->seq_init;

    if (VAR_10->rtp_fd != -1)
    {
        uint16_t VAR_13;
        FUNC_5(VAR_10->sout_id, VAR_10->rtp_fd, 0, &VAR_13);



        FUNC_2(VAR_10->seq_init == VAR_13);
    }

    VAR_8 = VAR_1;
out:
    FUNC_7(&VAR_2->lock);
    return VAR_8;
}
