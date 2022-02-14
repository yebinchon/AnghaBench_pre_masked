
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int lua_Writer ;
typedef int lua_State ;
struct TYPE_3__ {int strip; int status; int sb; void* wdata; int wfunc; int * pt; } ;
typedef int GCproto ;
typedef TYPE_1__ BCWriteCtx ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *,TYPE_1__*,int ) ;
 int FUNC_4 (int *) ;

int FUNC_5(lua_State *VAR_1, GCproto *VAR_2, lua_Writer VAR_3, void *VAR_4,
       int VAR_5)
{
  BCWriteCtx VAR_6;
  int VAR_7;
  VAR_6.pt = VAR_2;
  VAR_6.wfunc = VAR_3;
  VAR_6.wdata = VAR_4;
  VAR_6.strip = VAR_5;
  VAR_6.status = 0;
  FUNC_2(VAR_1, &VAR_6.sb);
  VAR_7 = FUNC_3(VAR_1, ((void*)0), &VAR_6, VAR_0);
  if (VAR_7 == 0) VAR_7 = VAR_6.status;
  FUNC_1(FUNC_0(FUNC_4(&VAR_6.sb)), &VAR_6.sb);
  return VAR_7;
}
