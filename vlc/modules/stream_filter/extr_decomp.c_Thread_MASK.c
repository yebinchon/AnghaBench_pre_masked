
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct iovec {unsigned char* iov_base; scalar_t__ iov_len; } ;
struct TYPE_5__ {int s; TYPE_2__* p_sys; } ;
typedef TYPE_1__ stream_t ;
struct TYPE_6__ {int write_fd; int lock; int wait; scalar_t__ paused; } ;
typedef TYPE_2__ stream_sys_t ;
typedef scalar_t__ ssize_t ;
typedef int sigset_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 unsigned char* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (unsigned char*) ;
 scalar_t__ VAR_12 ;
 int FUNC_1 (unsigned char*) ;
 unsigned char* FUNC_2 (int ) ;
 unsigned char* FUNC_3 (int *,int ,int,int,int,int ) ;
 int FUNC_4 (TYPE_1__*,char*) ;
 int FUNC_5 (TYPE_1__*,char*,int ) ;
 int FUNC_6 (unsigned char*,int ) ;
 int FUNC_7 (int ,int *,int *) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int) ;
 int FUNC_12 () ;
 int FUNC_13 (int (*) (unsigned char*),unsigned char*) ;
 int FUNC_14 (int) ;
 int FUNC_15 (int *,int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int) ;
 int FUNC_19 () ;
 scalar_t__ FUNC_20 (int ,unsigned char*,int ) ;
 int FUNC_21 (scalar_t__) ;
 scalar_t__ FUNC_22 (int,struct iovec*,int,int ) ;
 scalar_t__ FUNC_23 (int,unsigned char*,scalar_t__) ;

__attribute__((used)) static void *FUNC_24 (void *VAR_13)
{
    stream_t *VAR_14 = VAR_13;
    stream_sys_t *VAR_15 = VAR_14->p_sys;



    int VAR_16 = VAR_15->write_fd;
    bool VAR_17 = 0;
    sigset_t VAR_18;

    FUNC_9(&VAR_18);
    FUNC_8(&VAR_18, VAR_7);
    FUNC_7(VAR_8, &VAR_18, ((void*)0));

    do
    {
        ssize_t VAR_19;
        int VAR_20 = FUNC_19 ();







        unsigned char *VAR_21 = FUNC_2 (VAR_11);
        if (FUNC_11(VAR_21 == ((void*)0)))
            break;
        FUNC_13 (FUNC_1, VAR_21);


        FUNC_16 (&VAR_15->lock);
        while (VAR_15->paused)
            FUNC_15 (&VAR_15->wait, &VAR_15->lock);
        VAR_19 = FUNC_20 (VAR_14->s, VAR_21, VAR_11);
        FUNC_17 (&VAR_15->lock);

        FUNC_18 (VAR_20);
        VAR_17 = VAR_19 <= 0;

        for (ssize_t VAR_22 = 0, VAR_23; VAR_22 < VAR_19; VAR_22 += VAR_23)
        {
            VAR_23 = FUNC_23 (VAR_16, VAR_21 + VAR_22, VAR_19 - VAR_22);
            if (VAR_23 <= 0)
            {
                if (VAR_23 == 0)
                    VAR_12 = VAR_1;
                FUNC_5 (VAR_14, "cannot write data: %s",
                         FUNC_21(VAR_12));
                VAR_17 = 1;
                break;
            }
        }
        FUNC_12 ();



        FUNC_1 (VAR_21);

    }
    while (!VAR_17);

    FUNC_4 (VAR_14, "compressed stream at EOF");

    VAR_15->write_fd = -1;
    FUNC_14 (VAR_16);
    return ((void*)0);
}
