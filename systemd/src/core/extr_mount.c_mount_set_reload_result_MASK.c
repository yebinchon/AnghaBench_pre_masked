
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ reload_result; } ;
typedef scalar_t__ MountResult ;
typedef TYPE_1__ Mount ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_1(Mount *VAR_1, MountResult VAR_2) {
        FUNC_0(VAR_1);


        if (VAR_1->reload_result != VAR_0)
                return;

        VAR_1->reload_result = VAR_2;
}
