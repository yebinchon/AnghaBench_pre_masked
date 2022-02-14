
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct view {int * pipe; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* read ) (struct view*,int *,int) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct view*,int *,int) ;

void
FUNC_3(struct view *VAR_0, bool VAR_1)
{
 if (!VAR_0->pipe)
  return;
 while (!VAR_0->ops->read(VAR_0, ((void*)0), VAR_1))
  if (!VAR_1)
   return;
 if (VAR_1)
  FUNC_1(VAR_0->pipe);
 FUNC_0(VAR_0->pipe);
 VAR_0->pipe = ((void*)0);
}
