
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int description; } ;
typedef TYPE_1__ Unit ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (TYPE_1__*) ;

int FUNC_4(Unit *VAR_0, const char *VAR_1) {
        int VAR_2;

        FUNC_0(VAR_0);

        VAR_2 = FUNC_2(&VAR_0->description, FUNC_1(VAR_1));
        if (VAR_2 < 0)
                return VAR_2;
        if (VAR_2 > 0)
                FUNC_3(VAR_0);

        return 0;
}
