
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int type; } ;
typedef TYPE_1__ Item ;


 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(const Item *VAR_0, const Item *VAR_1) {



        if (FUNC_1(VAR_0->type) && !FUNC_1(VAR_1->type))
                return -1;
        if (!FUNC_1(VAR_0->type) && FUNC_1(VAR_1->type))
                return 1;

        return FUNC_0(VAR_0->type, VAR_1->type);
}
