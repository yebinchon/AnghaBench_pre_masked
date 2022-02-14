
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * snapmap; } ;
struct TYPE_5__ {int sizesnapmap; int * snapmapbuf; TYPE_1__ cur; int L; } ;
typedef TYPE_2__ jit_State ;
typedef int SnapEntry ;
typedef int MSize ;


 scalar_t__ FUNC_0 (int ,int *,int,int) ;

void FUNC_1(jit_State *VAR_0, MSize VAR_1)
{
  if (VAR_1 < 2*VAR_0->sizesnapmap)
    VAR_1 = 2*VAR_0->sizesnapmap;
  else if (VAR_1 < 64)
    VAR_1 = 64;
  VAR_0->snapmapbuf = (SnapEntry *)FUNC_0(VAR_0->L, VAR_0->snapmapbuf,
      VAR_0->sizesnapmap*sizeof(SnapEntry), VAR_1*sizeof(SnapEntry));
  VAR_0->cur.snapmap = VAR_0->snapmapbuf;
  VAR_0->sizesnapmap = VAR_1;
}
