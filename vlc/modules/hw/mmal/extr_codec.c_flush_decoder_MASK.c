
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ decoder_t ;
struct TYPE_6__ {int sem; int input_in_transit; int output_in_transit; int input; int output; } ;
typedef TYPE_2__ decoder_sys_t ;
typedef int MMAL_STATUS_T ;
typedef int MMAL_BUFFER_HEADER_T ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(decoder_t *VAR_0)
{
    decoder_sys_t *VAR_1 = VAR_0->p_sys;
    MMAL_BUFFER_HEADER_T *VAR_2;
    MMAL_STATUS_T VAR_3;

    FUNC_2(VAR_0, "Flushing decoder ports...");
    FUNC_1(VAR_1->output);
    FUNC_1(VAR_1->input);

    while (FUNC_0(&VAR_1->output_in_transit) ||
           FUNC_0(&VAR_1->input_in_transit))
        FUNC_3(&VAR_1->sem);
}
