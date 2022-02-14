
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int vlc_tick_t ;
struct pollfd {int fd; int revents; int events; } ;
struct msghdr {int msg_iovlen; int msg_flags; struct iovec* msg_iov; } ;
struct iovec {int iov_len; int iov_base; } ;
typedef int ssize_t ;
struct TYPE_11__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ demux_t ;
struct TYPE_12__ {int fd; int session; } ;
typedef TYPE_2__ demux_sys_t ;
struct TYPE_13__ {int i_buffer; int i_flags; int p_buffer; } ;
typedef TYPE_3__ block_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_3__* FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*) ;
 int VAR_6 ;
 int FUNC_2 (TYPE_1__*,char*,int,int) ;
 int FUNC_3 (TYPE_1__*,char*,int ) ;
 int FUNC_4 (struct pollfd*,int,int ) ;
 int FUNC_5 (int,struct msghdr*,int const) ;
 int FUNC_6 (TYPE_1__*,int ,int *) ;
 int FUNC_7 (TYPE_1__*,TYPE_3__*) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int) ;
 int FUNC_10 (int) ;
 int FUNC_11 () ;
 int FUNC_12 (int ) ;

void *FUNC_13 (void *VAR_7)
{
    demux_t *VAR_8 = VAR_7;
    demux_sys_t *VAR_9 = VAR_8->p_sys;
    vlc_tick_t VAR_10 = VAR_5;
    int VAR_11 = VAR_9->fd;

    const int VAR_12 = VAR_2;




    struct iovec VAR_13 =
    {
        .iov_len = VAR_1,
    };
    struct msghdr VAR_14 =
    {
        .msg_iov = &VAR_13,
        .msg_iovlen = 1,
    };

    struct pollfd VAR_15[1];
    VAR_15[0].fd = VAR_11;
    VAR_15[0].events = VAR_4;

    for (;;)
    {
        int VAR_16 = FUNC_4 (VAR_15, 1, FUNC_8 (VAR_10));
        if (VAR_16 == -1)
            continue;

        int VAR_17 = FUNC_11 ();
        if (VAR_16 == 0)
            goto dequeue;

        if (VAR_15[0].revents)
        {
            VAR_16--;
            if (FUNC_9(VAR_15[0].revents & VAR_3))
                break;

            block_t *VAR_18 = FUNC_0 (VAR_13.iov_len);
            if (FUNC_9(VAR_18 == ((void*)0)))
            {
                if (VAR_13.iov_len == VAR_1)
                    break;
                VAR_13.iov_len = VAR_1;
                continue;
            }

            VAR_13.iov_base = VAR_18->p_buffer;
            VAR_14.msg_flags = VAR_12;

            ssize_t VAR_19 = FUNC_5 (VAR_11, &VAR_14, VAR_12);
            if (VAR_19 != -1)
            {
                if (VAR_14.msg_flags & VAR_12)
                {
                    FUNC_2(VAR_8, "%zd bytes packet truncated (MRU was %zu)",
                            VAR_19, VAR_13.iov_len);
                    VAR_18->i_flags |= VAR_0;
                    VAR_13.iov_len = VAR_19;
                }
                else
                    VAR_18->i_buffer = VAR_19;

                FUNC_7 (VAR_8, VAR_18);
            }
            else
            {
                FUNC_3 (VAR_8, "RTP network error: %s",
                          FUNC_12(VAR_6));
                FUNC_1 (VAR_18);
            }
        }

    dequeue:
        if (!FUNC_6 (VAR_8, VAR_9->session, &VAR_10))
            VAR_10 = VAR_5;
        FUNC_10 (VAR_17);
    }
    return ((void*)0);
}
