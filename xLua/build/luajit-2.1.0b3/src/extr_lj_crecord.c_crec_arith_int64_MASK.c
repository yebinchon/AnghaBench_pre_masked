
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_8__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int postproc; } ;
typedef TYPE_1__ jit_State ;
struct TYPE_11__ {scalar_t__ i; } ;
struct TYPE_10__ {int info; int size; } ;
typedef scalar_t__ TRef ;
typedef int MSize ;
typedef scalar_t__ MMS ;
typedef scalar_t__ IRType ;
typedef scalar_t__ IROp ;
typedef int CTypeID ;
typedef TYPE_2__ CType ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_8__* FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (scalar_t__,scalar_t__) ;
 int FUNC_2 (scalar_t__,scalar_t__) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 int VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (scalar_t__,scalar_t__,scalar_t__,int ) ;
 scalar_t__ FUNC_5 (int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_6 (TYPE_1__*,int ) ;
 int FUNC_7 (TYPE_1__*,int ,scalar_t__,scalar_t__) ;
 int FUNC_8 (TYPE_1__*) ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 int FUNC_10 (scalar_t__) ;
 scalar_t__ FUNC_11 (scalar_t__) ;

__attribute__((used)) static TRef FUNC_12(jit_State *VAR_24, TRef *VAR_25, CType **VAR_26, MMS VAR_27)
{
  if (VAR_25[0] && VAR_25[1] && FUNC_3(VAR_26[0]->info) && FUNC_3(VAR_26[1]->info)) {
    IRType VAR_28;
    CTypeID VAR_29;
    TRef VAR_30;
    MSize VAR_31;
    IROp VAR_32;
    FUNC_8(VAR_24);
    if (((VAR_26[0]->info & VAR_1) && VAR_26[0]->size == 8) ||
 ((VAR_26[1]->info & VAR_1) && VAR_26[1]->size == 8)) {
      VAR_28 = VAR_12; VAR_29 = VAR_3;
    } else {
      VAR_28 = VAR_8; VAR_29 = VAR_2;
      if (VAR_27 < VAR_20 &&
   !((VAR_26[0]->info | VAR_26[1]->info) & VAR_0) &&
   VAR_26[0]->size == 4 && VAR_26[1]->size == 4) {
 if (!((VAR_26[0]->info ^ VAR_26[1]->info) & VAR_1) ||
     (FUNC_9(VAR_25[1]) && FUNC_0(FUNC_10(VAR_25[1]))->i >= 0)) {
   VAR_28 = (VAR_26[0]->info & VAR_1) ? VAR_11 : VAR_9;
   goto comp;
 } else if (FUNC_9(VAR_25[0]) && FUNC_0(FUNC_10(VAR_25[0]))->i >= 0) {
   VAR_28 = (VAR_26[1]->info & VAR_1) ? VAR_11 : VAR_9;
   goto comp;
 }
      }
    }
    for (VAR_31 = 0; VAR_31 < 2; VAR_31++) {
      IRType VAR_33 = FUNC_11(VAR_25[VAR_31]);
      if (VAR_33 == VAR_10 || VAR_33 == VAR_7)
 VAR_25[VAR_31] = FUNC_4(VAR_25[VAR_31], VAR_28, VAR_33, VAR_4);
      else if (!(VAR_33 == VAR_8 || VAR_33 == VAR_12))
 VAR_25[VAR_31] = FUNC_4(VAR_25[VAR_31], VAR_28, VAR_9,
    (VAR_26[VAR_31]->info & VAR_1) ? 0 : VAR_5);
    }
    if (VAR_27 < VAR_20) {
    comp:

      if (VAR_27 == VAR_21) {
 VAR_32 = VAR_15;
      } else {
 VAR_32 = VAR_27 == VAR_22 ? VAR_17 : VAR_16;
 if (VAR_28 == VAR_11 || VAR_28 == VAR_12)
   VAR_32 += (VAR_18-VAR_17);
      }
      FUNC_7(VAR_24, FUNC_2(VAR_32, VAR_28), VAR_25[0], VAR_25[1]);
      VAR_24->postproc = VAR_19;
      return VAR_23;
    } else {
      VAR_30 = FUNC_5(FUNC_1(VAR_27+(int)VAR_13-(int)VAR_20, VAR_28), VAR_25[0], VAR_25[1]);
    }
    return FUNC_5(FUNC_2(VAR_14, VAR_6), FUNC_6(VAR_24, VAR_29), VAR_30);
  }
  return 0;
}
