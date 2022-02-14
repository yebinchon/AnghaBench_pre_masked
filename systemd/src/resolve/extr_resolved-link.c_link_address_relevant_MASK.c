
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int flags; scalar_t__ scope; } ;
typedef TYPE_1__ LinkAddress ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (TYPE_1__*) ;

bool FUNC_1(LinkAddress *VAR_4, bool VAR_5) {
        FUNC_0(VAR_4);

        if (VAR_4->flags & (VAR_0|VAR_1))
                return 0;

        if (VAR_4->scope >= (VAR_5 ? VAR_2 : VAR_3))
                return 0;

        return 1;
}
