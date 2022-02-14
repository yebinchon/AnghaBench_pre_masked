
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* sys; } ;
typedef TYPE_1__ vout_display_t ;
struct TYPE_8__ {int buffer_mutex; int buffer_cond; int buffers_in_transit; } ;
typedef TYPE_2__ vout_display_sys_t ;
typedef int picture_t ;
struct TYPE_10__ {scalar_t__ user_data; } ;
struct TYPE_9__ {scalar_t__ userdata; } ;
typedef TYPE_3__ MMAL_PORT_T ;
typedef TYPE_4__ MMAL_BUFFER_HEADER_T ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(MMAL_PORT_T *VAR_0, MMAL_BUFFER_HEADER_T *VAR_1)
{
    vout_display_t *VAR_2 = (vout_display_t *)VAR_0->userdata;
    vout_display_sys_t *VAR_3 = VAR_2->sys;
    picture_t *VAR_4 = (picture_t *)VAR_1->user_data;

    if (VAR_4)
        FUNC_1(VAR_4);

    FUNC_3(&VAR_3->buffer_mutex);
    FUNC_0(&VAR_3->buffers_in_transit, 1);
    FUNC_2(&VAR_3->buffer_cond);
    FUNC_4(&VAR_3->buffer_mutex);
}
