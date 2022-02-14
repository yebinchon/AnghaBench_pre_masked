
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ main_pid; scalar_t__ main_pid_alien; scalar_t__ main_pid_known; } ;
typedef TYPE_1__ Service ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static int FUNC_2(Service *VAR_1) {
        FUNC_0(VAR_1);





        if (VAR_1->main_pid_known) {



                if (VAR_1->main_pid_alien && VAR_1->main_pid > 0)
                        return FUNC_1(VAR_1->main_pid);




                return VAR_1->main_pid > 0;
        }


        return -VAR_0;
}
