
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
typedef int int32_t ;
struct TYPE_12__ {scalar_t__ nupvalues; int * uvptr; } ;
struct TYPE_15__ {TYPE_1__ l; } ;
struct TYPE_14__ {size_t sizeuv; } ;
struct TYPE_13__ {int immutable; int dhash; } ;
typedef size_t MSize ;
typedef TYPE_2__ GCupval ;
typedef int GCtab ;
typedef TYPE_3__ GCproto ;
typedef TYPE_4__ GCfunc ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (int *) ;
 TYPE_4__* FUNC_1 (int *,TYPE_3__*,int *) ;
 int FUNC_2 (TYPE_2__*) ;
 int* FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (int ,int ) ;

GCfunc *FUNC_5(lua_State *VAR_1, GCproto *VAR_2, GCtab *VAR_3)
{
  GCfunc *VAR_4 = FUNC_1(VAR_1, VAR_2, VAR_3);
  MSize VAR_5, VAR_6 = VAR_2->sizeuv;

  for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++) {
    GCupval *VAR_7 = FUNC_0(VAR_1);
    int32_t VAR_8 = FUNC_3(VAR_2)[VAR_5];
    VAR_7->immutable = ((VAR_8 / VAR_0) & 1);
    VAR_7->dhash = (uint32_t)(uintptr_t)VAR_2 ^ (VAR_8 << 24);
    FUNC_4(VAR_4->l.uvptr[VAR_5], FUNC_2(VAR_7));
  }
  VAR_4->l.nupvalues = (uint8_t)VAR_6;
  return VAR_4;
}
