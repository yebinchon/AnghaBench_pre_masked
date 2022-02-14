
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int top; } ;
typedef TYPE_1__ lua_State ;
struct TYPE_9__ {int type; int * fp; } ;
typedef TYPE_2__ IOFileUD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (TYPE_1__*,int,int *) ;
 int FUNC_4 (int) ;
 int FUNC_5 (TYPE_1__*,char*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(lua_State *VAR_4, IOFileUD *VAR_5)
{
  int VAR_6;
  if ((VAR_5->type & VAR_1) == VAR_0) {
    VAR_6 = (FUNC_1(VAR_5->fp) == 0);
  } else if ((VAR_5->type & VAR_1) == VAR_2) {
    int VAR_7 = -1;





    FUNC_4(0);
    return 0;





    VAR_6 = (VAR_7 != -1);

  } else {
    FUNC_4((VAR_5->type & VAR_1) == VAR_3);
    FUNC_7(VAR_4->top++);
    FUNC_5(VAR_4, "cannot close standard file");
    return 2;
  }
  VAR_5->fp = ((void*)0);
  return FUNC_3(VAR_4, VAR_6, ((void*)0));
}
