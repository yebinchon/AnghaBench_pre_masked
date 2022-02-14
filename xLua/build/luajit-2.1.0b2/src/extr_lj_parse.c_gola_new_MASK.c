
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef void* uint8_t ;
struct TYPE_8__ {void* info; void* slot; int startpc; int name; } ;
struct TYPE_7__ {scalar_t__ nactvar; int kt; } ;
struct TYPE_6__ {size_t vtop; size_t sizevstack; TYPE_3__* vstack; int L; TYPE_2__* fs; } ;
typedef size_t MSize ;
typedef TYPE_1__ LexState ;
typedef int GCstr ;
typedef TYPE_2__ FuncState ;
typedef int BCPos ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int * VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_1__*,int ,int ,scalar_t__) ;
 int FUNC_2 (int ,TYPE_3__*,scalar_t__,scalar_t__,int ) ;
 int * FUNC_3 (int ,int *) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static MSize FUNC_7(LexState *VAR_4, GCstr *VAR_5, uint8_t VAR_6, BCPos VAR_7)
{
  FuncState *VAR_8 = VAR_4->fs;
  MSize VAR_9 = VAR_4->vtop;
  if (FUNC_0(VAR_9 >= VAR_4->sizevstack)) {
    if (VAR_4->sizevstack >= VAR_1)
      FUNC_1(VAR_4, 0, VAR_0, VAR_1);
    FUNC_2(VAR_4->L, VAR_4->vstack, VAR_4->sizevstack, VAR_1, VAR_3);
  }
  FUNC_4(VAR_5 == VAR_2 || FUNC_3(VAR_8->kt, VAR_5) != ((void*)0));

  FUNC_6(VAR_4->vstack[VAR_9].name, FUNC_5(VAR_5));
  VAR_4->vstack[VAR_9].startpc = VAR_7;
  VAR_4->vstack[VAR_9].slot = (uint8_t)VAR_8->nactvar;
  VAR_4->vstack[VAR_9].info = VAR_6;
  VAR_4->vtop = VAR_9+1;
  return VAR_9;
}
