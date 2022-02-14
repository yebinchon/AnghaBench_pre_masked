
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int sqlite3_value ;
typedef int sqlite3_context ;
struct TYPE_4__ {int flags; } ;
typedef TYPE_1__ sqlite3 ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int *) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (TYPE_1__*,char const*,char const*,char**) ;
 int FUNC_3 (int *,char*,int) ;
 scalar_t__ FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(sqlite3_context *VAR_1, int VAR_2, sqlite3_value **VAR_3){
  const char *VAR_4 = (const char *)FUNC_4(VAR_3[0]);
  const char *VAR_5;
  sqlite3 *VAR_6 = FUNC_0(VAR_1);
  char *VAR_7 = 0;




  if( (VAR_6->flags & VAR_0)==0 ){
    FUNC_3(VAR_1, "not authorized", -1);
    return;
  }

  if( VAR_2==2 ){
    VAR_5 = (const char *)FUNC_4(VAR_3[1]);
  }else{
    VAR_5 = 0;
  }
  if( VAR_4 && FUNC_2(VAR_6, VAR_4, VAR_5, &VAR_7) ){
    FUNC_3(VAR_1, VAR_7, -1);
    FUNC_1(VAR_7);
  }
}
