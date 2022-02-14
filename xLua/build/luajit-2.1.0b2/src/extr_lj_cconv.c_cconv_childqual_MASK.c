
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int info; int size; } ;
typedef TYPE_1__ CType ;
typedef int CTState ;
typedef int CTInfo ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (int *,TYPE_1__*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static CType *FUNC_4(CTState *VAR_2, CType *VAR_3, CTInfo *VAR_4)
{
  VAR_3 = FUNC_1(VAR_2, VAR_3);
  for (;;) {
    if (FUNC_2(VAR_3->info)) {
      if (FUNC_0(VAR_3->info) == VAR_0) *VAR_4 |= VAR_3->size;
    } else if (!FUNC_3(VAR_3->info)) {
      break;
    }
    VAR_3 = FUNC_1(VAR_2, VAR_3);
  }
  *VAR_4 |= (VAR_3->info & VAR_1);
  return VAR_3;
}
