
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* tobefnz; } ;
typedef TYPE_1__ global_State ;
struct TYPE_7__ {struct TYPE_7__* next; } ;
typedef TYPE_2__ GCObject ;


 int FUNC_0 (TYPE_1__*,TYPE_2__*) ;

__attribute__((used)) static void FUNC_1 (global_State *VAR_0) {
  GCObject *VAR_1;
  for (VAR_1 = VAR_0->tobefnz; VAR_1 != ((void*)0); VAR_1 = VAR_1->next)
    FUNC_0(VAR_0, VAR_1);
}
