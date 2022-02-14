
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int refcount; } ;
typedef TYPE_1__ Cache ;


 int FUNC_0 (TYPE_1__*) ;

void
FUNC_1(Cache *VAR_0)
{
 if (VAR_0 == ((void*)0))
  return;
 VAR_0->refcount--;
 FUNC_0(VAR_0);
}
