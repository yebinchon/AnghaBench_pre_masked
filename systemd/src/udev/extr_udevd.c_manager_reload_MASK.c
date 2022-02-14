
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int rules; } ;
typedef TYPE_1__ Manager ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (int,char*,int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(Manager *VAR_1) {

        FUNC_0(VAR_1);

        FUNC_2(0,
                  "RELOADING=1\n"
                  "STATUS=Flushing configuration...");

        FUNC_1(VAR_1);
        VAR_1->rules = FUNC_5(VAR_1->rules);
        FUNC_4();

        FUNC_3(0,
                   "READY=1\n"
                   "STATUS=Processing with %u children at max", VAR_0);
}
