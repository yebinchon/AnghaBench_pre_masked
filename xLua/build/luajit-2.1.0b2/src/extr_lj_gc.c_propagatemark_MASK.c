
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_49__ TYPE_9__ ;
typedef struct TYPE_48__ TYPE_8__ ;
typedef struct TYPE_47__ TYPE_7__ ;
typedef struct TYPE_46__ TYPE_6__ ;
typedef struct TYPE_45__ TYPE_5__ ;
typedef struct TYPE_44__ TYPE_4__ ;
typedef struct TYPE_43__ TYPE_3__ ;
typedef struct TYPE_42__ TYPE_2__ ;
typedef struct TYPE_41__ TYPE_1__ ;
typedef struct TYPE_40__ TYPE_11__ ;
typedef struct TYPE_39__ TYPE_10__ ;


struct TYPE_45__ {int stacksize; int gclist; } ;
typedef TYPE_5__ lua_State ;
struct TYPE_44__ {int grayagain; int gray; } ;
struct TYPE_46__ {TYPE_4__ gc; } ;
typedef TYPE_6__ global_State ;
struct TYPE_49__ {size_t sizept; } ;
struct TYPE_48__ {int asize; int hmask; } ;
struct TYPE_47__ {int nins; int nk; int nsnap; int nsnapmap; } ;
struct TYPE_43__ {scalar_t__ nupvalues; } ;
struct TYPE_42__ {scalar_t__ nupvalues; } ;
struct TYPE_41__ {int gct; int gclist; } ;
struct TYPE_40__ {TYPE_3__ c; TYPE_2__ l; } ;
struct TYPE_39__ {TYPE_1__ gch; } ;
typedef int TValue ;
typedef int SnapShot ;
typedef int SnapEntry ;
typedef int Node ;
typedef int MSize ;
typedef int IRIns ;
typedef TYPE_7__ GCtrace ;
typedef TYPE_8__ GCtab ;
typedef TYPE_9__ GCproto ;
typedef TYPE_10__ GCobj ;
typedef TYPE_11__ GCfunc ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_10__*) ;
 int FUNC_2 (TYPE_6__*,TYPE_11__*) ;
 int FUNC_3 (TYPE_6__*,TYPE_9__*) ;
 scalar_t__ FUNC_4 (TYPE_6__*,TYPE_8__*) ;
 int FUNC_5 (TYPE_6__*,TYPE_5__*) ;
 int FUNC_6 (TYPE_6__*,TYPE_7__*) ;
 TYPE_11__* FUNC_7 (TYPE_10__*) ;
 TYPE_9__* FUNC_8 (TYPE_10__*) ;
 TYPE_8__* FUNC_9 (TYPE_10__*) ;
 TYPE_5__* FUNC_10 (TYPE_10__*) ;
 TYPE_7__* FUNC_11 (TYPE_10__*) ;
 TYPE_10__* FUNC_12 (int ) ;
 int FUNC_13 (TYPE_10__*) ;
 int FUNC_14 (TYPE_10__*) ;
 scalar_t__ FUNC_15 (TYPE_11__*) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ,TYPE_10__*) ;
 int FUNC_18 (int ,int ) ;
 size_t FUNC_19 (int ) ;
 size_t FUNC_20 (int ) ;

__attribute__((used)) static size_t FUNC_21(global_State *VAR_4)
{
  GCobj *VAR_5 = FUNC_12(VAR_4->gc.gray);
  int VAR_6 = VAR_5->gch.gct;
  FUNC_16(FUNC_14(VAR_5));
  FUNC_13(VAR_5);
  FUNC_18(VAR_4->gc.gray, VAR_5->gch.gclist);
  if (FUNC_0(VAR_6 == ~VAR_2)) {
    GCtab *VAR_7 = FUNC_9(VAR_5);
    if (FUNC_4(VAR_4, VAR_7) > 0)
      FUNC_1(VAR_5);
    return sizeof(GCtab) + sizeof(TValue) * VAR_7->asize +
      sizeof(Node) * (VAR_7->hmask + 1);
  } else if (FUNC_0(VAR_6 == ~VAR_0)) {
    GCfunc *VAR_8 = FUNC_7(VAR_5);
    FUNC_2(VAR_4, VAR_8);
    return FUNC_15(VAR_8) ? FUNC_20((MSize)VAR_8->l.nupvalues) :
      FUNC_19((MSize)VAR_8->c.nupvalues);
  } else if (FUNC_0(VAR_6 == ~VAR_1)) {
    GCproto *VAR_9 = FUNC_8(VAR_5);
    FUNC_3(VAR_4, VAR_9);
    return VAR_9->sizept;
  } else if (FUNC_0(VAR_6 == ~VAR_3)) {
    lua_State *VAR_10 = FUNC_10(VAR_5);
    FUNC_18(VAR_10->gclist, VAR_4->gc.grayagain);
    FUNC_17(VAR_4->gc.grayagain, VAR_5);
    FUNC_1(VAR_5);
    FUNC_5(VAR_4, VAR_10);
    return sizeof(lua_State) + sizeof(TValue) * VAR_10->stacksize;
  } else {






    FUNC_16(0);
    return 0;

  }
}
