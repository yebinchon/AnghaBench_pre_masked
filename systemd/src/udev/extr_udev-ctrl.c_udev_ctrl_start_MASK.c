
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int udev_ctrl_handler_t ;
struct udev_ctrl {int event_source; int sock; int event; void* userdata; int callback; } ;


 int VAR_0 ;
 int FUNC_0 (struct udev_ctrl*) ;
 int FUNC_1 (int ,int *,int ,int ,int ,struct udev_ctrl*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct udev_ctrl*,int *) ;
 int FUNC_4 (struct udev_ctrl*) ;
 int VAR_1 ;

int FUNC_5(struct udev_ctrl *VAR_2, udev_ctrl_handler_t VAR_3, void *VAR_4) {
        int VAR_5;

        FUNC_0(VAR_2);

        if (!VAR_2->event) {
                VAR_5 = FUNC_3(VAR_2, ((void*)0));
                if (VAR_5 < 0)
                        return VAR_5;
        }

        VAR_5 = FUNC_4(VAR_2);
        if (VAR_5 < 0)
                return VAR_5;

        VAR_2->callback = VAR_3;
        VAR_2->userdata = VAR_4;

        VAR_5 = FUNC_1(VAR_2->event, &VAR_2->event_source, VAR_2->sock, VAR_0, VAR_1, VAR_2);
        if (VAR_5 < 0)
                return VAR_5;

        (void) FUNC_2(VAR_2->event_source, "udev-ctrl");

        return 0;
}
