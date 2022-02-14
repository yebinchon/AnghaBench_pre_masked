
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


typedef scalar_t__ vlc_tick_t ;
struct pollfd {int fd; int events; } ;
struct TYPE_19__ {int msg_iovlen; struct iovec* msg_iov; } ;
struct mmsghdr {scalar_t__ msg_len; TYPE_1__ msg_hdr; } ;
struct iovec {int * iov_base; int iov_len; } ;
struct TYPE_20__ {TYPE_4__* p_sys; } ;
typedef TYPE_2__ stream_t ;
typedef scalar_t__ ssize_t ;
typedef int msgs ;
struct TYPE_21__ {scalar_t__ i_buffer; int * p_buffer; } ;
typedef TYPE_3__ block_t ;
struct TYPE_22__ {int udp_sock; scalar_t__ keepalive_interval; int woken; int fifo; int session_id; int cseq; int control; int tcp_sock; } ;
typedef TYPE_4__ access_sys_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 TYPE_3__* FUNC_0 (int ) ;
 int FUNC_1 (int ,TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 scalar_t__ FUNC_4 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_5 (struct mmsghdr*,int ,int) ;
 int FUNC_6 (TYPE_2__*,char*) ;
 int FUNC_7 (TYPE_2__*,char*) ;
 int FUNC_8 (TYPE_2__*,char*) ;
 int FUNC_9 (TYPE_2__*,int ,char*,int ,int ,int ) ;
 int FUNC_10 (struct pollfd*,int,int) ;
 scalar_t__ FUNC_11 (int,int *,int ,int ) ;
 int FUNC_12 (int,struct mmsghdr*,int,int ,int *) ;
 scalar_t__ FUNC_13 (TYPE_2__*,int *) ;
 int FUNC_14 (TYPE_3__**) ;
 scalar_t__ FUNC_15 (int ) ;
 int FUNC_16 () ;
 int FUNC_17 (int (*) (TYPE_3__**),TYPE_3__**) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (int ) ;
 scalar_t__ FUNC_21 (scalar_t__) ;
 scalar_t__ FUNC_22 () ;

__attribute__((used)) static void *FUNC_23(void *VAR_7) {
    stream_t *VAR_8 = VAR_7;
    access_sys_t *VAR_9 = VAR_8->p_sys;
    int VAR_10 = VAR_9->udp_sock;
    vlc_tick_t VAR_11 = FUNC_22();
    ssize_t VAR_12;
    vlc_tick_t VAR_13 = FUNC_22() + FUNC_21(VAR_9->keepalive_interval);
    struct pollfd VAR_14;

    VAR_14.fd = VAR_10;
    VAR_14.events = VAR_1;


    while (VAR_11 > FUNC_22() - VAR_2) {
        if (FUNC_10(&VAR_14, 1, 20) == -1)
            continue;

        block_t *VAR_15 = FUNC_0(VAR_4);
        if (VAR_15 == ((void*)0)) {
            FUNC_7(VAR_8, "Failed to allocate memory for input buffer");
            break;
        }

        FUNC_3(VAR_15);
        VAR_12 = FUNC_11(VAR_10, VAR_15->p_buffer, VAR_4, 0);
        FUNC_16();

        if (VAR_12 < VAR_3) {
            FUNC_2(VAR_15);
            continue;
        }

        if (FUNC_4(VAR_8, VAR_15)) {
            FUNC_2(VAR_15);
            continue;
        }
        VAR_11 = FUNC_22();
        VAR_15->p_buffer += VAR_3;
        VAR_15->i_buffer = VAR_12 - VAR_3;
        FUNC_1(VAR_9->fifo, VAR_15);


        if (VAR_9->keepalive_interval > 0 && FUNC_22() > VAR_13) {
            FUNC_9(VAR_8, VAR_9->tcp_sock,
                    "OPTIONS %s RTSP/1.0\r\n"
                    "CSeq: %d\r\n"
                    "Session: %s\r\n\r\n",
                    VAR_9->control, VAR_9->cseq++, VAR_9->session_id);
            if (FUNC_13(VAR_8, ((void*)0)) != VAR_5)
                FUNC_8(VAR_8, "Failed to keepalive RTSP session");

            VAR_13 = FUNC_22() + FUNC_21(VAR_9->keepalive_interval);
        }
    }




    FUNC_6(VAR_8, "timed out waiting for data...");
    FUNC_18(VAR_9->fifo);
    VAR_9->woken = 1;
    FUNC_19(VAR_9->fifo);
    FUNC_20(VAR_9->fifo);

    return ((void*)0);
}
