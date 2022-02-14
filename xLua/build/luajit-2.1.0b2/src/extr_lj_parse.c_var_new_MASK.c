
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct TYPE_9__ {int name; } ;
struct TYPE_8__ {size_t nactvar; scalar_t__* varmap; int kt; } ;
struct TYPE_7__ {size_t vtop; size_t sizevstack; TYPE_4__* vstack; int L; TYPE_2__* fs; } ;
typedef size_t MSize ;
typedef TYPE_1__ LexState ;
typedef int GCstr ;
typedef TYPE_2__ FuncState ;
typedef size_t BCReg ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 uintptr_t VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_2__*,size_t,int ,char*) ;
 int FUNC_2 (TYPE_1__*,int ,int ,scalar_t__) ;
 int FUNC_3 (int ,TYPE_4__*,scalar_t__,scalar_t__,int ) ;
 int * FUNC_4 (int ,int *) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int ) ;

__attribute__((used)) static void FUNC_8(LexState *VAR_5, BCReg VAR_6, GCstr *VAR_7)
{
  FuncState *VAR_8 = VAR_5->fs;
  MSize VAR_9 = VAR_5->vtop;
  FUNC_1(VAR_8, VAR_8->nactvar+VAR_6, VAR_1, "local variables");
  if (FUNC_0(VAR_9 >= VAR_5->sizevstack)) {
    if (VAR_5->sizevstack >= VAR_2)
      FUNC_2(VAR_5, 0, VAR_0, VAR_2);
    FUNC_3(VAR_5->L, VAR_5->vstack, VAR_5->sizevstack, VAR_2, VAR_4);
  }
  FUNC_5((uintptr_t)VAR_7 < VAR_3 ||
      FUNC_4(VAR_8->kt, VAR_7) != ((void*)0));

  FUNC_7(VAR_5->vstack[VAR_9].name, FUNC_6(VAR_7));
  VAR_8->varmap[VAR_8->nactvar+VAR_6] = (uint16_t)VAR_9;
  VAR_5->vtop = VAR_9+1;
}
