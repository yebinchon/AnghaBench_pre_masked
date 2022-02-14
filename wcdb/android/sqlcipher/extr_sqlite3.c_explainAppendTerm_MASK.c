
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int StrAccum ;
typedef int Index ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,char const*,int) ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static void FUNC_4(
  StrAccum *VAR_0,
  Index *VAR_1,
  int VAR_2,
  int VAR_3,
  int VAR_4,
  const char *VAR_5
){
  int VAR_6;

  FUNC_0( VAR_2>=1 );
  if( VAR_4 ) FUNC_2(VAR_0, " AND ", 5);

  if( VAR_2>1 ) FUNC_2(VAR_0, "(", 1);
  for(VAR_6=0; VAR_6<VAR_2; VAR_6++){
    if( VAR_6 ) FUNC_2(VAR_0, ",", 1);
    FUNC_3(VAR_0, FUNC_1(VAR_1, VAR_3+VAR_6));
  }
  if( VAR_2>1 ) FUNC_2(VAR_0, ")", 1);

  FUNC_2(VAR_0, VAR_5, 1);

  if( VAR_2>1 ) FUNC_2(VAR_0, "(", 1);
  for(VAR_6=0; VAR_6<VAR_2; VAR_6++){
    if( VAR_6 ) FUNC_2(VAR_0, ",", 1);
    FUNC_2(VAR_0, "?", 1);
  }
  if( VAR_2>1 ) FUNC_2(VAR_0, ")", 1);
}
