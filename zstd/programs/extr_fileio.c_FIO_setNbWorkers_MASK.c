
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nbWorkers; } ;
typedef TYPE_1__ FIO_prefs_t ;


 int FUNC_0 (int,char*) ;

void FUNC_1(FIO_prefs_t* const VAR_0, int VAR_1) {

    if (VAR_1 > 0) FUNC_0(2, "Note : multi-threading is disabled \n");

    VAR_0->nbWorkers = VAR_1;
}
