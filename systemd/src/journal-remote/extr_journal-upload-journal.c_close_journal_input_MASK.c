
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ timeout; int * journal; } ;
typedef TYPE_1__ Uploader ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;

void FUNC_3(Uploader *VAR_0) {
        FUNC_0(VAR_0);

        if (VAR_0->journal) {
                FUNC_1("Closing journal input.");

                FUNC_2(VAR_0->journal);
                VAR_0->journal = ((void*)0);
        }
        VAR_0->timeout = 0;
}
