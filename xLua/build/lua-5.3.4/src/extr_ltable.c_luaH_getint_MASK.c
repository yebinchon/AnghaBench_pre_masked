
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int lua_Integer ;
struct TYPE_4__ {int sizearray; int const* array; } ;
typedef TYPE_1__ Table ;
typedef int TValue ;
typedef int Node ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int const* FUNC_2 (int *) ;
 int * FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int) ;
 int const* VAR_0 ;
 scalar_t__ FUNC_6 (int ) ;

const TValue *FUNC_7 (Table *VAR_1, lua_Integer VAR_2) {

  if (FUNC_5(VAR_2) - 1 < VAR_1->sizearray)
    return &VAR_1->array[VAR_2 - 1];
  else {
    Node *VAR_3 = FUNC_3(VAR_1, VAR_2);
    for (;;) {
      if (FUNC_6(FUNC_0(VAR_3)) && FUNC_4(FUNC_0(VAR_3)) == VAR_2)
        return FUNC_2(VAR_3);
      else {
        int VAR_4 = FUNC_1(VAR_3);
        if (VAR_4 == 0) break;
        VAR_3 += VAR_4;
      }
    }
    return VAR_0;
  }
}
