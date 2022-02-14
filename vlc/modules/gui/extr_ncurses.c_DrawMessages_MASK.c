
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int psz_module; } ;
typedef TYPE_2__ vlc_log_t ;
struct TYPE_9__ {TYPE_4__* p_sys; } ;
typedef TYPE_3__ intf_thread_t ;
struct TYPE_10__ {int i_msgs; scalar_t__ color; int msg_lock; TYPE_1__* msgs; } ;
typedef TYPE_4__ intf_sys_t ;
struct TYPE_7__ {int msg; scalar_t__ type; TYPE_2__* item; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_4__*,int ,char*,int ,int ) ;
 int FUNC_1 (scalar_t__,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(intf_thread_t *VAR_2)
{
    intf_sys_t *VAR_3 = VAR_2->p_sys;
    int VAR_4 = 0;

    FUNC_2(&VAR_3->msg_lock);
    int VAR_5 = VAR_3->i_msgs;
    for(;;) {
        vlc_log_t *VAR_6 = VAR_3->msgs[VAR_5].item;
        if (VAR_6) {
            if (VAR_3->color)
                FUNC_1(VAR_3->msgs[VAR_5].type + VAR_1, ((void*)0));
            FUNC_0(VAR_3, VAR_4++, "[%s] %s", VAR_6->psz_module, VAR_3->msgs[VAR_5].msg);
        }

        if (++VAR_5 == sizeof VAR_3->msgs / sizeof *VAR_3->msgs)
            VAR_5 = 0;

        if (VAR_5 == VAR_3->i_msgs)
            break;
    }

    FUNC_3(&VAR_3->msg_lock);
    if (VAR_3->color)
        FUNC_1(VAR_0, ((void*)0));

    return VAR_4;
}
