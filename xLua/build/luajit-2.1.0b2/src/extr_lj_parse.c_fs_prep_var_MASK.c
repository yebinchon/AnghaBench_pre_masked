
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ endpc; scalar_t__ startpc; int name; } ;
typedef TYPE_1__ VarInfo ;
struct TYPE_13__ {size_t nuv; size_t* uvmap; int vbase; } ;
struct TYPE_12__ {size_t len; } ;
struct TYPE_11__ {int vtop; int sb; TYPE_1__* vstack; } ;
typedef size_t MSize ;
typedef TYPE_2__ LexState ;
typedef TYPE_3__ GCstr ;
typedef TYPE_4__ FuncState ;
typedef scalar_t__ BCPos ;


 uintptr_t VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 char* FUNC_1 (int *,size_t) ;
 int FUNC_2 (int *,char) ;
 int FUNC_3 (int *) ;
 char* FUNC_4 (char*,int ,size_t) ;
 char* FUNC_5 (char*,scalar_t__) ;
 size_t FUNC_6 (int *) ;
 int FUNC_7 (int *,char*) ;
 int FUNC_8 (TYPE_3__*) ;
 TYPE_3__* FUNC_9 (int ) ;

__attribute__((used)) static size_t FUNC_10(LexState *VAR_1, FuncState *VAR_2, size_t *VAR_3)
{
  VarInfo *VAR_4 =VAR_1->vstack, *VAR_5;
  MSize VAR_6, VAR_7;
  BCPos VAR_8;
  FUNC_3(&VAR_1->sb);

  for (VAR_6 = 0, VAR_7 = VAR_2->nuv; VAR_6 < VAR_7; VAR_6++) {
    GCstr *VAR_9 = FUNC_9(VAR_4[VAR_2->uvmap[VAR_6]].name);
    MSize VAR_10 = VAR_9->len+1;
    char *VAR_11 = FUNC_1(&VAR_1->sb, VAR_10);
    VAR_11 = FUNC_4(VAR_11, FUNC_8(VAR_9), VAR_10);
    FUNC_7(&VAR_1->sb, VAR_11);
  }
  *VAR_3 = FUNC_6(&VAR_1->sb);
  VAR_8 = 0;

  for (VAR_5 = VAR_4 + VAR_1->vtop, VAR_4 += VAR_2->vbase; VAR_4 < VAR_5; VAR_4++) {
    if (!FUNC_0(VAR_4)) {
      GCstr *VAR_12 = FUNC_9(VAR_4->name);
      BCPos VAR_13;
      char *VAR_14;
      if ((uintptr_t)VAR_12 < VAR_0) {
 VAR_14 = FUNC_1(&VAR_1->sb, 1 + 2*5);
 *VAR_14++ = (char)(uintptr_t)VAR_12;
      } else {
 MSize VAR_15 = VAR_12->len+1;
 VAR_14 = FUNC_1(&VAR_1->sb, VAR_15 + 2*5);
 VAR_14 = FUNC_4(VAR_14, FUNC_8(VAR_12), VAR_15);
      }
      VAR_13 = VAR_4->startpc;
      VAR_14 = FUNC_5(VAR_14, VAR_13-VAR_8);
      VAR_14 = FUNC_5(VAR_14, VAR_4->endpc-VAR_13);
      FUNC_7(&VAR_1->sb, VAR_14);
      VAR_8 = VAR_13;
    }
  }
  FUNC_2(&VAR_1->sb, '\0');
  return FUNC_6(&VAR_1->sb);
}
