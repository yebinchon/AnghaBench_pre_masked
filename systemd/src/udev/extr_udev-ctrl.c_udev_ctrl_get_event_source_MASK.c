
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct udev_ctrl {int * event_source; } ;
typedef int sd_event_source ;


 int FUNC_0 (struct udev_ctrl*) ;

sd_event_source *FUNC_1(struct udev_ctrl *VAR_0) {
        FUNC_0(VAR_0);

        return VAR_0->event_source;
}
