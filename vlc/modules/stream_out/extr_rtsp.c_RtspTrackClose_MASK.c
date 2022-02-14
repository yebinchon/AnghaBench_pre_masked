
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int setup_fd; int rtp_fd; int sout_id; } ;
typedef TYPE_1__ rtsp_strack_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static void FUNC_2( rtsp_strack_t *VAR_0 )
{
    if (VAR_0->setup_fd != -1)
    {
        if (VAR_0->rtp_fd != -1)
        {
            FUNC_1(VAR_0->sout_id, VAR_0->rtp_fd);
            VAR_0->rtp_fd = -1;
        }
        FUNC_0(VAR_0->setup_fd);
        VAR_0->setup_fd = -1;
    }
}
