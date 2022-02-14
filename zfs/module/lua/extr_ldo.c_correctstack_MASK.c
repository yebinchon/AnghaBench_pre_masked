
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_14__ {int * stack; TYPE_6__* ci; TYPE_5__* openupval; int * top; } ;
typedef TYPE_4__ lua_State ;
struct TYPE_17__ {int * v; } ;
struct TYPE_12__ {int * base; } ;
struct TYPE_13__ {TYPE_2__ l; } ;
struct TYPE_16__ {TYPE_3__ u; int * func; int * top; struct TYPE_16__* previous; } ;
struct TYPE_11__ {TYPE_5__* next; } ;
struct TYPE_15__ {TYPE_1__ gch; } ;
typedef int TValue ;
typedef TYPE_5__ GCObject ;
typedef TYPE_6__ CallInfo ;


 TYPE_8__* FUNC_0 (TYPE_5__*) ;
 scalar_t__ FUNC_1 (TYPE_6__*) ;

__attribute__((used)) static void FUNC_2 (lua_State *VAR_0, TValue *VAR_1) {
  CallInfo *VAR_2;
  GCObject *VAR_3;
  VAR_0->top = (VAR_0->top - VAR_1) + VAR_0->stack;
  for (VAR_3 = VAR_0->openupval; VAR_3 != ((void*)0); VAR_3 = VAR_3->gch.next)
    FUNC_0(VAR_3)->v = (FUNC_0(VAR_3)->v - VAR_1) + VAR_0->stack;
  for (VAR_2 = VAR_0->ci; VAR_2 != ((void*)0); VAR_2 = VAR_2->previous) {
    VAR_2->top = (VAR_2->top - VAR_1) + VAR_0->stack;
    VAR_2->func = (VAR_2->func - VAR_1) + VAR_0->stack;
    if (FUNC_1(VAR_2))
      VAR_2->u.l.base = (VAR_2->u.l.base - VAR_1) + VAR_0->stack;
  }
}
