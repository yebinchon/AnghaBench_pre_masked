
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int sd_bus_error ;
struct TYPE_4__ {int flags; int ifname; } ;
typedef TYPE_1__ Link ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,int ,char*,int ) ;

__attribute__((used)) static int FUNC_2(Link *VAR_2, sd_bus_error *VAR_3) {
        FUNC_0(VAR_2);

        if (VAR_2->flags & VAR_1)
                return FUNC_1(VAR_3, VAR_0, "Link %s is loopback device.", VAR_2->ifname);

        return 0;
}
