
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int picture_t ;
struct TYPE_10__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ filter_t ;
struct TYPE_11__ {int sem; int output_in_transit; int filtered_pictures; int started; } ;
typedef TYPE_2__ filter_sys_t ;
struct TYPE_13__ {scalar_t__ cmd; scalar_t__ length; scalar_t__ user_data; } ;
struct TYPE_12__ {scalar_t__ userdata; } ;
typedef TYPE_3__ MMAL_PORT_T ;
typedef TYPE_4__ MMAL_BUFFER_HEADER_T ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (int ,TYPE_4__*) ;
 int FUNC_4 (TYPE_1__*,char*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(MMAL_PORT_T *VAR_1, MMAL_BUFFER_HEADER_T *VAR_2)
{
    filter_t *VAR_3 = (filter_t *)VAR_1->userdata;
    filter_sys_t *VAR_4 = VAR_3->p_sys;
    picture_t *VAR_5;

    if (VAR_2->cmd == 0) {
        if (VAR_2->length > 0) {
            FUNC_1(&VAR_4->started, 1);
            FUNC_3(VAR_4->filtered_pictures, VAR_2);
            VAR_5 = (picture_t *)VAR_2->user_data;
        } else {
            VAR_5 = (picture_t *)VAR_2->user_data;
            FUNC_5(VAR_5);
        }

        FUNC_0(&VAR_4->output_in_transit, 1);
        FUNC_6(&VAR_4->sem);
    } else if (VAR_2->cmd == VAR_0) {
        FUNC_4(VAR_3, "MMAL_EVENT_FORMAT_CHANGED seen but not handled");
        FUNC_2(VAR_2);
    } else {
        FUNC_2(VAR_2);
    }
}
