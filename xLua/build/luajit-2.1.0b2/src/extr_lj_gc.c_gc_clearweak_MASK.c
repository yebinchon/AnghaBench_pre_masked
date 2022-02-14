
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int marked; scalar_t__ asize; scalar_t__ hmask; int gclist; int node; } ;
struct TYPE_6__ {int val; int key; } ;
typedef int TValue ;
typedef TYPE_1__ Node ;
typedef scalar_t__ MSize ;
typedef TYPE_2__ GCtab ;
typedef int GCobj ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (TYPE_2__*,scalar_t__) ;
 scalar_t__ FUNC_1 (int *,int) ;
 TYPE_2__* FUNC_2 (int *) ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 TYPE_1__* FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(GCobj *VAR_2)
{
  while (VAR_2) {
    GCtab *VAR_3 = FUNC_2(VAR_2);
    FUNC_4((VAR_3->marked & VAR_0));
    if ((VAR_3->marked & VAR_1)) {
      MSize VAR_4, VAR_5 = VAR_3->asize;
      for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4++) {

 TValue *VAR_6 = FUNC_0(VAR_3, VAR_4);
 if (FUNC_1(VAR_6, 1))
   FUNC_6(VAR_6);
      }
    }
    if (VAR_3->hmask > 0) {
      Node *VAR_7 = FUNC_5(VAR_3->node);
      MSize VAR_8, VAR_9 = VAR_3->hmask;
      for (VAR_8 = 0; VAR_8 <= VAR_9; VAR_8++) {
 Node *VAR_10 = &VAR_7[VAR_8];

 if (!FUNC_7(&VAR_10->val) && (FUNC_1(&VAR_10->key, 0) ||
      FUNC_1(&VAR_10->val, 1)))
   FUNC_6(&VAR_10->val);
      }
    }
    VAR_2 = FUNC_3(VAR_3->gclist);
  }
}
