
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
typedef int lua_State ;
struct TYPE_12__ {scalar_t__ nupvalues; int * uvptr; } ;
struct TYPE_15__ {TYPE_1__ l; } ;
struct TYPE_14__ {size_t sizeuv; } ;
struct TYPE_13__ {int dhash; } ;
typedef size_t MSize ;
typedef TYPE_2__ GCupval ;
typedef int GCtab ;
typedef TYPE_3__ GCproto ;
typedef TYPE_4__ GCfunc ;


 TYPE_2__* FUNC_0 (int *) ;
 TYPE_4__* FUNC_1 (int *,TYPE_3__*,int *) ;
 int FUNC_2 (TYPE_2__*) ;
 scalar_t__* FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (int ,int ) ;

GCfunc *FUNC_5(lua_State *VAR_0, GCproto *VAR_1, GCtab *VAR_2)
{
  GCfunc *VAR_3 = FUNC_1(VAR_0, VAR_1, VAR_2);
  MSize VAR_4, VAR_5 = VAR_1->sizeuv;

  for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4++) {
    GCupval *VAR_6 = FUNC_0(VAR_0);
    VAR_6->dhash = (uint32_t)(uintptr_t)VAR_1 ^ ((uint32_t)FUNC_3(VAR_1)[VAR_4] << 24);
    FUNC_4(VAR_3->l.uvptr[VAR_4], FUNC_2(VAR_6));
  }
  VAR_3->l.nupvalues = (uint8_t)VAR_5;
  return VAR_3;
}
