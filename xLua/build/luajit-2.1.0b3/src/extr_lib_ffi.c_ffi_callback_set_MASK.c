
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int lua_State ;
typedef int int32_t ;
struct TYPE_11__ {size_t sizeid; scalar_t__* cbid; size_t topid; } ;
struct TYPE_14__ {TYPE_1__ cb; int * miscmap; } ;
struct TYPE_13__ {int size; int info; } ;
struct TYPE_12__ {int ctypeid; } ;
typedef int TValue ;
typedef size_t MSize ;
typedef int GCtab ;
typedef int GCfunc ;
typedef TYPE_2__ GCcdata ;
typedef TYPE_3__ CType ;
typedef TYPE_4__ CTState ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 TYPE_4__* FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ) ;
 TYPE_3__* FUNC_3 (TYPE_4__*,int ) ;
 TYPE_2__* FUNC_4 (int *,int) ;
 size_t FUNC_5 (TYPE_4__*,void*) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int *) ;
 int * FUNC_8 (int *,int *,int ) ;
 int FUNC_9 (int *,int *,int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int FUNC_11(lua_State *VAR_2, GCfunc *VAR_3)
{
  GCcdata *VAR_4 = FUNC_4(VAR_2, 1);
  CTState *VAR_5 = FUNC_1(VAR_2);
  CType *VAR_6 = FUNC_3(VAR_5, VAR_4->ctypeid);
  if (FUNC_2(VAR_6->info) && (VAR_0 || VAR_6->size == 8)) {
    MSize VAR_7 = FUNC_5(VAR_5, *(void **)FUNC_0(VAR_4));
    if (VAR_7 < VAR_5->cb.sizeid && VAR_5->cb.cbid[VAR_7] != 0) {
      GCtab *VAR_8 = VAR_5->miscmap;
      TValue *VAR_9 = FUNC_8(VAR_2, VAR_8, (int32_t)VAR_7);
      if (VAR_3) {
 FUNC_9(VAR_2, VAR_9, VAR_3);
 FUNC_7(VAR_2, VAR_8);
      } else {
 FUNC_10(VAR_9);
 VAR_5->cb.cbid[VAR_7] = 0;
 VAR_5->cb.topid = VAR_7 < VAR_5->cb.topid ? VAR_7 : VAR_5->cb.topid;
      }
      return 0;
    }
  }
  FUNC_6(VAR_2, VAR_1);
  return 0;
}
