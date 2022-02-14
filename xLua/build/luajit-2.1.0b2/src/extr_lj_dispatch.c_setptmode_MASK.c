
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int global_State ;
struct TYPE_5__ {int flags; } ;
typedef TYPE_1__ GCproto ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_2(global_State *VAR_3, GCproto *VAR_4, int VAR_5)
{
  if ((VAR_5 & VAR_1)) {
    VAR_4->flags &= ~VAR_2;
    FUNC_1(VAR_4);
  } else {
    if (!(VAR_5 & VAR_0))
      VAR_4->flags |= VAR_2;
    FUNC_0(VAR_3, VAR_4);
  }
}
