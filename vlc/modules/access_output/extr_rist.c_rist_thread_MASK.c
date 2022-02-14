
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint64_t ;
struct pollfd {int fd; int events; int revents; } ;
typedef int ssize_t ;
struct TYPE_7__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ sout_access_out_t ;
struct TYPE_8__ {scalar_t__ last_rtcp_tx; TYPE_5__* flow; scalar_t__ b_ismulticast; } ;
typedef TYPE_2__ sout_access_out_sys_t ;
struct TYPE_9__ {int fd_rtcp; int fd_rtcp_m; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,char*,int,int) ;
 int FUNC_3 (struct pollfd*,int,int) ;
 int FUNC_4 (int,int *,int) ;
 int FUNC_5 (TYPE_1__*,TYPE_5__*,int *,int) ;
 int FUNC_6 (TYPE_1__*) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int FUNC_9 () ;
 scalar_t__ FUNC_10 () ;

__attribute__((used)) static void *FUNC_11(void *VAR_4)
{
    sout_access_out_t *VAR_5 = VAR_4;
    sout_access_out_sys_t *VAR_6 = VAR_5->p_sys;
    uint64_t VAR_7;
    uint8_t VAR_8[VAR_2];
    struct pollfd VAR_9[2];
    int VAR_10;
    ssize_t VAR_11;

    int VAR_12 = 1;
    VAR_9[0].fd = VAR_6->flow->fd_rtcp;
    VAR_9[0].events = VAR_0;
    if (VAR_6->b_ismulticast)
    {
        VAR_9[1].fd = VAR_6->flow->fd_rtcp_m;
        VAR_9[1].events = VAR_0;
        VAR_12++;
    }

    for (;;) {
        VAR_10 = FUNC_3(VAR_9, VAR_12, VAR_1 >> 1);
        int VAR_13 = FUNC_9();
        if (VAR_10 > 0)
        {
            if (VAR_9[0].revents & VAR_0)
            {
                VAR_11 = FUNC_4(VAR_6->flow->fd_rtcp, VAR_8, VAR_2);
                if (VAR_11 == VAR_2) {
                    FUNC_2(VAR_5, "Rist RTCP messsage is too big (%zd bytes) and was probably " "cut, please keep it under %d bytes", VAR_11, VAR_2);

                }
                if (FUNC_7(VAR_11 == -1)) {
                    FUNC_2(VAR_5, "socket %d error: %s\n", VAR_6->flow->fd_rtcp,
                        FUNC_1(VAR_3));
                }
                else {
                    FUNC_5(VAR_5, VAR_6->flow, VAR_8, VAR_11);
                }
            }
            if (VAR_6->b_ismulticast && (VAR_9[1].revents & VAR_0))
            {
                VAR_11 = FUNC_4(VAR_6->flow->fd_rtcp_m, VAR_8, VAR_2);
                if (VAR_11 == VAR_2) {
                    FUNC_2(VAR_5, "Rist RTCP messsage is too big (%zd bytes) and was " "probably cut, please keep it under %d bytes", VAR_11, VAR_2);

                }
                if (FUNC_7(VAR_11 == -1)) {
                    FUNC_2(VAR_5, "mcast socket %d error: %s\n", VAR_6->flow->fd_rtcp_m,
                        FUNC_1(VAR_3));
                }
                else {
                    FUNC_5(VAR_5, VAR_6->flow, VAR_8, VAR_11);
                }
            }
        }


        VAR_7 = FUNC_10();
        if ((VAR_7 - VAR_6->last_rtcp_tx) > FUNC_0(VAR_1))
        {
            FUNC_6(VAR_5);
            VAR_6->last_rtcp_tx = VAR_7;
        }
        FUNC_8 (VAR_13);
    }

    return ((void*)0);
}
