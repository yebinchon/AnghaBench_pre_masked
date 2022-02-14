
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int sout_stream_id_sys_t ;
struct TYPE_8__ {int lock; } ;
typedef TYPE_1__ rtsp_stream_t ;
struct TYPE_9__ {int setup_fd; int rtp_fd; int * sout_id; } ;
typedef TYPE_2__ rtsp_strack_t ;
struct TYPE_10__ {int trackc; TYPE_2__* trackv; } ;
typedef TYPE_3__ rtsp_session_t ;


 TYPE_3__* FUNC_0 (TYPE_1__*,char const*) ;
 int FUNC_1 (int,TYPE_2__*,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5( rtsp_stream_t *VAR_0, const char *VAR_1,
                      sout_stream_id_sys_t *VAR_2 )
{
    rtsp_session_t *VAR_3;

    FUNC_3(&VAR_0->lock);
    VAR_3 = FUNC_0(VAR_0, VAR_1);

    if (VAR_3 == ((void*)0))
        goto out;

    for (int VAR_4 = 0; VAR_4 < VAR_3->trackc; VAR_4++)
    {
        rtsp_strack_t *VAR_5 = VAR_3->trackv + VAR_4;
        if (VAR_5->sout_id == VAR_2)
        {
            if (VAR_5->setup_fd == -1)
            {



                FUNC_1(VAR_3->trackc, VAR_3->trackv, VAR_4);
                break;
            }

            if (VAR_5->rtp_fd != -1)
            {
                FUNC_2(VAR_5->sout_id, VAR_5->rtp_fd);
                VAR_5->rtp_fd = -1;
            }
            VAR_5->sout_id = ((void*)0);
            break;
        }
    }

out:
    FUNC_4(&VAR_0->lock);
}
