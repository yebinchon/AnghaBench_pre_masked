
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_6__ {unsigned int sizearray; int * array; } ;
typedef TYPE_1__ Table ;
typedef scalar_t__ StkId ;


 scalar_t__ FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (int *,TYPE_1__*,scalar_t__) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*,unsigned int) ;
 int * FUNC_4 (int ) ;
 int FUNC_5 (scalar_t__,unsigned int) ;
 int FUNC_6 (int *,scalar_t__,int *) ;
 scalar_t__ FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (int *) ;

int FUNC_9 (lua_State *VAR_0, Table *VAR_1, StkId VAR_2) {
  unsigned int VAR_3 = FUNC_1(VAR_0, VAR_1, VAR_2);
  for (; VAR_3 < VAR_1->sizearray; VAR_3++) {
    if (!FUNC_8(&VAR_1->array[VAR_3])) {
      FUNC_5(VAR_2, VAR_3 + 1);
      FUNC_6(VAR_0, VAR_2+1, &VAR_1->array[VAR_3]);
      return 1;
    }
  }
  for (VAR_3 -= VAR_1->sizearray; FUNC_0(VAR_3) < FUNC_7(VAR_1); VAR_3++) {
    if (!FUNC_8(FUNC_4(FUNC_3(VAR_1, VAR_3)))) {
      FUNC_6(VAR_0, VAR_2, FUNC_2(FUNC_3(VAR_1, VAR_3)));
      FUNC_6(VAR_0, VAR_2+1, FUNC_4(FUNC_3(VAR_1, VAR_3)));
      return 1;
    }
  }
  return 0;
}
