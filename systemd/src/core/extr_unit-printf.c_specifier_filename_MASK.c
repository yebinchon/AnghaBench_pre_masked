
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int id; scalar_t__ instance; } ;
typedef TYPE_1__ Unit ;


 int FUNC_0 (TYPE_1__ const*) ;
 int FUNC_1 (scalar_t__,char**) ;
 int FUNC_2 (int ,char**) ;

__attribute__((used)) static int FUNC_3(char VAR_0, const void *VAR_1, const void *VAR_2, char **VAR_3) {
        const Unit *VAR_4 = VAR_2;

        FUNC_0(VAR_4);

        if (VAR_4->instance)
                return FUNC_1(VAR_4->instance, VAR_3);
        else
                return FUNC_2(VAR_4->id, VAR_3);
}
