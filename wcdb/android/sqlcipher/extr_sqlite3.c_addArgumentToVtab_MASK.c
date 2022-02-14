
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int sqlite3 ;
struct TYPE_4__ {int n; scalar_t__ z; } ;
struct TYPE_5__ {scalar_t__ pNewTable; int * db; TYPE_1__ sArg; } ;
typedef TYPE_2__ Parse ;


 int FUNC_0 (int *,scalar_t__,int ) ;
 int FUNC_1 (int *,char const*,int) ;

__attribute__((used)) static void FUNC_2(Parse *VAR_0){
  if( VAR_0->sArg.z && VAR_0->pNewTable ){
    const char *VAR_1 = (const char*)VAR_0->sArg.z;
    int VAR_2 = VAR_0->sArg.n;
    sqlite3 *VAR_3 = VAR_0->db;
    FUNC_0(VAR_3, VAR_0->pNewTable, FUNC_1(VAR_3, VAR_1, VAR_2));
  }
}
