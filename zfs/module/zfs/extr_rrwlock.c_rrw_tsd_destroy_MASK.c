
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ rn_rrl; } ;
typedef TYPE_1__ rrw_node_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,void*,void*) ;

void
FUNC_1(void *VAR_1)
{
 rrw_node_t *VAR_2 = VAR_1;
 if (VAR_2 != ((void*)0)) {
  FUNC_0("thread %p terminating with rrw lock %p held",
      (void *)VAR_0, (void *)VAR_2->rn_rrl);
 }
}
