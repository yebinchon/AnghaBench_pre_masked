
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_13__ {TYPE_3__* p_sys; } ;
typedef TYPE_2__ stream_t ;
struct TYPE_14__ {int nack_type; TYPE_1__* flow; int p_fifo; } ;
typedef TYPE_3__ stream_sys_t ;
struct TYPE_15__ {scalar_t__ i_buffer; } ;
typedef TYPE_4__ block_t ;
struct TYPE_12__ {int fd_nack; } ;



 TYPE_4__* FUNC_0 (int ) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_2__*,char*,int) ;
 int FUNC_3 (TYPE_2__*,int ,TYPE_4__*,int) ;
 int FUNC_4 (TYPE_2__*,int ,TYPE_4__*,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 () ;

__attribute__((used)) static void *FUNC_7(void *VAR_0)
{
    stream_t *VAR_1 = VAR_0;
    stream_sys_t *VAR_2 = VAR_1->p_sys;



    for (;;) {
        block_t *VAR_3 = FUNC_0(VAR_2->p_fifo);

        int VAR_4 = FUNC_6();


        uint16_t VAR_5 = (uint16_t)VAR_3->i_buffer/2;
        switch(VAR_2->nack_type) {
            case 128:
                FUNC_3(VAR_1, VAR_2->flow->fd_nack, VAR_3, VAR_5);
                break;

            default:
                FUNC_4(VAR_1, VAR_2->flow->fd_nack, VAR_3, VAR_5);
        }

        if (VAR_5 > 1)
            FUNC_2(VAR_1, "Sent %u NACKs !!!", VAR_5);
        FUNC_1(VAR_3);

        FUNC_5 (VAR_4);
    }

    return ((void*)0);
}
