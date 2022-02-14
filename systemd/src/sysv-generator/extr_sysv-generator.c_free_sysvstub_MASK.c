
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int wanted_by; int wants; int after; int before; struct TYPE_4__* pid_file; struct TYPE_4__* description; struct TYPE_4__* path; struct TYPE_4__* name; } ;
typedef TYPE_1__ SysvStub ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(SysvStub *VAR_0) {
        if (!VAR_0)
                return;

        FUNC_0(VAR_0->name);
        FUNC_0(VAR_0->path);
        FUNC_0(VAR_0->description);
        FUNC_0(VAR_0->pid_file);
        FUNC_1(VAR_0->before);
        FUNC_1(VAR_0->after);
        FUNC_1(VAR_0->wants);
        FUNC_1(VAR_0->wanted_by);
        FUNC_0(VAR_0);
}
