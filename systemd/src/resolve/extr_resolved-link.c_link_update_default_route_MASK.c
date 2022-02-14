
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int default_route; int ifindex; } ;
typedef TYPE_1__ Link ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(Link *VAR_1) {
        int VAR_2;

        FUNC_0(VAR_1);

        VAR_2 = FUNC_1(VAR_1->ifindex);
        if (VAR_2 == -VAR_0) {
                VAR_2 = 0;
                goto clear;
        }
        if (VAR_2 < 0)
                goto clear;

        VAR_1->default_route = VAR_2 > 0;
        return 0;

clear:
        VAR_1->default_route = -1;
        return VAR_2;
}
