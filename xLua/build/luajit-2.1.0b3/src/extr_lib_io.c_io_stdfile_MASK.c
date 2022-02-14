
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ptrdiff_t ;
typedef int lua_State ;
struct TYPE_3__ {int * fp; } ;
typedef TYPE_1__ IOFileUD ;
typedef int FILE ;


 TYPE_1__* FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static FILE *FUNC_2(lua_State *VAR_1, ptrdiff_t VAR_2)
{
  IOFileUD *VAR_3 = FUNC_0(VAR_1, VAR_2);
  if (VAR_3->fp == ((void*)0))
    FUNC_1(VAR_1, VAR_0);
  return VAR_3->fp;
}
