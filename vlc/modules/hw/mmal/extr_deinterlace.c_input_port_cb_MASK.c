
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int picture_t ;
struct TYPE_9__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ filter_t ;
struct TYPE_10__ {int sem; int input_in_transit; } ;
typedef TYPE_2__ filter_sys_t ;
struct TYPE_12__ {scalar_t__ user_data; } ;
struct TYPE_11__ {scalar_t__ userdata; } ;
typedef TYPE_3__ MMAL_PORT_T ;
typedef TYPE_4__ MMAL_BUFFER_HEADER_T ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(MMAL_PORT_T *VAR_0, MMAL_BUFFER_HEADER_T *VAR_1)
{
    picture_t *VAR_2 = (picture_t *)VAR_1->user_data;
    filter_t *VAR_3 = (filter_t *)VAR_0->userdata;
    filter_sys_t *VAR_4 = VAR_3->p_sys;

    if (VAR_2) {
        FUNC_3(VAR_2);
    } else {
        FUNC_2(VAR_3, "Got buffer without picture on input port - OOOPS");
        FUNC_1(VAR_1);
    }

    FUNC_0(&VAR_4->input_in_transit, 1);
    FUNC_4(&VAR_4->sem);
}
