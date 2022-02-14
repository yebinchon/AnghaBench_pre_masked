
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void* have_processed; void* will_process; } ;
typedef TYPE_1__ InstallContext ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 void* FUNC_1 (void*,int ) ;

__attribute__((used)) static void FUNC_2(InstallContext *VAR_1) {
        FUNC_0(VAR_1);

        VAR_1->will_process = FUNC_1(VAR_1->will_process, VAR_0);
        VAR_1->have_processed = FUNC_1(VAR_1->have_processed, VAR_0);
}
