
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint16_t ;
typedef int ssize_t ;
struct TYPE_10__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ demux_t ;
struct TYPE_11__ {int fd; int session; } ;
typedef TYPE_2__ demux_sys_t ;
struct TYPE_12__ {int i_buffer; int * p_buffer; } ;
typedef TYPE_3__ block_t ;


 int VAR_0 ;
 TYPE_3__* FUNC_0 (int ) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,int *,int,int ) ;
 int FUNC_5 (TYPE_1__*,int ) ;
 int FUNC_6 (TYPE_1__*,TYPE_3__*) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 () ;
 int FUNC_9 (int) ;
 int FUNC_10 () ;

void *FUNC_11 (void *VAR_1)
{

    demux_t *VAR_2 = VAR_1;
    demux_sys_t *VAR_3 = VAR_2->p_sys;
    int VAR_4 = VAR_3->fd;

    for (;;)
    {

        ssize_t VAR_5;

        uint16_t VAR_6;
        if (FUNC_4 (VAR_4, &VAR_6, 2, VAR_0) != 2)
            break;

        block_t *VAR_7 = FUNC_0 (FUNC_3 (VAR_6));
        if (FUNC_7(VAR_7 == ((void*)0)))
            break;

        FUNC_2 (VAR_7);
        VAR_5 = FUNC_4 (VAR_4, VAR_7->p_buffer, VAR_7->i_buffer, VAR_0);
        FUNC_8 ();

        if (VAR_5 != (ssize_t)VAR_7->i_buffer)
        {
            FUNC_1 (VAR_7);
            break;
        }

        int VAR_8 = FUNC_10 ();
        FUNC_6 (VAR_2, VAR_7);
        FUNC_5 (VAR_2, VAR_3->session);
        FUNC_9 (VAR_8);
    }



    return ((void*)0);
}
