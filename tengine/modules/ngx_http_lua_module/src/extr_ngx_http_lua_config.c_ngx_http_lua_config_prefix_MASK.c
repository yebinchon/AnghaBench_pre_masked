
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_3__ {int len; scalar_t__ data; } ;
struct TYPE_4__ {TYPE_1__ prefix; } ;


 int FUNC_0 (int *,char*,int ) ;
 TYPE_2__* VAR_0 ;

__attribute__((used)) static int
FUNC_1(lua_State *VAR_1)
{
    FUNC_0(VAR_1, (char *) VAR_0->prefix.data,
                    VAR_0->prefix.len);
    return 1;
}
