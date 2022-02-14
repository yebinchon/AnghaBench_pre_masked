
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_stmt ;
typedef int sqlite3 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char**,int *,int ) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,char const*,int,int **,int ) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (char const*,char*,int) ;
 scalar_t__ FUNC_8 (char const*,char*,int) ;

__attribute__((used)) static int FUNC_9(sqlite3 *VAR_3, char **VAR_4, const char *VAR_5){
  sqlite3_stmt *VAR_6;
  int VAR_7;


  VAR_7 = FUNC_5(VAR_3, VAR_5, -1, &VAR_6, 0);
  if( VAR_7!=VAR_1 ) return VAR_7;
  while( VAR_2==(VAR_7 = FUNC_6(VAR_6)) ){
    const char *VAR_8 = (const char*)FUNC_2(VAR_6,0);
    FUNC_0( FUNC_7(VAR_5,"SELECT",6)==0 );





    if( VAR_8
     && (FUNC_8(VAR_8,"CRE",3)==0 || FUNC_8(VAR_8,"INS",3)==0)
    ){
      VAR_7 = FUNC_9(VAR_3, VAR_4, VAR_8);
      if( VAR_7!=VAR_1 ) break;
    }
  }
  FUNC_0( VAR_7!=VAR_2 );
  if( VAR_7==VAR_0 ) VAR_7 = VAR_1;
  if( VAR_7 ){
    FUNC_1(VAR_4, VAR_3, FUNC_3(VAR_3));
  }
  (void)FUNC_4(VAR_6);
  return VAR_7;
}
