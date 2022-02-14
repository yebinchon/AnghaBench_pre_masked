
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int needsnap; int * base; int postproc; } ;
typedef TYPE_1__ jit_State ;
typedef int int32_t ;
struct TYPE_10__ {scalar_t__ data; scalar_t__ nres; int * argv; } ;
typedef int TRef ;
typedef TYPE_2__ RecordFFData ;
typedef scalar_t__ IRType ;
typedef int CType ;
typedef int CTState ;
typedef int CTSize ;
typedef int CTInfo ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_4 (TYPE_1__*,int *,int ,int ,int *) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int * FUNC_8 (int ) ;
 int * FUNC_9 (int *,int ) ;
 int FUNC_10 (int ,int ,int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (TYPE_1__*,int) ;
 int FUNC_13 (TYPE_1__*,int ,int ,int ) ;
 int FUNC_14 (int) ;

__attribute__((used)) static void FUNC_15(jit_State *VAR_17, RecordFFData *VAR_18, TRef VAR_19, CTInfo VAR_20)
{
  IRType VAR_21 = VAR_5 + 2*FUNC_11(FUNC_6(VAR_20)) + ((VAR_20&VAR_1)?1:0);
  TRef VAR_22 = FUNC_10(FUNC_0(VAR_13, VAR_21), VAR_19, 0);
  CTSize VAR_23 = FUNC_7(VAR_20), VAR_24 = FUNC_5(VAR_20), VAR_25 = 32 - VAR_24;
  FUNC_14(VAR_21 <= VAR_6);
  if (VAR_18->data == 0) {
    if ((VAR_20 & VAR_0)) {
      VAR_22 = FUNC_10(FUNC_2(VAR_7), VAR_22, FUNC_12(VAR_17, (int32_t)((1u << VAR_23))));

      FUNC_13(VAR_17, FUNC_1(VAR_12), VAR_22, FUNC_12(VAR_17, 0));
      VAR_17->postproc = VAR_15;
      VAR_22 = VAR_16;
    } else if (!(VAR_20 & VAR_1)) {
      VAR_22 = FUNC_10(FUNC_2(VAR_10), VAR_22, FUNC_12(VAR_17, VAR_25 - VAR_23));
      VAR_22 = FUNC_10(FUNC_2(VAR_9), VAR_22, FUNC_12(VAR_17, VAR_25));
    } else {
      FUNC_14(VAR_24 < 32);
      VAR_22 = FUNC_10(FUNC_2(VAR_11), VAR_22, FUNC_12(VAR_17, VAR_23));
      VAR_22 = FUNC_10(FUNC_2(VAR_7), VAR_22, FUNC_12(VAR_17, (int32_t)((1u << VAR_24)-1)));

    }
    VAR_17->base[0] = VAR_22;
  } else {
    CTState *VAR_26 = FUNC_8(FUNC_3(VAR_17));
    CType *VAR_27 = FUNC_9(VAR_26,
     (VAR_20 & VAR_0) ? VAR_2 :
     (VAR_20 & VAR_1) ? VAR_4 : VAR_3);
    int32_t VAR_28 = (int32_t)(((1u << VAR_24)-1) << VAR_23);
    TRef VAR_29 = FUNC_4(VAR_17, VAR_27, 0, VAR_17->base[2], &VAR_18->argv[2]);
    VAR_29 = FUNC_10(FUNC_2(VAR_10), VAR_29, FUNC_12(VAR_17, VAR_23));

    VAR_29 = FUNC_10(FUNC_0(VAR_7, VAR_21), VAR_29, FUNC_12(VAR_17, VAR_28));
    VAR_22 = FUNC_10(FUNC_0(VAR_7, VAR_21), VAR_22, FUNC_12(VAR_17, (int32_t)~VAR_28));
    VAR_22 = FUNC_10(FUNC_0(VAR_8, VAR_21), VAR_22, VAR_29);
    FUNC_10(FUNC_0(VAR_14, VAR_21), VAR_19, VAR_22);
    VAR_18->nres = 0;
    VAR_17->needsnap = 1;
  }
}
