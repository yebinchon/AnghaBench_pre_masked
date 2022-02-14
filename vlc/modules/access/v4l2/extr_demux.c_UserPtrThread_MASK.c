
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ userptr; } ;
struct v4l2_buffer {int length; TYPE_1__ m; int memory; int type; } ;
struct pollfd {int fd; int events; } ;
typedef int nfds_t ;
struct TYPE_12__ {int out; TYPE_3__* p_sys; } ;
typedef TYPE_2__ demux_t ;
struct TYPE_13__ {int fd; int es; int block_flags; int blocksize; } ;
typedef TYPE_3__ demux_sys_t ;
struct TYPE_14__ {void* p_buffer; int i_pts; int i_flags; int i_dts; int i_buffer; } ;
typedef TYPE_4__ block_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct v4l2_buffer*) ;
 int VAR_1 ;
 TYPE_4__* FUNC_1 (int ,int,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (TYPE_4__*) ;
 scalar_t__ VAR_5 ;
 int FUNC_6 (int ,int ,TYPE_4__*) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (TYPE_2__*,char*,int ) ;
 int FUNC_9 (struct pollfd*,int,int) ;
 scalar_t__ FUNC_10 (int,int ,struct v4l2_buffer*) ;
 int FUNC_11 () ;
 int FUNC_12 (int) ;
 int FUNC_13 () ;
 int FUNC_14 (scalar_t__) ;

__attribute__((used)) static void *FUNC_15 (void *VAR_6)
{
    demux_t *VAR_7 = VAR_6;
    demux_sys_t *VAR_8 = VAR_7->p_sys;
    int VAR_9 = VAR_8->fd;
    struct pollfd VAR_10[2];
    nfds_t VAR_11 = 1;

    VAR_10[0].fd = VAR_9;
    VAR_10[0].events = VAR_1;

    int VAR_12 = FUNC_13 ();
    for (;;)
    {
        struct v4l2_buffer VAR_13 = {
            .type = VAR_2,
            .memory = VAR_3,
        };
        block_t *VAR_14 = FUNC_1 (FUNC_2(VAR_7), VAR_9, VAR_8->blocksize);
        if (VAR_14 == ((void*)0))
            break;


        FUNC_12 (VAR_12);
        FUNC_5 (VAR_14);
        while (FUNC_9 (VAR_10, VAR_11, -1) == -1)
           if (VAR_5 != VAR_0)
               FUNC_8 (VAR_7, "poll error: %s", FUNC_14(VAR_5));
        FUNC_11 ();
        VAR_12 = FUNC_13 ();

        if (FUNC_10 (VAR_9, VAR_4, &VAR_13) < 0)
        {
            FUNC_8 (VAR_7, "cannot dequeue buffer: %s",
                     FUNC_14(VAR_5));
            FUNC_4 (VAR_14);
            continue;
        }

        FUNC_3 (VAR_14->p_buffer == (void *)VAR_13.m.userptr);
        VAR_14->i_buffer = VAR_13.length;
        VAR_14->i_pts = VAR_14->i_dts = FUNC_0 (&VAR_13);
        VAR_14->i_flags |= VAR_8->block_flags;
        FUNC_7(VAR_7->out, VAR_14->i_pts);
        FUNC_6 (VAR_7->out, VAR_8->es, VAR_14);
    }
    FUNC_12 (VAR_12);
    return ((void*)0);
}
