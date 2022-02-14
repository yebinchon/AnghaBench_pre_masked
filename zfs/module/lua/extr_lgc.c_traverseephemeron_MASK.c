
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ gcstate; int grayagain; int allweak; int ephemeron; } ;
typedef TYPE_1__ global_State ;
struct TYPE_11__ {int sizearray; int * array; } ;
typedef TYPE_2__ Table ;
typedef int Node ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (TYPE_2__*,int ) ;
 int * FUNC_4 (TYPE_2__*) ;
 int * FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (TYPE_1__*,int ) ;
 int FUNC_7 (TYPE_2__*,int *) ;
 int FUNC_8 (TYPE_1__*,int ) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int *) ;

__attribute__((used)) static int FUNC_12 (global_State *VAR_1, Table *VAR_2) {
  int VAR_3 = 0;
  int VAR_4 = 0;
  int VAR_5 = 0;
  Node *VAR_6, *VAR_7 = FUNC_4(VAR_2);
  int VAR_8;

  for (VAR_8 = 0; VAR_8 < VAR_2->sizearray; VAR_8++) {
    if (FUNC_11(&VAR_2->array[VAR_8])) {
      VAR_3 = 1;
      FUNC_8(VAR_1, FUNC_1(&VAR_2->array[VAR_8]));
    }
  }

  for (VAR_6 = FUNC_3(VAR_2, 0); VAR_6 < VAR_7; VAR_6++) {
    FUNC_0(VAR_6);
    if (FUNC_10(FUNC_5(VAR_6)))
      FUNC_9(VAR_6);
    else if (FUNC_6(VAR_1, FUNC_2(VAR_6))) {
      VAR_4 = 1;
      if (FUNC_11(FUNC_5(VAR_6)))
        VAR_5 = 1;
    }
    else if (FUNC_11(FUNC_5(VAR_6))) {
      VAR_3 = 1;
      FUNC_8(VAR_1, FUNC_1(FUNC_5(VAR_6)));
    }
  }
  if (VAR_1->gcstate != VAR_0 || VAR_5)
    FUNC_7(VAR_2, &VAR_1->ephemeron);
  else if (VAR_4)
    FUNC_7(VAR_2, &VAR_1->allweak);
  else
    FUNC_7(VAR_2, &VAR_1->grayagain);
  return VAR_3;
}
