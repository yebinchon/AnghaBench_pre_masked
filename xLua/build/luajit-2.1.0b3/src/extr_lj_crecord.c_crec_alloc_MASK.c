
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_4__ ;
typedef struct TYPE_29__ TYPE_3__ ;
typedef struct TYPE_28__ TYPE_2__ ;
typedef struct TYPE_27__ TYPE_1__ ;


struct TYPE_27__ {void** base; } ;
typedef TYPE_1__ jit_State ;
typedef int int32_t ;
typedef int cTValue ;
struct TYPE_30__ {int info; int size; int sib; int name; } ;
struct TYPE_29__ {TYPE_2__* argv; } ;
struct TYPE_28__ {scalar_t__ u64; } ;
typedef TYPE_2__ TValue ;
typedef void* TRef ;
typedef TYPE_3__ RecordFFData ;
typedef size_t MSize ;
typedef int GCcdata ;
typedef int CTypeID ;
typedef TYPE_4__ CType ;
typedef int CTState ;
typedef int CTSize ;
typedef int CTInfo ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_11 ;
 int VAR_12 ;
 void* VAR_13 ;
 void* FUNC_4 (TYPE_1__*,TYPE_4__*,void*,void*,TYPE_2__*) ;
 int FUNC_5 (TYPE_1__*,void*,void*,void*,unsigned int) ;
 int FUNC_6 (TYPE_1__*,void*,int ,int *) ;
 scalar_t__ FUNC_7 (int) ;
 int * FUNC_8 (int ) ;
 TYPE_4__* FUNC_9 (int *,int) ;
 scalar_t__ FUNC_10 (int) ;
 int FUNC_11 (int) ;
 scalar_t__ FUNC_12 (int) ;
 scalar_t__ FUNC_13 (int) ;
 scalar_t__ FUNC_14 (int) ;
 scalar_t__ FUNC_15 (int) ;
 scalar_t__ FUNC_16 (int) ;
 scalar_t__ FUNC_17 (int) ;
 TYPE_4__* FUNC_18 (int *,int) ;
 TYPE_4__* FUNC_19 (int *,TYPE_4__*) ;
 void* FUNC_20 (int ,void*,void*) ;
 int FUNC_21 (int ) ;
 int FUNC_22 (int *,TYPE_4__*,TYPE_2__*) ;
 int FUNC_23 (int *,int,int*) ;
 int * FUNC_24 (int *,int,int ) ;
 int FUNC_25 (int *,TYPE_4__*,int) ;
 void* FUNC_26 (TYPE_1__*,int) ;
 int FUNC_27 (TYPE_1__*,int ) ;
 void* FUNC_28 (TYPE_1__*,int) ;
 void* FUNC_29 (TYPE_1__*,int *) ;
 void* FUNC_30 (TYPE_1__*) ;
 int FUNC_31 (TYPE_1__*,int ) ;
 int FUNC_32 (TYPE_2__*,int ) ;

