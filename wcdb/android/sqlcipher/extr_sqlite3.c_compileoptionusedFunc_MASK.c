
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_value ;
typedef int sqlite3_context ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (int *,int ) ;
 scalar_t__ FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(
  sqlite3_context *VAR_0,
  int VAR_1,
  sqlite3_value **VAR_2
){
  const char *VAR_3;
  FUNC_1( VAR_1==1 );
  FUNC_0(VAR_1);




  if( (VAR_3 = (const char*)FUNC_4(VAR_2[0]))!=0 ){
    FUNC_3(VAR_0, FUNC_2(VAR_3));
  }
}
