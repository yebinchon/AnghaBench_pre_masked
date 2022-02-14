
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
struct TYPE_9__ {int sem; int input_in_transit; } ;
typedef TYPE_2__ decoder_sys_t ;
typedef int block_t ;
struct TYPE_11__ {int * user_data; } ;
struct TYPE_10__ {scalar_t__ userdata; } ;
typedef TYPE_3__ MMAL_PORT_T ;
typedef TYPE_4__ MMAL_BUFFER_HEADER_T ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(MMAL_PORT_T *VAR_0, MMAL_BUFFER_HEADER_T *VAR_1)
{
    block_t *VAR_2 = (block_t *)VAR_1->user_data;
    decoder_t *VAR_3 = (decoder_t *)VAR_0->userdata;
    decoder_sys_t *VAR_4 = VAR_3->p_sys;
    VAR_1->user_data = ((void*)0);

    FUNC_2(VAR_1);
    if (VAR_2)
        FUNC_1(VAR_2);
    FUNC_0(&VAR_4->input_in_transit, 1);
    FUNC_3(&VAR_4->sem);
}
