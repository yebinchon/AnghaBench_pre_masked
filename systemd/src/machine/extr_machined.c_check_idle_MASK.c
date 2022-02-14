
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int machines; scalar_t__ operations; } ;
typedef TYPE_1__ Manager ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,int) ;

__attribute__((used)) static bool FUNC_2(void *VAR_0) {
        Manager *VAR_1 = VAR_0;

        if (VAR_1->operations)
                return 0;

        FUNC_1(VAR_1, 1);

        return FUNC_0(VAR_1->machines);
}
