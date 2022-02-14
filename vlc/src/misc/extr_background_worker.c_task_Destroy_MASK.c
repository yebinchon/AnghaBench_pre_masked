
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task {int entity; } ;
struct TYPE_2__ {int (* pf_release ) (int ) ;} ;
struct background_worker {TYPE_1__ conf; } ;


 int FUNC_0 (struct task*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct background_worker *VAR_0, struct task *VAR_1)
{
    VAR_0->conf.pf_release(VAR_1->entity);
    FUNC_0(VAR_1);
}
