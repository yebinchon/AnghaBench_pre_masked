
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct udev_ctrl {int sock_connect; int event_source_connect; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct udev_ctrl *VAR_0) {
        if (!VAR_0)
                return;

        VAR_0->event_source_connect = FUNC_1(VAR_0->event_source_connect);
        VAR_0->sock_connect = FUNC_0(VAR_0->sock_connect);
}
