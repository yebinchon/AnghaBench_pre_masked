
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef size_t ptrdiff_t ;
typedef scalar_t__ lua_Number ;
typedef scalar_t__ int32_t ;
struct TYPE_14__ {int L; TYPE_2__* kt; int nkgc; int nkn; } ;
struct TYPE_13__ {int sizekgc; int sizekn; int k; } ;
struct TYPE_12__ {size_t asize; size_t hmask; int node; int array; } ;
struct TYPE_11__ {int key; int val; } ;
typedef int TValue ;
typedef TYPE_1__ Node ;
typedef size_t MSize ;
typedef TYPE_2__ GCtab ;
typedef TYPE_3__ GCproto ;
typedef int GCobj ;
typedef int GCRef ;
typedef TYPE_4__ FuncState ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_4__*,int ,scalar_t__,char*) ;
 int FUNC_1 (TYPE_4__*,int ) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,TYPE_3__*,int *) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int FUNC_6 (int) ;
 TYPE_1__* FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (int ,int *) ;
 int FUNC_10 (int *,scalar_t__) ;
 int FUNC_11 (int ,void*) ;
 int FUNC_12 (int *,scalar_t__) ;
 scalar_t__ FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 scalar_t__ FUNC_16 (int *) ;
 scalar_t__ FUNC_17 (int *) ;
 size_t FUNC_18 (int *) ;
 int * FUNC_19 (int ) ;

__attribute__((used)) static void FUNC_20(FuncState *VAR_2, GCproto *VAR_3, void *VAR_4)
{
  GCtab *VAR_5;
  TValue *VAR_6;
  Node *VAR_7;
  MSize VAR_8, VAR_9;
  FUNC_0(VAR_2, VAR_2->nkn, VAR_0+1, "constants");
  FUNC_0(VAR_2, VAR_2->nkgc, VAR_0+1, "constants");
  FUNC_11(VAR_3->k, VAR_4);
  VAR_3->sizekn = VAR_2->nkn;
  VAR_3->sizekgc = VAR_2->nkgc;
  VAR_5 = VAR_2->kt;
  VAR_6 = FUNC_19(VAR_5->array);
  for (VAR_8 = 0; VAR_8 < VAR_5->asize; VAR_8++)
    if (FUNC_13(&VAR_6[VAR_8])) {
      TValue *VAR_10 = &((TValue *)VAR_4)[FUNC_18(&VAR_6[VAR_8])];
      if (VAR_1)
 FUNC_10(VAR_10, (int32_t)VAR_8);
      else
 FUNC_12(VAR_10, (lua_Number)VAR_8);
    }
  VAR_7 = FUNC_7(VAR_5->node);
  VAR_9 = VAR_5->hmask;
  for (VAR_8 = 0; VAR_8 <= VAR_9; VAR_8++) {
    Node *VAR_11 = &VAR_7[VAR_8];
    if (FUNC_13(&VAR_11->val)) {
      ptrdiff_t VAR_12 = (ptrdiff_t)FUNC_18(&VAR_11->val);
      FUNC_6(!FUNC_14(&VAR_11->key));
      if (FUNC_16(&VAR_11->key)) {
 TValue *VAR_13 = &((TValue *)VAR_4)[VAR_12];
 if (VAR_1) {
   lua_Number VAR_14 = FUNC_8(&VAR_11->key);
   int32_t VAR_15 = FUNC_5(VAR_14);
   FUNC_6(!FUNC_15(&VAR_11->key));
   if ((lua_Number)VAR_15 == VAR_14)
     FUNC_10(VAR_13, VAR_15);
   else
     *VAR_13 = VAR_11->key;
 } else {
   *VAR_13 = VAR_11->key;
 }
      } else {
 GCobj *VAR_16 = FUNC_2(&VAR_11->key);
 FUNC_9(((GCRef *)VAR_4)[~VAR_12], VAR_16);
 FUNC_4(VAR_2->L, VAR_3, VAR_16);
 if (FUNC_17(&VAR_11->key))
   FUNC_1(VAR_2, FUNC_3(VAR_16));
      }
    }
  }
}
