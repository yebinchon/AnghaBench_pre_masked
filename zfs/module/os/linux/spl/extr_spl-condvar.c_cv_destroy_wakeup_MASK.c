
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int cv_event; int * cv_mutex; int cv_refs; int cv_waiters; } ;
typedef TYPE_1__ kcondvar_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int
FUNC_3(kcondvar_t *VAR_0)
{
 if (!FUNC_1(&VAR_0->cv_waiters) && !FUNC_1(&VAR_0->cv_refs)) {
  FUNC_0(VAR_0->cv_mutex == ((void*)0));
  FUNC_0(!FUNC_2(&VAR_0->cv_event));
  return (1);
 }

 return (0);
}
