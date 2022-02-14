
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_38__ TYPE_4__ ;
typedef struct TYPE_37__ TYPE_3__ ;
typedef struct TYPE_36__ TYPE_34__ ;
typedef struct TYPE_35__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_35__ {scalar_t__ u64; } ;
typedef TYPE_1__ cTValue ;
struct TYPE_38__ {scalar_t__ hmask; int node; } ;
struct TYPE_37__ {TYPE_1__ val; TYPE_1__ key; int next; } ;
struct TYPE_36__ {TYPE_3__ nilnode; } ;
typedef TYPE_1__ TValue ;
typedef TYPE_3__ Node ;
typedef TYPE_4__ GCtab ;


 TYPE_34__* FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ) ;
 TYPE_3__* FUNC_2 (TYPE_4__*,TYPE_3__*) ;
 TYPE_3__* FUNC_3 (TYPE_4__*,TYPE_1__*) ;
 TYPE_3__* FUNC_4 (TYPE_4__*,int ) ;
 int FUNC_5 (int *,TYPE_4__*) ;
 TYPE_1__* FUNC_6 (int *,TYPE_4__*,TYPE_1__*) ;
 int FUNC_7 (int) ;
 TYPE_3__* FUNC_8 (TYPE_3__*) ;
 TYPE_3__* FUNC_9 (int ) ;
 int FUNC_10 (int *,TYPE_4__*,TYPE_1__*) ;
 int FUNC_11 (TYPE_4__*,TYPE_3__*,TYPE_3__*) ;
 int FUNC_12 (int ,TYPE_3__*) ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (TYPE_1__*) ;
 int FUNC_15 (TYPE_1__*) ;
 int FUNC_16 (TYPE_1__*) ;
 int FUNC_17 (TYPE_1__*) ;
 scalar_t__ FUNC_18 (TYPE_1__*) ;

TValue *FUNC_19(lua_State *VAR_0, GCtab *VAR_1, cTValue *VAR_2)
{
  Node *VAR_3 = FUNC_3(VAR_1, VAR_2);
  if (!FUNC_17(&VAR_3->val) || VAR_1->hmask == 0) {
    Node *VAR_4 = FUNC_9(VAR_1->node);
    Node *VAR_5, *VAR_6 = FUNC_2(VAR_1, VAR_4);
    FUNC_7(VAR_6 >= VAR_4 && VAR_6 <= VAR_4+VAR_1->hmask+1);
    do {
      if (VAR_6 == VAR_4) {
 FUNC_10(VAR_0, VAR_1, VAR_2);
 return FUNC_6(VAR_0, VAR_1, VAR_2);
      }
    } while (!FUNC_17(&(--VAR_6)->key));
    FUNC_11(VAR_1, VAR_4, VAR_6);
    FUNC_7(VAR_6 != &FUNC_0(VAR_0)->nilnode);
    VAR_5 = FUNC_3(VAR_1, &VAR_3->key);
    if (VAR_5 != VAR_3) {
      while (FUNC_9(VAR_5->next) != VAR_3)
 VAR_5 = FUNC_8(VAR_5);
      FUNC_12(VAR_5->next, VAR_6);

      VAR_6->val = VAR_3->val;
      VAR_6->key = VAR_3->key;
      VAR_6->next = VAR_3->next;
      FUNC_12(VAR_3->next, ((void*)0));
      FUNC_14(&VAR_3->val);

      while (FUNC_8(VAR_6)) {
 Node *VAR_7 = FUNC_8(VAR_6);
 if (FUNC_18(&VAR_7->key) && !FUNC_17(&VAR_7->val) &&
     FUNC_4(VAR_1, FUNC_15(&VAR_7->key)) == VAR_3) {
   VAR_6->next = VAR_7->next;
   VAR_7->next = VAR_3->next;
   FUNC_12(VAR_3->next, VAR_7);
 } else {
   VAR_6 = VAR_7;
 }
      }
    } else {
      FUNC_13(VAR_6->next, VAR_3->next);
      FUNC_12(VAR_3->next, VAR_6);
      VAR_3 = VAR_6;
    }
  }
  VAR_3->key.u64 = VAR_2->u64;
  if (FUNC_1(FUNC_16(&VAR_3->key)))
    VAR_3->key.u64 = 0;
  FUNC_5(VAR_0, VAR_1);
  FUNC_7(FUNC_17(&VAR_3->val));
  return &VAR_3->val;
}
