
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_3__* p_sys; } ;
typedef TYPE_2__ filter_t ;
struct TYPE_9__ {unsigned int output_in_transit; TYPE_1__* output; int filtered_pictures; } ;
typedef TYPE_3__ filter_sys_t ;
struct TYPE_7__ {int buffer_num; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (int,int ) ;
 int FUNC_1 (unsigned int*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*,char*,int,int,unsigned int,int) ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_5(filter_t *VAR_1)
{
    filter_sys_t *VAR_2 = VAR_1->p_sys;

    unsigned VAR_3 = FUNC_0(2, VAR_0);
    int VAR_4 = VAR_2->output->buffer_num -
        FUNC_1(&VAR_2->output_in_transit) -
        FUNC_2(VAR_2->filtered_pictures);
    int VAR_5 = VAR_3 - VAR_2->output_in_transit;
    int VAR_6;

    if (VAR_5 > VAR_4)
        VAR_5 = VAR_4;


    FUNC_3(VAR_1, "Send %d buffers to output port (available: %d, in_transit: %d, buffer_num: %d)",
                    VAR_5, VAR_4, VAR_2->output_in_transit,
                    VAR_2->output->buffer_num);

    for (VAR_6 = 0; VAR_6 < VAR_5; ++VAR_6) {
        if (FUNC_4(VAR_1) < 0)
            break;
    }
}
