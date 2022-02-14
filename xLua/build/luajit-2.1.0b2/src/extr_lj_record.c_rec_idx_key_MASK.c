
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;
typedef struct TYPE_20__ TYPE_11__ ;


typedef scalar_t__ lua_Number ;
struct TYPE_24__ {scalar_t__ irt; } ;
struct TYPE_21__ {scalar_t__ nins; } ;
struct TYPE_22__ {TYPE_4__ guardemit; TYPE_1__ cur; int L; } ;
typedef TYPE_2__ jit_State ;
typedef scalar_t__ int32_t ;
struct TYPE_25__ {scalar_t__ asize; scalar_t__ hmask; int node; } ;
struct TYPE_23__ {int tab; scalar_t__ oldv; int keyv; int key; int tabv; } ;
struct TYPE_20__ {int val; } ;
typedef int TRef ;
typedef TYPE_3__ RecordIndex ;
typedef int Node ;
typedef scalar_t__ MSize ;
typedef TYPE_4__ IRType1 ;
typedef scalar_t__ IRRef ;
typedef TYPE_5__ GCtab ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_5 (TYPE_2__*) ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (TYPE_2__*,scalar_t__) ;
 int FUNC_8 (TYPE_2__*,int ) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (TYPE_2__*,int ,scalar_t__) ;
 int FUNC_11 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_12 (int ,TYPE_5__*,int *) ;
 int FUNC_13 (TYPE_2__*,int ) ;
 int FUNC_14 (int ) ;
 TYPE_11__* FUNC_15 (int ) ;
 scalar_t__ FUNC_16 (int *) ;
 scalar_t__ FUNC_17 (int *) ;
 int FUNC_18 (TYPE_2__*,int ,int ,scalar_t__) ;
 TYPE_5__* FUNC_19 (int *) ;
 scalar_t__ FUNC_20 (int ) ;
 scalar_t__ FUNC_21 (int ) ;
 scalar_t__ FUNC_22 (int ) ;
 int FUNC_23 (int *) ;

__attribute__((used)) static TRef FUNC_24(jit_State *VAR_15, RecordIndex *VAR_16, IRRef *VAR_17,
   IRType1 *VAR_18)
{
  TRef VAR_19;
  GCtab *VAR_20 = FUNC_19(&VAR_16->tabv);
  VAR_16->oldv = FUNC_12(VAR_15->L, VAR_20, &VAR_16->keyv);
  *VAR_17 = 0;
  VAR_18->irt = 0;


  VAR_19 = VAR_16->key;
  if (FUNC_22(VAR_19)) {
    int32_t VAR_21 = FUNC_17(&VAR_16->keyv);
    if (!FUNC_23(&VAR_16->keyv) && FUNC_16(&VAR_16->keyv) != (lua_Number)VAR_21)
      VAR_21 = VAR_13;
    if ((MSize)VAR_21 < VAR_13) {
      TRef VAR_22 = FUNC_11(VAR_15, VAR_19);
      TRef VAR_23 = FUNC_6(FUNC_3(VAR_9), VAR_16->tab, VAR_2);
      if ((MSize)VAR_21 < VAR_20->asize) {
 TRef VAR_24;
 FUNC_18(VAR_15, VAR_23, VAR_22, VAR_20->asize);
 VAR_24 = FUNC_6(FUNC_0(VAR_9, VAR_5), VAR_16->tab, VAR_1);
 return FUNC_6(FUNC_0(VAR_6, VAR_5), VAR_24, VAR_22);
      } else {
 FUNC_6(FUNC_2(VAR_12), VAR_23, VAR_22);
 if (VAR_21 == 0 && FUNC_21(VAR_19))
   VAR_19 = FUNC_9(VAR_15);

      }
    } else if (!FUNC_21(VAR_19)) {



      if (VAR_20->asize == 0) {

 TRef VAR_25 = FUNC_6(FUNC_3(VAR_9), VAR_16->tab, VAR_2);
 FUNC_6(FUNC_2(VAR_8), VAR_25, FUNC_7(VAR_15, 0));
      } else {
 FUNC_13(VAR_15, VAR_14);
      }
    }
  }


  if (VAR_20->hmask == 0) {

    TRef VAR_26 = FUNC_6(FUNC_3(VAR_9), VAR_16->tab, VAR_3);
    FUNC_6(FUNC_2(VAR_8), VAR_26, FUNC_7(VAR_15, 0));
    return FUNC_8(VAR_15, FUNC_14(FUNC_5(VAR_15)));
  }
  if (FUNC_20(VAR_19))
    VAR_19 = FUNC_6(FUNC_4(VAR_7), VAR_19, VAR_0);
  if (FUNC_21(VAR_19)) {

    MSize VAR_27 = (MSize)((char *)VAR_16->oldv - (char *)&FUNC_15(VAR_20->node)[0].val);
    if (VAR_20->hmask > 0 && VAR_27 <= VAR_20->hmask*(MSize)sizeof(Node) &&
 VAR_27 <= 65535*(MSize)sizeof(Node)) {
      TRef VAR_28, VAR_29, VAR_30;
      *VAR_17 = VAR_15->cur.nins;
      *VAR_18 = VAR_15->guardemit;
      VAR_30 = FUNC_6(FUNC_3(VAR_9), VAR_16->tab, VAR_3);
      FUNC_6(FUNC_2(VAR_8), VAR_30, FUNC_7(VAR_15, (int32_t)VAR_20->hmask));
      VAR_28 = FUNC_6(FUNC_0(VAR_9, VAR_5), VAR_16->tab, VAR_4);
      VAR_29 = FUNC_10(VAR_15, VAR_19, VAR_27 / sizeof(Node));
      return FUNC_6(FUNC_1(VAR_11, VAR_5), VAR_28, VAR_29);
    }
  }

  return FUNC_6(FUNC_0(VAR_10, VAR_5), VAR_16->tab, VAR_19);
}
