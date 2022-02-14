
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ busexec_pid; } ;
typedef TYPE_1__ sd_bus ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static void FUNC_2(sd_bus *VAR_0) {
        if (FUNC_0(VAR_0->busexec_pid) > 0) {
                FUNC_1(VAR_0->busexec_pid);
                VAR_0->busexec_pid = 0;
        }
}
