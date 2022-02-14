
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int relid; TYPE_1__* reltarget; } ;
struct TYPE_4__ {int exprs; } ;
typedef TYPE_2__ RelOptInfo ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ,int,int ,int ) ;

__attribute__((used)) static void
FUNC_3(RelOptInfo *VAR_0)
{
 VAR_0->reltarget->exprs =
  FUNC_1(VAR_0->reltarget->exprs,
    FUNC_2(VAR_0->relid, 0, FUNC_0(VAR_0->relid, 0), -1, 0, 0));
}
