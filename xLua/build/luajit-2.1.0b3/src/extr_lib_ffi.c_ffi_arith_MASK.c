
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_3__ {int ffid; } ;
struct TYPE_4__ {TYPE_1__ c; } ;
typedef int MMS ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_2__* FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static int FUNC_2(lua_State *VAR_2)
{
  MMS VAR_3 = (MMS)(FUNC_0(VAR_2)->c.ffid - (int)VAR_0 + (int)VAR_1);
  return FUNC_1(VAR_2, VAR_3);
}
