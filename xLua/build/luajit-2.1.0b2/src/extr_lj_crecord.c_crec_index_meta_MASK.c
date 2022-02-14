
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int* base; int L; } ;
typedef TYPE_1__ jit_State ;
typedef int cTValue ;
struct TYPE_10__ {scalar_t__ data; int nres; int * argv; } ;
typedef TYPE_2__ RecordFFData ;
typedef int CTypeID ;
typedef int CType ;
typedef int CTState ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int ,int,int ) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (TYPE_1__*,int ) ;
 int FUNC_6 (TYPE_1__*,int ) ;
 int FUNC_7 (TYPE_1__*,int *) ;
 int * FUNC_8 (int ,int ,int *) ;
 int FUNC_9 (TYPE_1__*,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (int) ;
 scalar_t__ FUNC_13 (int *) ;
 scalar_t__ FUNC_14 (int *) ;

__attribute__((used)) static void FUNC_15(jit_State *VAR_6, CTState *VAR_7, CType *VAR_8,
       RecordFFData *VAR_9)
{
  CTypeID VAR_10 = FUNC_1(VAR_7, VAR_8);
  cTValue *VAR_11 = FUNC_4(VAR_7, VAR_10, VAR_9->data ? VAR_4 : VAR_3);
  if (!VAR_11)
    FUNC_9(VAR_6, VAR_2);
  if (FUNC_13(VAR_11)) {
    VAR_6->base[-1] = FUNC_5(VAR_6, FUNC_3(VAR_11)) | VAR_5;
    VAR_9->nres = -1;
  } else if (VAR_9->data == 0 && FUNC_14(VAR_11) && FUNC_12(VAR_6->base[1])) {

    cTValue *VAR_12 = FUNC_8(VAR_6->L, FUNC_11(VAR_11), &VAR_9->argv[1]);
    VAR_6->base[0] = FUNC_7(VAR_6, VAR_12);
    if (!VAR_6->base[0])
      FUNC_9(VAR_6, VAR_2);

    FUNC_2(FUNC_0(VAR_1, VAR_0), VAR_6->base[1], FUNC_6(VAR_6, FUNC_10(&VAR_9->argv[1])));
  } else {



    FUNC_9(VAR_6, VAR_2);
  }
}
