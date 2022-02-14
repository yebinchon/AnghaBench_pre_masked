
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int ins; } ;
struct TYPE_7__ {int flags; int framesize; TYPE_3__* bcbase; } ;
struct TYPE_6__ {size_t sizebc; } ;
typedef size_t MSize ;
typedef TYPE_1__ GCproto ;
typedef TYPE_2__ FuncState ;
typedef TYPE_3__ BCInsLine ;
typedef int BCIns ;


 int FUNC_0 (int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_1(FuncState *VAR_3, GCproto *VAR_4, BCIns *VAR_5, MSize VAR_6)
{
  BCInsLine *VAR_7 = VAR_3->bcbase;
  MSize VAR_8;
  VAR_4->sizebc = VAR_6;
  VAR_5[0] = FUNC_0((VAR_3->flags & VAR_2) ? VAR_1 : VAR_0,
     VAR_3->framesize, 0);
  for (VAR_8 = 1; VAR_8 < VAR_6; VAR_8++)
    VAR_5[VAR_8] = VAR_7[VAR_8].ins;
}
