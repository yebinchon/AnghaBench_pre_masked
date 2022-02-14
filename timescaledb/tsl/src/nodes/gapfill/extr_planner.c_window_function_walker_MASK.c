
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int * node; } ;
struct TYPE_7__ {int count; TYPE_1__ call; } ;
typedef TYPE_2__ gapfill_walker_context ;
typedef int Node ;


 scalar_t__ FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,int (*) (int *,TYPE_2__*),TYPE_2__*) ;

__attribute__((used)) static bool
FUNC_2(Node *VAR_1, gapfill_walker_context *VAR_2)
{
 if (VAR_1 == ((void*)0))
  return 0;

 if (FUNC_0(VAR_1, VAR_0))
 {
  VAR_2->call.node = VAR_1;
  VAR_2->count++;
 }

 return FUNC_1(VAR_1, FUNC_2, VAR_2);
}
