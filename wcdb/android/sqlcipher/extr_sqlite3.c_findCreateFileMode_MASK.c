
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uid_t ;
typedef int mode_t ;
typedef scalar_t__ gid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char const*,int*,scalar_t__*,scalar_t__*) ;
 int FUNC_1 (char*,char const*,int) ;
 int FUNC_2 (char const*) ;
 char* FUNC_3 (char const*,char*) ;

__attribute__((used)) static int FUNC_4(
  const char *VAR_6,
  int VAR_7,
  mode_t *VAR_8,
  uid_t *VAR_9,
  gid_t *VAR_10
){
  int VAR_11 = VAR_1;
  *VAR_8 = 0;
  *VAR_9 = 0;
  *VAR_10 = 0;
  if( VAR_7 & (VAR_5|VAR_3) ){
    char VAR_12[VAR_0+1];
    int VAR_13;
    VAR_13 = FUNC_2(VAR_6) - 1;
    while( VAR_6[VAR_13]!='-' ){




      if( VAR_13==0 || VAR_6[VAR_13]=='.' ) return VAR_1;
      VAR_13--;
    }
    FUNC_1(VAR_12, VAR_6, VAR_13);
    VAR_12[VAR_13] = '\0';

    VAR_11 = FUNC_0(VAR_12, VAR_8, VAR_9, VAR_10);
  }else if( VAR_7 & VAR_2 ){
    *VAR_8 = 0600;
  }else if( VAR_7 & VAR_4 ){




    const char *VAR_14 = FUNC_3(VAR_6, "modeof");
    if( VAR_14 ){
      VAR_11 = FUNC_0(VAR_14, VAR_8, VAR_9, VAR_10);
  }
  }
  return VAR_11;
}
