
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ top; } ;
typedef TYPE_1__ lua_State ;
struct TYPE_11__ {int metatable; int udtype; } ;
struct TYPE_10__ {int type; int * fp; } ;
typedef TYPE_2__ IOFileUD ;
typedef TYPE_3__ GCudata ;
typedef int GCobj ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*,int,char const*) ;
 int * FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (int ,int ) ;
 TYPE_3__* FUNC_5 (scalar_t__) ;

__attribute__((used)) static GCobj *FUNC_6(lua_State *VAR_2, FILE *VAR_3, const char *VAR_4)
{
  IOFileUD *VAR_5 = (IOFileUD *)FUNC_1(VAR_2, sizeof(IOFileUD));
  GCudata *VAR_6 = FUNC_5(VAR_2->top-1);
  VAR_6->udtype = VAR_1;

  FUNC_4(VAR_6->metatable, FUNC_0(VAR_2->top-3));
  VAR_5->fp = VAR_3;
  VAR_5->type = VAR_0;
  FUNC_2(VAR_2, -2, VAR_4);
  return FUNC_3(VAR_6);
}
