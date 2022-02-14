
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint16_t ;
typedef int VarIndex ;
struct TYPE_6__ {int nuv; int uvtmp; } ;
struct TYPE_5__ {int sizeuv; int uv; } ;
typedef TYPE_1__ GCproto ;
typedef TYPE_2__ FuncState ;


 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static void FUNC_2(FuncState *VAR_0, GCproto *VAR_1, uint16_t *VAR_2)
{
  FUNC_1(VAR_1->uv, VAR_2);
  VAR_1->sizeuv = VAR_0->nuv;
  FUNC_0(VAR_2, VAR_0->uvtmp, VAR_0->nuv*sizeof(VarIndex));
}
