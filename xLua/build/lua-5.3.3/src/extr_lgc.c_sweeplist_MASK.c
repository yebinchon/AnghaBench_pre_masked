
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int lua_State ;
typedef int lu_mem ;
typedef int global_State ;
struct TYPE_5__ {int marked; struct TYPE_5__* next; } ;
typedef TYPE_1__ GCObject ;


 int * FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,TYPE_1__*) ;
 scalar_t__ FUNC_3 (int,int) ;
 int FUNC_4 (int *) ;
 int VAR_0 ;
 int FUNC_5 (int *) ;

__attribute__((used)) static GCObject **FUNC_6 (lua_State *VAR_1, GCObject **VAR_2, lu_mem VAR_3) {
  global_State *VAR_4 = FUNC_0(VAR_1);
  int VAR_5 = FUNC_5(VAR_4);
  int VAR_6 = FUNC_4(VAR_4);
  while (*VAR_2 != ((void*)0) && VAR_3-- > 0) {
    GCObject *VAR_7 = *VAR_2;
    int VAR_8 = VAR_7->marked;
    if (FUNC_3(VAR_5, VAR_8)) {
      *VAR_2 = VAR_7->next;
      FUNC_2(VAR_1, VAR_7);
    }
    else {
      VAR_7->marked = FUNC_1((VAR_8 & VAR_0) | VAR_6);
      VAR_2 = &VAR_7->next;
    }
  }
  return (*VAR_2 == ((void*)0)) ? ((void*)0) : VAR_2;
}
