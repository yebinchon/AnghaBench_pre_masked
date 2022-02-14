
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_9__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ top; } ;
typedef TYPE_2__ lua_State ;
struct TYPE_11__ {int env; } ;
struct TYPE_15__ {TYPE_1__ c; } ;
struct TYPE_14__ {int metatable; int udtype; } ;
struct TYPE_13__ {int type; int * fp; } ;
typedef TYPE_3__ IOFileUD ;
typedef TYPE_4__ GCudata ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_9__* FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (int ,int ) ;
 TYPE_4__* FUNC_3 (scalar_t__) ;

__attribute__((used)) static IOFileUD *FUNC_4(lua_State *VAR_2)
{
  IOFileUD *VAR_3 = (IOFileUD *)FUNC_1(VAR_2, sizeof(IOFileUD));
  GCudata *VAR_4 = FUNC_3(VAR_2->top-1);
  VAR_4->udtype = VAR_1;

  FUNC_2(VAR_4->metatable, FUNC_0(VAR_2)->c.env);
  VAR_3->fp = ((void*)0);
  VAR_3->type = VAR_0;
  return VAR_3;
}
