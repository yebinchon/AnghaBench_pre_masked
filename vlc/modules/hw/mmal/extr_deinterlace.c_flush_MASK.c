
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int picture_t ;
struct TYPE_7__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ filter_t ;
struct TYPE_8__ {int started; int filtered_pictures; int sem; int output_in_transit; int input_in_transit; int input; int output; } ;
typedef TYPE_2__ filter_sys_t ;
struct TYPE_9__ {scalar_t__ user_data; } ;
typedef TYPE_3__ MMAL_BUFFER_HEADER_T ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int ) ;
 TYPE_3__* FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*,char*,...) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(filter_t *VAR_0)
{
    filter_sys_t *VAR_1 = VAR_0->p_sys;
    MMAL_BUFFER_HEADER_T *VAR_2;

    FUNC_4(VAR_0, "flush deinterlace filter");

    FUNC_4(VAR_0, "flush: flush ports (input: %d, output: %d in transit)",
            VAR_1->input_in_transit, VAR_1->output_in_transit);
    FUNC_2(VAR_1->output);
    FUNC_2(VAR_1->input);

    FUNC_4(VAR_0, "flush: wait for all buffers to be returned");
    while (FUNC_0(&VAR_1->input_in_transit) ||
            FUNC_0(&VAR_1->output_in_transit))
        FUNC_6(&VAR_1->sem);

    while ((VAR_2 = FUNC_3(VAR_1->filtered_pictures))) {
        picture_t *VAR_3 = (picture_t *)VAR_2->user_data;
        FUNC_4(VAR_0, "flush: release already filtered pic %p",
                (void *)VAR_3);
        FUNC_5(VAR_3);
    }
    FUNC_1(&VAR_1->started, 0);
    FUNC_4(VAR_0, "flush: done");
}
