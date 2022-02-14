
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int * base; int L; } ;
typedef TYPE_1__ jit_State ;
typedef int cTValue ;
struct TYPE_11__ {scalar_t__ data; int * argv; } ;
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
 int FUNC_1 (TYPE_1__*,TYPE_2__*,int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int ,int ,int ) ;
 int * FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (TYPE_1__*,int ) ;
 int FUNC_6 (TYPE_1__*,int *) ;
 int * FUNC_7 (int ,int ,int *) ;
 int FUNC_8 (TYPE_1__*,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (int *) ;

__attribute__((used)) static void FUNC_14(jit_State *VAR_5, CTState *VAR_6, CType *VAR_7,
       RecordFFData *VAR_8)
{
  CTypeID VAR_9 = FUNC_2(VAR_6, VAR_7);
  cTValue *VAR_10 = FUNC_4(VAR_6, VAR_9, VAR_8->data ? VAR_4 : VAR_3);
  if (!VAR_10)
    FUNC_8(VAR_5, VAR_2);
  if (FUNC_12(VAR_10)) {
    FUNC_1(VAR_5, VAR_8, VAR_10);
  } else if (VAR_8->data == 0 && FUNC_13(VAR_10) && FUNC_11(VAR_5->base[1])) {

    cTValue *VAR_11 = FUNC_7(VAR_5->L, FUNC_10(VAR_10), &VAR_8->argv[1]);
    VAR_5->base[0] = FUNC_6(VAR_5, VAR_11);
    if (!VAR_5->base[0])
      FUNC_8(VAR_5, VAR_2);

    FUNC_3(FUNC_0(VAR_1, VAR_0), VAR_5->base[1], FUNC_5(VAR_5, FUNC_9(&VAR_8->argv[1])));
  } else {



    FUNC_8(VAR_5, VAR_2);
  }
}
