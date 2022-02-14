
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int mount_monitor; } ;
typedef TYPE_1__ Manager ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int ,int *,int *) ;

__attribute__((used)) static int FUNC_3(Manager *VAR_0) {
        bool VAR_1 = 0;
        int VAR_2;

        FUNC_0(VAR_0);







        do {
                VAR_2 = FUNC_2(VAR_0->mount_monitor, ((void*)0), ((void*)0));
                if (VAR_2 < 0)
                        return FUNC_1(VAR_2, "Failed to drain libmount events: %m");
                if (VAR_2 == 0)
                        VAR_1 = 1;
        } while (VAR_2 == 0);

        return VAR_1;
}
