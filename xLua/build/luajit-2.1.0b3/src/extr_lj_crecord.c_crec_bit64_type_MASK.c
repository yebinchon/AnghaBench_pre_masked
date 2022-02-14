
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_5__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int cTValue ;
struct TYPE_7__ {int ctypeid; } ;
struct TYPE_6__ {int info; int size; } ;
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
 TYPE_5__* FUNC_1 (int *) ;
 TYPE_1__* FUNC_2 (int *,TYPE_1__*) ;
 scalar_t__ FUNC_3 (int) ;
 TYPE_1__* FUNC_4 (int *,int ) ;
 scalar_t__ FUNC_5 (int *) ;

__attribute__((used)) static CTypeID FUNC_6(CTState *VAR_7, cTValue *VAR_8)
{
  if (FUNC_5(VAR_8)) {
    CType *VAR_9 = FUNC_4(VAR_7, FUNC_1(VAR_8)->ctypeid);
    if (FUNC_3(VAR_9->info)) VAR_9 = FUNC_2(VAR_7, VAR_9);
    if ((VAR_9->info & (VAR_5|VAR_0|VAR_1|VAR_2)) ==
 FUNC_0(VAR_6, VAR_2) && VAR_9->size == 8)
      return VAR_4;
    return VAR_3;
  }
  return 0;
}
