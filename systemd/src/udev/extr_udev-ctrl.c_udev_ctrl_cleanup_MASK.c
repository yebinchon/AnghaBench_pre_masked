
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int un; } ;
struct udev_ctrl {TYPE_1__ saddr; scalar_t__ cleanup_socket; } ;


 int FUNC_0 (int *) ;

int FUNC_1(struct udev_ctrl *VAR_0) {
        if (!VAR_0)
                return 0;
        if (VAR_0->cleanup_socket)
                FUNC_0(&VAR_0->saddr.un);
        return 0;
}
