
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int ifindex; } ;
typedef TYPE_1__ Link ;
typedef int Hashmap ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int **,int *) ;
 scalar_t__ FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ,TYPE_1__*) ;

__attribute__((used)) static int FUNC_5(Link *VAR_0, Link *VAR_1, Hashmap **VAR_2) {
        int VAR_3;

        FUNC_1(VAR_0);
        FUNC_1(VAR_1);

        if (VAR_0 == VAR_1)
                return 0;

        if (FUNC_3(*VAR_2, FUNC_0(VAR_1->ifindex)))
                return 0;

        VAR_3 = FUNC_2(VAR_2, ((void*)0));
        if (VAR_3 < 0)
                return VAR_3;

        VAR_3 = FUNC_4(*VAR_2, FUNC_0(VAR_1->ifindex), VAR_1);
        if (VAR_3 < 0)
                return VAR_3;

        return 0;
}
