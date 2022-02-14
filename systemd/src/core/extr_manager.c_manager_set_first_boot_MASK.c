
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int first_boot; } ;
typedef TYPE_1__ Manager ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;

void FUNC_4(Manager *VAR_0, bool VAR_1) {
        FUNC_1(VAR_0);

        if (!FUNC_0(VAR_0))
                return;

        if (VAR_0->first_boot != (int) VAR_1) {
                if (VAR_1)
                        (void) FUNC_2("/run/systemd/first-boot");
                else
                        (void) FUNC_3("/run/systemd/first-boot");
        }

        VAR_0->first_boot = VAR_1;
}
