
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int cTValue ;
struct TYPE_5__ {int ctypeid; } ;
struct TYPE_4__ {int size; int info; } ;
typedef int CTypeID ;
typedef TYPE_1__ CType ;
typedef int CTState ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int) ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_3__* FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 TYPE_1__* FUNC_3 (int *,int) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int *,int ,int ) ;
 scalar_t__ FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (int *) ;

CTypeID FUNC_13(CTState *VAR_7, cTValue *VAR_8)
{
  if (FUNC_11(VAR_8)) {
    return VAR_2;
  } else if (FUNC_10(VAR_8)) {
    CTypeID VAR_9 = FUNC_1(VAR_8)->ctypeid;
    CType *VAR_10 = FUNC_3(VAR_7, VAR_9);
    if (FUNC_6(VAR_10->info)) {
      return FUNC_8(VAR_7,
        FUNC_0(VAR_6, VAR_0|FUNC_2(VAR_10->info)), VAR_5);
    } else if (FUNC_7(VAR_10->info) || FUNC_5(VAR_10->info)) {

      return FUNC_8(VAR_7, FUNC_0(VAR_6, VAR_0|VAR_9), VAR_5);
    } else if (FUNC_4(VAR_10->info) && VAR_10->size == sizeof(float)) {
      return VAR_2;
    } else {
      return VAR_9;
    }
  } else if (FUNC_12(VAR_8)) {
    return VAR_3;
  } else if (FUNC_9(VAR_8)) {
    return VAR_1;
  } else {
    return VAR_4;
  }
}
