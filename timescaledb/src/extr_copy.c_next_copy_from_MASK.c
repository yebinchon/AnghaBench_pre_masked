
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int cstate; } ;
struct TYPE_5__ {TYPE_1__ fromctx; } ;
typedef int Oid ;
typedef int ExprContext ;
typedef int Datum ;
typedef TYPE_2__ CopyChunkState ;


 int FUNC_0 (int ,int *,int *,int*,int *) ;

__attribute__((used)) static bool
FUNC_1(CopyChunkState *VAR_0, ExprContext *VAR_1, Datum *VAR_2, bool *VAR_3,
      Oid *VAR_4)
{
 return FUNC_0(VAR_0->fromctx.cstate, VAR_1, VAR_2, VAR_3, VAR_4);
}
