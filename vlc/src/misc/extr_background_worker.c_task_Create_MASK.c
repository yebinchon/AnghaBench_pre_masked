
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task {void* entity; int timeout; void* id; } ;
struct TYPE_2__ {int (* pf_hold ) (void*) ;int default_timeout; } ;
struct background_worker {TYPE_1__ conf; } ;


 int FUNC_0 (int) ;
 struct task* FUNC_1 (int) ;
 int FUNC_2 (void*) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static struct task *FUNC_4(struct background_worker *VAR_0, void *VAR_1,
                                void *VAR_2, int VAR_3)
{
    struct task *VAR_4 = FUNC_1(sizeof(*VAR_4));
    if (FUNC_3(!VAR_4))
        return ((void*)0);

    VAR_4->id = VAR_1;
    VAR_4->entity = VAR_2;
    VAR_4->timeout = VAR_3 < 0 ? VAR_0->conf.default_timeout : FUNC_0(VAR_3);
    VAR_0->conf.pf_hold(VAR_4->entity);
    return VAR_4;
}
