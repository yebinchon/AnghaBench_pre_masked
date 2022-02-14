
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct pollfd {int fd; scalar_t__ revents; void* events; } ;
typedef int nfds_t ;
struct TYPE_9__ {int out; TYPE_2__* p_sys; } ;
typedef TYPE_1__ demux_t ;
struct TYPE_10__ {int fd; int * vbi; int es; int block_flags; int bufv; } ;
typedef TYPE_2__ demux_sys_t ;
struct TYPE_11__ {int i_pts; int i_flags; } ;
typedef TYPE_3__ block_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*,int *) ;
 TYPE_3__* FUNC_2 (int ,int,int ) ;
 void* VAR_1 ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (int ,int ,TYPE_3__*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (TYPE_1__*,char*,int ) ;
 int FUNC_7 (struct pollfd*,int,int) ;
 int FUNC_8 () ;
 int FUNC_9 (int) ;
 int FUNC_10 () ;
 int FUNC_11 (scalar_t__) ;

__attribute__((used)) static void *FUNC_12 (void *VAR_3)
{
    demux_t *VAR_4 = VAR_3;
    demux_sys_t *VAR_5 = VAR_4->p_sys;
    int VAR_6 = VAR_5->fd;
    struct pollfd VAR_7[2];
    nfds_t VAR_8 = 1;

    VAR_7[0].fd = VAR_6;
    VAR_7[0].events = VAR_1;
    for (;;)
    {

        if (FUNC_7 (VAR_7, VAR_8, -1) == -1)
        {
           if (VAR_2 != VAR_0)
               FUNC_6 (VAR_4, "poll error: %s", FUNC_11(VAR_2));
           continue;
        }

        if( VAR_7[0].revents )
        {
            int VAR_9 = FUNC_10 ();
            block_t *VAR_10 = FUNC_2 (FUNC_3(VAR_4), VAR_6, VAR_5->bufv);
            if (VAR_10 != ((void*)0))
            {
                VAR_10->i_flags |= VAR_5->block_flags;
                FUNC_5(VAR_4->out, VAR_10->i_pts);
                FUNC_4 (VAR_4->out, VAR_5->es, VAR_10);
            }
            FUNC_9 (VAR_9);
        }




    }

    FUNC_8 ();
}
