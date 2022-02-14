
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* user; int scope_job; } ;
struct TYPE_5__ {int service_job; } ;
typedef TYPE_2__ Session ;


 int FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static bool FUNC_1(Session *VAR_0) {
        FUNC_0(VAR_0);



        return !VAR_0->scope_job &&
                !VAR_0->user->service_job;
}