__attribute__((used)) static void FUNC_33(jit_State *VAR_14, RecordFFData *VAR_15, CTypeID VAR_16)
{
  CTState *VAR_17 = FUNC_8(FUNC_3(VAR_14));
  CTSize VAR_18;
  CTInfo VAR_19 = FUNC_23(VAR_17, VAR_16, &VAR_18);
  CType *VAR_20 = FUNC_18(VAR_17, VAR_16);
  TRef VAR_21, VAR_22 = FUNC_26(VAR_14, VAR_16);
  cTValue *VAR_23;

  if (FUNC_16(VAR_19) || (FUNC_14(VAR_19) && (VAR_18 == 4 || VAR_18 == 8))) {
    TRef VAR_24 = VAR_14->base[1] ? FUNC_4(VAR_14, VAR_20, 0, VAR_14->base[1], &VAR_15->argv[1]) :
       FUNC_16(VAR_19) ? FUNC_29(VAR_14, ((void*)0)) :
       VAR_18 == 4 ? FUNC_26(VAR_14, 0) :
       (FUNC_30(VAR_14), FUNC_27(VAR_14, 0));
    VAR_14->base[0] = FUNC_20(FUNC_1(VAR_9, VAR_4), VAR_22, VAR_24);
    return;
  } else {
    TRef VAR_25 = VAR_13;
    if ((VAR_19 & VAR_1)) {
      CTSize VAR_26, VAR_27;
      if (!VAR_14->base[1] || VAR_14->base[2])
 FUNC_31(VAR_14, VAR_11);
      VAR_25 = FUNC_4(VAR_14, FUNC_9(VAR_17, VAR_2), 0,
   VAR_14->base[1], &VAR_15->argv[1]);
      VAR_26 = FUNC_25(VAR_17, VAR_20, 0);
      VAR_27 = FUNC_25(VAR_17, VAR_20, 1);
      VAR_25 = FUNC_20(FUNC_2(VAR_10), VAR_25, FUNC_26(VAR_14, (int32_t)(VAR_27-VAR_26)));
      VAR_25 = FUNC_20(FUNC_2(VAR_7), VAR_25, FUNC_26(VAR_14, (int32_t)VAR_26));
      VAR_14->base[1] = 0;
    } else if (FUNC_7(VAR_19) > VAR_3) {
      VAR_25 = FUNC_26(VAR_14, VAR_18);
    }
    VAR_21 = FUNC_20(FUNC_1(VAR_8, VAR_4), VAR_22, VAR_25);
    if (VAR_18 > 128 || (VAR_19 & VAR_1)) {
      TRef VAR_28;
      CTSize VAR_29;
    special:
      if (VAR_14->base[1])
 FUNC_31(VAR_14, VAR_11);
      VAR_28 = FUNC_20(FUNC_0(VAR_6, VAR_5), VAR_21, FUNC_28(VAR_14, sizeof(GCcdata)));
      if (VAR_25 == VAR_13) VAR_25 = FUNC_26(VAR_14, VAR_18);
      VAR_29 = FUNC_7(VAR_19);
      if (VAR_29 < VAR_3) VAR_29 = VAR_3;
      FUNC_5(VAR_14, VAR_28, VAR_25, FUNC_26(VAR_14, 0), (1u << VAR_29));
    } else if (VAR_14->base[1] && !VAR_14->base[2] &&
 !FUNC_22(VAR_17, VAR_20, &VAR_15->argv[1])) {
      goto single_init;
    } else if (FUNC_10(VAR_20->info)) {
      CType *VAR_30 = FUNC_19(VAR_17, VAR_20);
      CTSize VAR_31, VAR_32 = VAR_30->size;
      TRef VAR_33 = 0;
      TValue VAR_34;
      TValue *VAR_35 = &VAR_34;
      MSize VAR_36;
      VAR_34.u64 = 0;
      if (!(FUNC_15(VAR_30->info) || FUNC_16(VAR_30->info)) ||
   VAR_32 * VAR_0 < VAR_18)
 goto special;
      for (VAR_36 = 1, VAR_31 = 0; VAR_31 < VAR_18; VAR_31 += VAR_32) {
 TRef VAR_37 = FUNC_20(FUNC_0(VAR_6, VAR_5), VAR_21,
    FUNC_28(VAR_14, VAR_31 + sizeof(GCcdata)));
 if (VAR_14->base[VAR_36]) {
   VAR_33 = VAR_14->base[VAR_36];
   VAR_35 = &VAR_15->argv[VAR_36];
   VAR_36++;
 } else if (VAR_36 != 2) {
   VAR_33 = FUNC_15(VAR_30->info) ? FUNC_26(VAR_14, 0) : VAR_13;
 }
 FUNC_4(VAR_14, VAR_30, VAR_37, VAR_33, VAR_35);
      }
    } else if (FUNC_17(VAR_20->info)) {
      CTypeID VAR_38 = VAR_20->sib;
      MSize VAR_39 = 1;
      while (VAR_38) {
 CType *VAR_40 = FUNC_9(VAR_17, VAR_38);
 VAR_38 = VAR_40->sib;
 if (FUNC_13(VAR_40->info)) {
   CType *VAR_41;
   TRef VAR_42, VAR_43;
   TValue VAR_44;
   TValue *VAR_45 = &VAR_44;
   FUNC_32(&VAR_44, 0);
   if (!FUNC_21(VAR_40->name)) continue;
   VAR_41 = FUNC_19(VAR_17, VAR_40);
   if (!(FUNC_15(VAR_41->info) || FUNC_16(VAR_41->info) ||
  FUNC_12(VAR_41->info)))
     FUNC_31(VAR_14, VAR_11);
   if (VAR_14->base[VAR_39]) {
     VAR_42 = VAR_14->base[VAR_39];
     VAR_45 = &VAR_15->argv[VAR_39];
     VAR_39++;
   } else {
     VAR_42 = FUNC_16(VAR_41->info) ? VAR_13 : FUNC_26(VAR_14, 0);
   }
   VAR_43 = FUNC_20(FUNC_0(VAR_6, VAR_5), VAR_21,
        FUNC_28(VAR_14, VAR_40->size + sizeof(GCcdata)));
   FUNC_4(VAR_14, VAR_41, VAR_43, VAR_42, VAR_45);
 } else if (!FUNC_11(VAR_40->info)) {

   FUNC_31(VAR_14, VAR_11);
 }
      }
    } else {
      TRef VAR_46;
    single_init:
      VAR_46 = FUNC_20(FUNC_0(VAR_6, VAR_5), VAR_21, FUNC_28(VAR_14, sizeof(GCcdata)));
      if (VAR_14->base[1]) {
 FUNC_4(VAR_14, VAR_20, VAR_46, VAR_14->base[1], &VAR_15->argv[1]);
      } else {
 TValue VAR_47;
 VAR_47.u64 = 0;
 FUNC_4(VAR_14, VAR_20, VAR_46, FUNC_26(VAR_14, 0), &VAR_47);
      }
    }
  }
  VAR_14->base[0] = VAR_21;

  VAR_23 = FUNC_24(VAR_17, VAR_16, VAR_12);
  if (VAR_23)
    FUNC_6(VAR_14, VAR_21, 0, VAR_23);
}
