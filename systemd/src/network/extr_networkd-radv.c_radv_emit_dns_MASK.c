
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int manager; } ;
typedef TYPE_1__ Link ;


 int FUNC_0 (TYPE_1__*,int,char*) ;
 TYPE_1__* FUNC_1 (int ,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,TYPE_1__*) ;

int FUNC_4(Link *VAR_0) {
        Link *VAR_1;
        int VAR_2;

        VAR_1 = FUNC_1(VAR_0->manager, VAR_0);

        VAR_2 = FUNC_2(VAR_0, VAR_1);
        if (VAR_2 < 0)
                FUNC_0(VAR_0, VAR_2, "Could not set RA DNS: %m");

        VAR_2 = FUNC_3(VAR_0, VAR_1);
        if (VAR_2 < 0)
                FUNC_0(VAR_0, VAR_2, "Could not set RA Domains: %m");

        return 0;
}
