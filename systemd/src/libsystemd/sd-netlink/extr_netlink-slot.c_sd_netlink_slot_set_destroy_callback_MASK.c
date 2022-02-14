
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int destroy_callback; } ;
typedef TYPE_1__ sd_netlink_slot ;
typedef int sd_netlink_destroy_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ) ;

int FUNC_1(sd_netlink_slot *VAR_1, sd_netlink_destroy_t VAR_2) {
        FUNC_0(VAR_1, -VAR_0);

        VAR_1->destroy_callback = VAR_2;
        return 0;
}
