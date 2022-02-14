
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {TYPE_2__* allgc; TYPE_2__* tobefnz; } ;
typedef TYPE_1__ global_State ;
struct TYPE_10__ {int marked; struct TYPE_10__* next; } ;
typedef TYPE_2__ GCObject ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (TYPE_2__*) ;

__attribute__((used)) static GCObject *FUNC_5 (global_State *VAR_1) {
  GCObject *VAR_2 = VAR_1->tobefnz;
  FUNC_1(FUNC_4(VAR_2));
  VAR_1->tobefnz = VAR_2->next;
  VAR_2->next = VAR_1->allgc;
  VAR_1->allgc = VAR_2;
  FUNC_3(VAR_2->marked, VAR_0);
  if (FUNC_0(VAR_1))
    FUNC_2(VAR_1, VAR_2);
  return VAR_2;
}
