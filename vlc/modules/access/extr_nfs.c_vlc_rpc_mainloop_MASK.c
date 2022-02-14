
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct rpc_context {int dummy; } ;
struct pollfd {scalar_t__ revents; int events; int fd; } ;
struct TYPE_8__ {TYPE_3__* p_sys; } ;
typedef TYPE_1__ stream_t ;
struct TYPE_9__ {int b_error; } ;
typedef TYPE_3__ access_sys_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__*,char*) ;
 int FUNC_1 (TYPE_1__*,char*) ;
 int FUNC_2 (struct rpc_context*) ;
 scalar_t__ FUNC_3 (struct rpc_context*,scalar_t__) ;
 int FUNC_4 (struct rpc_context*) ;
 int FUNC_5 (struct pollfd*,int,int) ;

__attribute__((used)) static int
FUNC_6(stream_t *VAR_2, struct rpc_context *VAR_3,
                 bool (*VAR_4)(stream_t *))
{
    access_sys_t *VAR_5 = VAR_2->p_sys;

    while (!VAR_5->b_error && !VAR_4(VAR_2))
    {
        struct pollfd VAR_6[1];
        int VAR_7;
        VAR_6[0].fd = FUNC_2(VAR_3);
        VAR_6[0].events = FUNC_4(VAR_3);

        if ((VAR_7 = FUNC_5(VAR_6, 1, -1)) < 0)
        {
            if (VAR_1 == VAR_0)
                FUNC_1(VAR_2, "vlc_poll_i11e interrupted");
            else
                FUNC_0(VAR_2, "vlc_poll_i11e failed");
            VAR_5->b_error = 1;
        }
        else if (VAR_7 > 0 && VAR_6[0].revents
             && FUNC_3(VAR_3, VAR_6[0].revents) < 0)
        {
            FUNC_0(VAR_2, "nfs_service failed");
            VAR_5->b_error = 1;
        }
    }
    return VAR_5->b_error ? -1 : 0;
}
