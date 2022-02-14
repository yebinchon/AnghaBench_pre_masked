
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int ptrdiff_t ;
struct TYPE_10__ {int sb; } ;
struct TYPE_9__ {scalar_t__ asize; scalar_t__ hmask; int node; int array; } ;
struct TYPE_8__ {int val; int key; } ;
typedef int TValue ;
typedef TYPE_1__ Node ;
typedef size_t MSize ;
typedef TYPE_2__ GCtab ;
typedef TYPE_3__ BCWriteCtx ;


 int FUNC_0 (TYPE_3__*,int *,int) ;
 char* FUNC_1 (char*,size_t) ;
 TYPE_1__* FUNC_2 (int ) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(BCWriteCtx *VAR_0, char *VAR_1, const GCtab *VAR_2)
{
  MSize VAR_3 = 0, VAR_4 = 0;
  if (VAR_2->asize > 0) {
    ptrdiff_t VAR_5;
    TValue *VAR_6 = FUNC_5(VAR_2->array);
    for (VAR_5 = (ptrdiff_t)VAR_2->asize-1; VAR_5 >= 0; VAR_5--)
      if (!FUNC_4(&VAR_6[VAR_5]))
 break;
    VAR_3 = (MSize)(VAR_5+1);
  }
  if (VAR_2->hmask > 0) {
    MSize VAR_7, VAR_8 = VAR_2->hmask;
    Node *VAR_9 = FUNC_2(VAR_2->node);
    for (VAR_7 = 0; VAR_7 <= VAR_8; VAR_7++)
      VAR_4 += !FUNC_4(&VAR_9[VAR_7].val);
  }

  VAR_1 = FUNC_1(VAR_1, VAR_3);
  VAR_1 = FUNC_1(VAR_1, VAR_4);
  FUNC_3(&VAR_0->sb, VAR_1);
  if (VAR_3) {
    MSize VAR_10;
    TValue *VAR_11 = FUNC_5(VAR_2->array);
    for (VAR_10 = 0; VAR_10 < VAR_3; VAR_10++, VAR_11++)
      FUNC_0(VAR_0, VAR_11, 1);
  }
  if (VAR_4) {
    MSize VAR_12 = VAR_4;
    Node *VAR_13 = FUNC_2(VAR_2->node) + VAR_2->hmask;
    for (;; VAR_13--)
      if (!FUNC_4(&VAR_13->val)) {
 FUNC_0(VAR_0, &VAR_13->key, 0);
 FUNC_0(VAR_0, &VAR_13->val, 1);
 if (--VAR_12 == 0) break;
      }
  }
}
