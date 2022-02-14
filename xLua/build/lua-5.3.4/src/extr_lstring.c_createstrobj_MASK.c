
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_5__ {unsigned int hash; scalar_t__ extra; } ;
typedef TYPE_1__ TString ;
typedef int GCObject ;


 TYPE_1__* FUNC_0 (int *) ;
 char* FUNC_1 (TYPE_1__*) ;
 int * FUNC_2 (int *,int,size_t) ;
 size_t FUNC_3 (size_t) ;

__attribute__((used)) static TString *FUNC_4 (lua_State *VAR_0, size_t VAR_1, int VAR_2, unsigned int VAR_3) {
  TString *VAR_4;
  GCObject *VAR_5;
  size_t VAR_6;
  VAR_6 = FUNC_3(VAR_1);
  VAR_5 = FUNC_2(VAR_0, VAR_2, VAR_6);
  VAR_4 = FUNC_0(VAR_5);
  VAR_4->hash = VAR_3;
  VAR_4->extra = 0;
  FUNC_1(VAR_4)[VAR_1] = '\0';
  return VAR_4;
}
