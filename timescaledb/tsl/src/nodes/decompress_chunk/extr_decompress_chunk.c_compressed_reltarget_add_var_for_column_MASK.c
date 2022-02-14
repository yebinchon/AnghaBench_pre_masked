
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int relid; TYPE_1__* reltarget; } ;
struct TYPE_4__ {int exprs; } ;
typedef TYPE_2__ RelOptInfo ;
typedef int Oid ;
typedef scalar_t__ AttrNumber ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ,char const*) ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,scalar_t__,int ,int,int ,int ) ;

__attribute__((used)) static void
FUNC_5(RelOptInfo *VAR_0, Oid VAR_1,
          const char *VAR_2)
{
 AttrNumber VAR_3 = FUNC_1(VAR_1, VAR_2);
 FUNC_0(VAR_3 > 0);
 VAR_0->reltarget->exprs = FUNC_3(VAR_0->reltarget->exprs,
              FUNC_4(VAR_0->relid,
                VAR_3,
                FUNC_2(VAR_0->relid, VAR_3),
                -1,
                0,
                0));
}
