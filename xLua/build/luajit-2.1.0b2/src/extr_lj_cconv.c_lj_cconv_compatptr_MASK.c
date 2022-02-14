
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int info; scalar_t__ size; } ;
typedef TYPE_1__ CType ;
typedef int CTState ;
typedef int CTInfo ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__* FUNC_0 (int *,TYPE_1__*,int*) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int) ;

int FUNC_7(CTState *VAR_5, CType *VAR_6, CType *VAR_7, CTInfo VAR_8)
{
  if (!((VAR_8 & VAR_0) || VAR_6 == VAR_7)) {
    CTInfo VAR_9 = 0, VAR_10 = 0;
    VAR_6 = FUNC_0(VAR_5, VAR_6, &VAR_9);
    if (!FUNC_4(VAR_7->info))
      VAR_7 = FUNC_0(VAR_5, VAR_7, &VAR_10);
    if ((VAR_8 & VAR_2)) {
      if (VAR_9 != VAR_10)
 return 0;
    } else if (!(VAR_8 & VAR_1)) {
      if ((VAR_9 & VAR_10) != VAR_10)
 return 0;
      if (FUNC_5(VAR_6->info) || FUNC_5(VAR_7->info))
 return 1;
    }
    if (FUNC_6(VAR_6->info) != FUNC_6(VAR_7->info) ||
 VAR_6->size != VAR_7->size)
      return 0;
    if (FUNC_2(VAR_6->info)) {
      if (((VAR_6->info ^ VAR_7->info) & (VAR_3|VAR_4)))
 return 0;
    } else if (FUNC_3(VAR_6->info)) {

      return FUNC_7(VAR_5, VAR_6, VAR_7, VAR_8|VAR_2);
    } else if (FUNC_4(VAR_6->info)) {
      if (VAR_6 != VAR_7)
 return 0;
    } else if (FUNC_1(VAR_6->info)) {

    }
  }
  return 1;
}
