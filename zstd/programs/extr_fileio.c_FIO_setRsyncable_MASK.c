
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ nbWorkers; int rsyncable; } ;
typedef TYPE_1__ FIO_prefs_t ;


 int FUNC_0 (int,char*) ;

void FUNC_1(FIO_prefs_t* const VAR_0, int VAR_1) {
    if ((VAR_1>0) && (VAR_0->nbWorkers==0))
        FUNC_0(1, "Rsyncable mode is not compatible with single thread mode \n");
    VAR_0->rsyncable = VAR_1;
}
