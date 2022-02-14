
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int flags; size_t sizebc; } ;
typedef TYPE_1__ GCproto ;
typedef size_t BCPos ;
typedef scalar_t__ BCOp ;
typedef int BCIns ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int ) ;
 int * FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,int) ;

void FUNC_3(GCproto *VAR_7)
{
  if ((VAR_7->flags & VAR_6)) {
    BCIns *VAR_8 = FUNC_1(VAR_7);
    BCPos VAR_9, VAR_10 = VAR_7->sizebc;;
    VAR_7->flags &= ~VAR_6;
    if (FUNC_0(VAR_8[0]) == VAR_2)
      FUNC_2(&VAR_8[0], VAR_0);
    for (VAR_9 = 1; VAR_9 < VAR_10; VAR_9++) {
      BCOp VAR_11 = FUNC_0(VAR_8[VAR_9]);
      if (VAR_11 == VAR_1 || VAR_11 == VAR_3 || VAR_11 == VAR_4)
 FUNC_2(&VAR_8[VAR_9], (int)VAR_11+(int)VAR_5-(int)VAR_4);
    }
  }
}
