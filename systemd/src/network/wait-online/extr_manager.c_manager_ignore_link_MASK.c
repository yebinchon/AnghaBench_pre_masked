
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int flags; int ifname; int ignore; int required_for_online; scalar_t__ interfaces; } ;
typedef TYPE_1__ Manager ;
typedef TYPE_1__ Link ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static bool FUNC_3(Manager *VAR_1, Link *VAR_2) {
        FUNC_0(VAR_1);
        FUNC_0(VAR_2);


        if (VAR_2->flags & VAR_0)
                return 1;


        if (VAR_1->interfaces && !FUNC_1(VAR_1->interfaces, VAR_2->ifname))
                return 1;

        if (!VAR_2->required_for_online)
                return 1;


        return FUNC_2(VAR_1->ignore, VAR_2->ifname, 0);
}
