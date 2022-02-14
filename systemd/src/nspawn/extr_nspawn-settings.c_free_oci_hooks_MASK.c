
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int env; int args; struct TYPE_4__* path; } ;
typedef TYPE_1__ OciHook ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(OciHook *VAR_0, size_t VAR_1) {
        size_t VAR_2;

        FUNC_0(VAR_0 || VAR_1 == 0);

        for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++) {
                FUNC_1(VAR_0[VAR_2].path);
                FUNC_2(VAR_0[VAR_2].args);
                FUNC_2(VAR_0[VAR_2].env);
        }

        FUNC_1(VAR_0);
}
