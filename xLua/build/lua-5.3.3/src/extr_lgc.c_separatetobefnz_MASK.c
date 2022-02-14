
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int tobefnz; TYPE_2__* finobj; } ;
typedef TYPE_1__ global_State ;
struct TYPE_8__ {struct TYPE_8__* next; } ;
typedef TYPE_2__ GCObject ;


 TYPE_2__** FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_4 (global_State *VAR_0, int VAR_1) {
  GCObject *VAR_2;
  GCObject **VAR_3 = &VAR_0->finobj;
  GCObject **VAR_4 = FUNC_0(&VAR_0->tobefnz);
  while ((VAR_2 = *VAR_3) != ((void*)0)) {
    FUNC_2(FUNC_3(VAR_2));
    if (!(FUNC_1(VAR_2) || VAR_1))
      VAR_3 = &VAR_2->next;
    else {
      *VAR_3 = VAR_2->next;
      VAR_2->next = *VAR_4;
      *VAR_4 = VAR_2;
      VAR_4 = &VAR_2->next;
    }
  }
}
