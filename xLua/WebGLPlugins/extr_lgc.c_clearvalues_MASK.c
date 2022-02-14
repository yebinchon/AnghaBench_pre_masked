
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int global_State ;
struct TYPE_5__ {unsigned int sizearray; int * array; int * gclist; } ;
typedef TYPE_1__ Table ;
typedef int TValue ;
typedef int Node ;
typedef int GCObject ;


 TYPE_1__* FUNC_0 (int *) ;
 int * FUNC_1 (TYPE_1__*,int ) ;
 int * FUNC_2 (TYPE_1__*) ;
 int * FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8 (global_State *VAR_0, GCObject *VAR_1, GCObject *VAR_2) {
  for (; VAR_1 != VAR_2; VAR_1 = FUNC_0(VAR_1)->gclist) {
    Table *VAR_3 = FUNC_0(VAR_1);
    Node *VAR_4, *VAR_5 = FUNC_2(VAR_3);
    unsigned int VAR_6;
    for (VAR_6 = 0; VAR_6 < VAR_3->sizearray; VAR_6++) {
      TValue *VAR_7 = &VAR_3->array[VAR_6];
      if (FUNC_4(VAR_0, VAR_7))
        FUNC_6(VAR_7);
    }
    for (VAR_4 = FUNC_1(VAR_3, 0); VAR_4 < VAR_5; VAR_4++) {
      if (!FUNC_7(FUNC_3(VAR_4)) && FUNC_4(VAR_0, FUNC_3(VAR_4))) {
        FUNC_6(FUNC_3(VAR_4));
        FUNC_5(VAR_4);
      }
    }
  }
}
