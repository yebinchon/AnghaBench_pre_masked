
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct udev_ctrl {int event; int sock; int event_source; } ;


 int FUNC_0 (struct udev_ctrl*) ;
 struct udev_ctrl* FUNC_1 (struct udev_ctrl*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct udev_ctrl*) ;

__attribute__((used)) static struct udev_ctrl *FUNC_6(struct udev_ctrl *VAR_0) {
        FUNC_0(VAR_0);

        FUNC_5(VAR_0);

        FUNC_3(VAR_0->event_source);
        FUNC_2(VAR_0->sock);

        FUNC_4(VAR_0->event);
        return FUNC_1(VAR_0);
}
