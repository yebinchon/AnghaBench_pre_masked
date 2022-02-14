
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {TYPE_4__* p_sys; } ;
typedef TYPE_3__ decoder_t ;
struct TYPE_11__ {TYPE_2__* output; int output_in_transit; TYPE_1__* output_pool; } ;
typedef TYPE_4__ decoder_sys_t ;
struct TYPE_9__ {int buffer_num; } ;
struct TYPE_8__ {int queue; int headers_num; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int FUNC_0 (int ,int ) ;
 unsigned int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_3__*,char*,int,int,unsigned int,int ) ;
 scalar_t__ FUNC_4 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_5(decoder_t *VAR_2)
{
    decoder_sys_t *VAR_3 = VAR_2->p_sys;

    unsigned VAR_4 = 0;
    int VAR_5 = 0;
    int VAR_6 = 0;
    int VAR_7;

    if (VAR_3->output_pool) {
        VAR_4 = FUNC_0(VAR_3->output_pool->headers_num,
                VAR_0);
        VAR_5 = FUNC_2(VAR_3->output_pool->queue);
    } else {
        VAR_4 = VAR_1;
        VAR_5 = VAR_1 - FUNC_1(&VAR_3->output_in_transit);
    }
    VAR_6 = VAR_4 - FUNC_1(&VAR_3->output_in_transit);

    if (VAR_6 > VAR_5)
        VAR_6 = VAR_5;


    FUNC_3(VAR_2, "Send %d buffers to output port (available: %d, "
                    "in_transit: %d, buffer_num: %d)",
                    VAR_6, VAR_5,
                    FUNC_1(&VAR_3->output_in_transit),
                    VAR_3->output->buffer_num);

    for (VAR_7 = 0; VAR_7 < VAR_6; ++VAR_7)
        if (FUNC_4(VAR_2) < 0)
            break;
}
