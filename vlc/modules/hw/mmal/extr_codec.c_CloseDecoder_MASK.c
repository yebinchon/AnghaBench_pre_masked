
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ decoder_t ;
struct TYPE_9__ {int sem; TYPE_4__* component; scalar_t__ output_pool; scalar_t__ output_format; scalar_t__ input_pool; TYPE_3__* output; TYPE_3__* input; } ;
typedef TYPE_2__ decoder_sys_t ;
struct TYPE_11__ {scalar_t__ is_enabled; TYPE_3__* control; } ;
struct TYPE_10__ {scalar_t__ is_enabled; } ;
typedef int MMAL_BUFFER_HEADER_T ;


 int FUNC_0 () ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(decoder_t *VAR_0)
{
    decoder_sys_t *VAR_1 = VAR_0->p_sys;
    MMAL_BUFFER_HEADER_T *VAR_2;

    if (!VAR_1)
        return;

    if (VAR_1->component && VAR_1->component->control->is_enabled)
        FUNC_6(VAR_1->component->control);

    if (VAR_1->input && VAR_1->input->is_enabled)
        FUNC_6(VAR_1->input);

    if (VAR_1->output && VAR_1->output->is_enabled)
        FUNC_6(VAR_1->output);

    if (VAR_1->component && VAR_1->component->is_enabled)
        FUNC_2(VAR_1->component);

    if (VAR_1->input_pool)
        FUNC_5(VAR_1->input_pool);

    if (VAR_1->output_format)
        FUNC_4(VAR_1->output_format);

    if (VAR_1->output_pool)
        FUNC_5(VAR_1->output_pool);

    if (VAR_1->component)
        FUNC_3(VAR_1->component);

    FUNC_7(&VAR_1->sem);
    FUNC_1(VAR_1);

    FUNC_0();
}
