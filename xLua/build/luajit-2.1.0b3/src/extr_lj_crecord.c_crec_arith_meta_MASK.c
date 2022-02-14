
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_12__ ;


struct TYPE_15__ {int postproc; scalar_t__* base; } ;
typedef TYPE_1__ jit_State ;
typedef int cTValue ;
struct TYPE_17__ {int info; } ;
struct TYPE_16__ {scalar_t__ data; int * argv; } ;
struct TYPE_14__ {int ctypeid; } ;
typedef scalar_t__ TRef ;
typedef TYPE_2__ RecordFFData ;
typedef scalar_t__ MMS ;
typedef int CTypeID ;
typedef TYPE_3__ CType ;
typedef int CTState ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 TYPE_12__* FUNC_1 (TYPE_1__*,scalar_t__,int *) ;
 int FUNC_2 (TYPE_1__*,TYPE_2__*,int *) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 TYPE_3__* FUNC_6 (int *,int ) ;
 int * FUNC_7 (int *,int ,scalar_t__) ;
 int FUNC_8 (TYPE_1__*,int ,scalar_t__,scalar_t__) ;
 int FUNC_9 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int *) ;

__attribute__((used)) static TRef FUNC_12(jit_State *VAR_7, TRef *VAR_8, CType **VAR_9, CTState *VAR_10,
       RecordFFData *VAR_11)
{
  cTValue *VAR_12 = ((void*)0);
  if (VAR_7->base[0]) {
    if (FUNC_10(&VAR_11->argv[0])) {
      CTypeID VAR_13 = FUNC_1(VAR_7, VAR_7->base[0], &VAR_11->argv[0])->ctypeid;
      CType *VAR_14 = FUNC_6(VAR_10, VAR_13);
      if (FUNC_5(VAR_14->info)) VAR_13 = FUNC_3(VAR_14->info);
      VAR_12 = FUNC_7(VAR_10, VAR_13, (MMS)VAR_11->data);
    }
    if (!VAR_12 && VAR_7->base[1] && FUNC_10(&VAR_11->argv[1])) {
      CTypeID VAR_15 = FUNC_1(VAR_7, VAR_7->base[1], &VAR_11->argv[1])->ctypeid;
      CType *VAR_16 = FUNC_6(VAR_10, VAR_15);
      if (FUNC_5(VAR_16->info)) VAR_15 = FUNC_3(VAR_16->info);
      VAR_12 = FUNC_7(VAR_10, VAR_15, (MMS)VAR_11->data);
    }
  }
  if (VAR_12) {
    if (FUNC_11(VAR_12)) {
      FUNC_2(VAR_7, VAR_11, VAR_12);
      return 0;
    }
  } else if ((MMS)VAR_11->data == VAR_4) {
    if (VAR_8[0] && VAR_8[1] && FUNC_4(VAR_9[0]->info) == FUNC_4(VAR_9[1]->info)) {

      FUNC_8(VAR_7, FUNC_0(VAR_1, VAR_0), VAR_8[0], VAR_8[1]);
      VAR_7->postproc = VAR_2;
      return VAR_6;
    } else {
      return VAR_5;
    }
  }
  FUNC_9(VAR_7, VAR_3);
  return 0;
}
