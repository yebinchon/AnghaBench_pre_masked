
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* description; } ;
typedef TYPE_1__ sd_netlink_slot ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__ const*,int ) ;

int FUNC_1(const sd_netlink_slot *VAR_1, const char **VAR_2) {
        FUNC_0(VAR_1, -VAR_0);

        if (VAR_2)
                *VAR_2 = VAR_1->description;

        return !!VAR_1->description;
}
