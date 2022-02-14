
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_value ;
typedef int sqlite3_context ;


 int FUNC_0 (int,int **) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char*,char const*) ;
 int FUNC_3 (int *,char*,int) ;
 scalar_t__ FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(
  sqlite3_context *VAR_0,
  int VAR_1,
  sqlite3_value **VAR_2
){
  const char *VAR_3 = (const char*)FUNC_4(VAR_0);
  char *VAR_4;
  FUNC_0(VAR_1, VAR_2);
  VAR_4 = FUNC_2(
      "unable to use function %s in the requested context", VAR_3);
  FUNC_3(VAR_0, VAR_4, -1);
  FUNC_1(VAR_4);
}
