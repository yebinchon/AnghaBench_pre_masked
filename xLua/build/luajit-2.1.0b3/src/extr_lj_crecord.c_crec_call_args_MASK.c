
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__* base; } ;
typedef TYPE_1__ jit_State ;
typedef int cTValue ;
struct TYPE_15__ {int info; int size; scalar_t__ sib; } ;
struct TYPE_14__ {int * argv; } ;
typedef scalar_t__ TRef ;
typedef TYPE_2__ RecordFFData ;
typedef int MSize ;
typedef scalar_t__ CTypeID ;
typedef TYPE_3__ CType ;
typedef int CTState ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ FUNC_1 (TYPE_1__*,TYPE_3__*,int ,scalar_t__,int *) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 TYPE_3__* FUNC_4 (int *,scalar_t__) ;
 int FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (int) ;
 scalar_t__ FUNC_8 (int) ;
 scalar_t__ FUNC_9 (int) ;
 scalar_t__ FUNC_10 (int) ;
 scalar_t__ FUNC_11 (int) ;
 TYPE_3__* FUNC_12 (int *,scalar_t__) ;
 scalar_t__ FUNC_13 (scalar_t__,int ,int ,int ) ;
 scalar_t__ FUNC_14 (int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_15 (int *,int *) ;
 int FUNC_16 (TYPE_1__*) ;
 int FUNC_17 (TYPE_1__*,int ) ;
 int FUNC_18 (int ) ;
 scalar_t__ FUNC_19 (scalar_t__,int ,int ) ;

__attribute__((used)) static TRef FUNC_20(jit_State *VAR_18, RecordFFData *VAR_19,
      CTState *VAR_20, CType *VAR_21)
{
  TRef VAR_22[VAR_0];
  CTypeID VAR_23;
  MSize VAR_24, VAR_25;
  TRef VAR_26, *VAR_27;
  cTValue *VAR_28;
  VAR_23 = VAR_21->sib;
  while (VAR_23) {
    CType *VAR_29 = FUNC_4(VAR_20, VAR_23);
    if (!FUNC_5(VAR_29->info)) break;
    VAR_23 = VAR_29->sib;
  }
  VAR_22[0] = VAR_17;
  for (VAR_25 = 0, VAR_27 = VAR_18->base+1, VAR_28 = VAR_19->argv+1; *VAR_27; VAR_25++, VAR_27++, VAR_28++) {
    CTypeID VAR_30;
    CType *VAR_31;

    if (VAR_25 >= VAR_0)
      FUNC_17(VAR_18, VAR_16);

    if (VAR_23) {
      CType *VAR_32 = FUNC_4(VAR_20, VAR_23);
      VAR_23 = VAR_32->sib;
      FUNC_18(FUNC_7(VAR_32->info));
      VAR_30 = FUNC_3(VAR_32->info);
    } else {
      if (!(VAR_21->info & VAR_4))
 FUNC_17(VAR_18, VAR_16);
      VAR_30 = FUNC_15(VAR_20, VAR_28);
    }
    VAR_31 = FUNC_12(VAR_20, VAR_30);
    if (!(FUNC_10(VAR_31->info) || FUNC_11(VAR_31->info) ||
   FUNC_6(VAR_31->info)))
      FUNC_17(VAR_18, VAR_16);
    VAR_26 = FUNC_1(VAR_18, VAR_31, 0, *VAR_27, VAR_28);
    if (FUNC_9(VAR_31->info)) {
      if (VAR_31->size < 4) {
 if ((VAR_31->info & VAR_3))
   VAR_26 = FUNC_13(VAR_26, VAR_9, VAR_31->size==1 ? VAR_13 : VAR_11, 0);
 else
   VAR_26 = FUNC_13(VAR_26, VAR_9, VAR_31->size==1 ? VAR_8 : VAR_6,VAR_5);
      }
    } else if (VAR_15 && FUNC_8(VAR_31->info) && VAR_31->size > 4) {
      FUNC_16(VAR_18);
    }
    VAR_22[VAR_25] = VAR_26;
  }
  VAR_26 = VAR_22[0];
  for (VAR_24 = 1; VAR_24 < VAR_25; VAR_24++)
    VAR_26 = FUNC_14(FUNC_0(VAR_14, VAR_10), VAR_26, VAR_22[VAR_24]);
  return VAR_26;
}
