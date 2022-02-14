
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_7__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int jit_State ;
struct TYPE_9__ {int i; } ;
struct TYPE_8__ {int info; } ;
typedef int TRef ;
typedef scalar_t__ MSize ;
typedef size_t IRType ;
typedef TYPE_1__ CType ;
typedef int CTState ;
typedef int CTSize ;
typedef int CRecMemList ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_7__* FUNC_0 (int ) ;
 int VAR_4 ;
 int FUNC_1 (int ,int ) ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_8 ;
 int FUNC_3 (int *,int *,scalar_t__,int ,int ) ;
 scalar_t__ FUNC_4 (int *,int *,TYPE_1__*) ;
 scalar_t__ FUNC_5 (int *,int,int,size_t) ;
 size_t FUNC_6 (int *,TYPE_1__*) ;
 unsigned int FUNC_7 (int) ;
 int * FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int) ;
 scalar_t__ FUNC_10 (int) ;
 TYPE_1__* FUNC_11 (int *,TYPE_1__*) ;
 int FUNC_12 (int ,int ,int ) ;
 int FUNC_13 (int *,int ,int ,int ,int ) ;
 int* VAR_9 ;
 int FUNC_14 (int) ;
 scalar_t__ FUNC_15 (int ) ;
 int FUNC_16 (int ) ;

__attribute__((used)) static void FUNC_17(jit_State *VAR_10, TRef VAR_11, TRef VAR_12, TRef VAR_13,
        CType *VAR_14)
{
  if (FUNC_15(VAR_13)) {
    CRecMemList VAR_15[VAR_1];
    MSize VAR_16 = 0;
    CTSize VAR_17 = 1, VAR_18 = (CTSize)FUNC_0(FUNC_16(VAR_13))->i;
    IRType VAR_19 = VAR_5;
    int VAR_20 = 0;
    if (VAR_18 == 0) return;
    if (VAR_18 > VAR_0) goto fallback;
    if (VAR_14) {
      CTState *VAR_21 = FUNC_8(FUNC_2(VAR_10));
      FUNC_14(FUNC_9(VAR_14->info) || FUNC_10(VAR_14->info));
      if (FUNC_9(VAR_14->info)) {
 CType *VAR_22 = FUNC_11(VAR_21, VAR_14);
 VAR_19 = FUNC_6(VAR_21, VAR_22);
 if (VAR_19 == VAR_5) goto rawcopy;
 VAR_17 = VAR_9[VAR_19];
 FUNC_14((VAR_18 & (VAR_17-1)) == 0);
      } else if ((VAR_14->info & VAR_2)) {
 VAR_17 = (1u << FUNC_7(VAR_14->info));
 goto rawcopy;
      } else {
 VAR_16 = FUNC_4(VAR_15, VAR_21, VAR_14);
 goto emitcopy;
      }
    } else {
    rawcopy:
      VAR_20 = 1;
      if (VAR_8 || VAR_17 >= VAR_3)
 VAR_17 = VAR_3;
    }
    VAR_16 = FUNC_5(VAR_15, VAR_18, VAR_17, VAR_19);
  emitcopy:
    if (VAR_16) {
      FUNC_3(VAR_10, VAR_15, VAR_16, VAR_11, VAR_12);
      if (VAR_20)
 FUNC_12(FUNC_1(VAR_7, VAR_6), 0, 0);
      return;
    }
  }
fallback:

  FUNC_13(VAR_10, VAR_4, VAR_11, VAR_12, VAR_13);
  FUNC_12(FUNC_1(VAR_7, VAR_6), 0, 0);
}
