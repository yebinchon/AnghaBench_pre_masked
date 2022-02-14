
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_11__ ;


struct TYPE_14__ {int* base; int postproc; } ;
typedef TYPE_1__ jit_State ;
typedef int cTValue ;
struct TYPE_16__ {int info; } ;
struct TYPE_15__ {int nres; scalar_t__ data; int * argv; } ;
struct TYPE_13__ {int ctypeid; } ;
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
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 TYPE_11__* FUNC_1 (TYPE_1__*,int,int *) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 TYPE_3__* FUNC_5 (int *,int ) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (int *,int ,scalar_t__) ;
 int FUNC_8 (TYPE_1__*,int ) ;
 int FUNC_9 (TYPE_1__*,int ,scalar_t__,scalar_t__) ;
 int FUNC_10 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (int *) ;

__attribute__((used)) static TRef FUNC_13(jit_State *VAR_8, TRef *VAR_9, CType **VAR_10, CTState *VAR_11,
       RecordFFData *VAR_12)
{
  cTValue *VAR_13 = ((void*)0);
  if (VAR_8->base[0]) {
    if (FUNC_11(&VAR_12->argv[0])) {
      CTypeID VAR_14 = FUNC_1(VAR_8, VAR_8->base[0], &VAR_12->argv[0])->ctypeid;
      CType *VAR_15 = FUNC_5(VAR_11, VAR_14);
      if (FUNC_4(VAR_15->info)) VAR_14 = FUNC_2(VAR_15->info);
      VAR_13 = FUNC_7(VAR_11, VAR_14, (MMS)VAR_12->data);
    }
    if (!VAR_13 && VAR_8->base[1] && FUNC_11(&VAR_12->argv[1])) {
      CTypeID VAR_16 = FUNC_1(VAR_8, VAR_8->base[1], &VAR_12->argv[1])->ctypeid;
      CType *VAR_17 = FUNC_5(VAR_11, VAR_16);
      if (FUNC_4(VAR_17->info)) VAR_16 = FUNC_2(VAR_17->info);
      VAR_13 = FUNC_7(VAR_11, VAR_16, (MMS)VAR_12->data);
    }
  }
  if (VAR_13) {
    if (FUNC_12(VAR_13)) {
      VAR_8->base[-1] = FUNC_8(VAR_8, FUNC_6(VAR_13)) | VAR_6;
      VAR_12->nres = -1;
      return 0;
    }
  } else if ((MMS)VAR_12->data == VAR_4) {
    if (VAR_9[0] && VAR_9[1] && FUNC_3(VAR_10[0]->info) == FUNC_3(VAR_10[1]->info)) {

      FUNC_9(VAR_8, FUNC_0(VAR_1, VAR_0), VAR_9[0], VAR_9[1]);
      VAR_8->postproc = VAR_2;
      return VAR_7;
    } else {
      return VAR_5;
    }
  }
  FUNC_10(VAR_8, VAR_3);
  return 0;
}
