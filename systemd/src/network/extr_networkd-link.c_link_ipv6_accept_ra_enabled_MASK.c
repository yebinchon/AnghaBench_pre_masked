
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int flags; TYPE_1__* network; } ;
struct TYPE_7__ {scalar_t__ ipv6_accept_ra; } ;
typedef TYPE_2__ Link ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 () ;

__attribute__((used)) static bool FUNC_4(Link *VAR_1) {
        FUNC_0(VAR_1);

        if (!FUNC_3())
                return 0;

        if (VAR_1->flags & VAR_0)
                return 0;

        if (!VAR_1->network)
                return 0;

        if (!FUNC_2(VAR_1))
                return 0;





        if (VAR_1->network->ipv6_accept_ra < 0)

                return !FUNC_1(VAR_1);
        else if (VAR_1->network->ipv6_accept_ra > 0)

                return 1;
        else

                return 0;
}
