
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int picture_t ;
struct TYPE_10__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ filter_t ;
struct TYPE_11__ {int sem; TYPE_6__* component; scalar_t__ filtered_pictures; TYPE_5__* output; TYPE_5__* input; } ;
typedef TYPE_2__ filter_sys_t ;
struct TYPE_14__ {scalar_t__ is_enabled; TYPE_5__* control; } ;
struct TYPE_13__ {scalar_t__ is_enabled; } ;
struct TYPE_12__ {scalar_t__ user_data; } ;
typedef TYPE_3__ MMAL_BUFFER_HEADER_T ;


 int FUNC_0 () ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_6__*) ;
 int FUNC_3 (TYPE_6__*) ;
 int FUNC_4 (TYPE_5__*) ;
 int FUNC_5 (scalar_t__) ;
 TYPE_3__* FUNC_6 (scalar_t__) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(filter_t *VAR_0)
{
    filter_sys_t *VAR_1 = VAR_0->p_sys;
    MMAL_BUFFER_HEADER_T *VAR_2;

    if (!VAR_1)
        return;

    if (VAR_1->component && VAR_1->component->control->is_enabled)
        FUNC_4(VAR_1->component->control);

    if (VAR_1->input && VAR_1->input->is_enabled)
        FUNC_4(VAR_1->input);

    if (VAR_1->output && VAR_1->output->is_enabled)
        FUNC_4(VAR_1->output);

    if (VAR_1->component && VAR_1->component->is_enabled)
        FUNC_2(VAR_1->component);

    while ((VAR_2 = FUNC_6(VAR_1->filtered_pictures))) {
        picture_t *VAR_3 = (picture_t *)VAR_2->user_data;
        FUNC_7(VAR_3);
    }

    if (VAR_1->filtered_pictures)
        FUNC_5(VAR_1->filtered_pictures);

    if (VAR_1->component)
        FUNC_3(VAR_1->component);

    FUNC_8(&VAR_1->sem);
    FUNC_1(VAR_1);

    FUNC_0();
}
