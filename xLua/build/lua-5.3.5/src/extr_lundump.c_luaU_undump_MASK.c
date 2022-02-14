
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


struct TYPE_19__ {int top; } ;
typedef TYPE_1__ lua_State ;
typedef int ZIO ;
struct TYPE_22__ {scalar_t__ sizeupvalues; } ;
struct TYPE_21__ {scalar_t__ nupvalues; TYPE_7__* p; } ;
struct TYPE_20__ {char const* name; int * Z; TYPE_1__* L; } ;
typedef TYPE_2__ LoadState ;
typedef TYPE_3__ LClosure ;


 char const* VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,TYPE_7__*,int *) ;
 int VAR_1 ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_1__*) ;
 TYPE_3__* FUNC_4 (TYPE_1__*,int ) ;
 TYPE_7__* FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (TYPE_1__*,int ,TYPE_7__*) ;
 int FUNC_8 (TYPE_1__*,int ,TYPE_3__*) ;

LClosure *FUNC_9(lua_State *VAR_2, ZIO *VAR_3, const char *VAR_4) {
  LoadState VAR_5;
  LClosure *VAR_6;
  if (*VAR_4 == '@' || *VAR_4 == '=')
    VAR_5.name = VAR_4 + 1;
  else if (*VAR_4 == VAR_0[0])
    VAR_5.name = "binary string";
  else
    VAR_5.name = VAR_4;
  VAR_5.L = VAR_2;
  VAR_5.Z = VAR_3;
  FUNC_2(&VAR_5);
  VAR_6 = FUNC_4(VAR_2, FUNC_0(&VAR_5));
  FUNC_8(VAR_2, VAR_2->top, VAR_6);
  FUNC_3(VAR_2);
  VAR_6->p = FUNC_5(VAR_2);
  FUNC_1(&VAR_5, VAR_6->p, ((void*)0));
  FUNC_6(VAR_6->nupvalues == VAR_6->p->sizeupvalues);
  FUNC_7(VAR_2, VAR_1, VAR_6->p);
  return VAR_6;
}
