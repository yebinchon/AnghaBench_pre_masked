
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_7__ {int szOsFile; int mxPathname; } ;
typedef TYPE_1__ sqlite3_vfs ;
typedef char sqlite3_file ;
typedef int i64 ;
struct TYPE_8__ {TYPE_1__* pVfs; } ;
typedef TYPE_2__ Pager ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,char*,int) ;
 char* FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (TYPE_1__*,char*,int ,int*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (TYPE_1__*,char const*,int ) ;
 int FUNC_8 (char*,int*) ;
 int FUNC_9 (TYPE_1__*,char const*,char*,int const,int ) ;
 int FUNC_10 (char*,char*,int,int ) ;
 scalar_t__ FUNC_11 (char*) ;
 int FUNC_12 (char*) ;
 scalar_t__ FUNC_13 (char*,char const*) ;

__attribute__((used)) static int FUNC_14(Pager *VAR_6, const char *VAR_7){
  sqlite3_vfs *VAR_8 = VAR_6->pVfs;
  int VAR_9;
  sqlite3_file *VAR_10;
  sqlite3_file *VAR_11;
  char *VAR_12 = 0;
  i64 VAR_13;
  char *VAR_14;
  char *VAR_15;
  int VAR_16;




  VAR_10 = (sqlite3_file *)FUNC_4(VAR_8->szOsFile * 2);
  VAR_11 = (sqlite3_file *)(((u8 *)VAR_10) + VAR_8->szOsFile);
  if( !VAR_10 ){
    VAR_9 = VAR_1;
  }else{
    const int VAR_17 = (VAR_5|VAR_4);
    VAR_9 = FUNC_9(VAR_8, VAR_7, VAR_10, VAR_17, 0);
  }
  if( VAR_9!=VAR_2 ) goto delmaster_out;






  VAR_9 = FUNC_8(VAR_10, &VAR_13);
  if( VAR_9!=VAR_2 ) goto delmaster_out;
  VAR_16 = VAR_8->mxPathname+1;
  VAR_12 = FUNC_3(VAR_13 + VAR_16 + 1);
  if( !VAR_12 ){
    VAR_9 = VAR_1;
    goto delmaster_out;
  }
  VAR_15 = &VAR_12[VAR_13+1];
  VAR_9 = FUNC_10(VAR_10, VAR_12, (int)VAR_13, 0);
  if( VAR_9!=VAR_2 ) goto delmaster_out;
  VAR_12[VAR_13] = 0;

  VAR_14 = VAR_12;
  while( (VAR_14-VAR_12)<VAR_13 ){
    int VAR_18;
    VAR_9 = FUNC_5(VAR_8, VAR_14, VAR_0, &VAR_18);
    if( VAR_9!=VAR_2 ){
      goto delmaster_out;
    }
    if( VAR_18 ){




      int VAR_19;
      int VAR_20 = (VAR_5|VAR_3);
      VAR_9 = FUNC_9(VAR_8, VAR_14, VAR_11, VAR_20, 0);
      if( VAR_9!=VAR_2 ){
        goto delmaster_out;
      }

      VAR_9 = FUNC_2(VAR_11, VAR_15, VAR_16);
      FUNC_6(VAR_11);
      if( VAR_9!=VAR_2 ){
        goto delmaster_out;
      }

      VAR_19 = VAR_15[0]!=0 && FUNC_13(VAR_15, VAR_7)==0;
      if( VAR_19 ){

        goto delmaster_out;
      }
    }
    VAR_14 += (FUNC_11(VAR_14)+1);
  }

  FUNC_6(VAR_10);
  VAR_9 = FUNC_7(VAR_8, VAR_7, 0);

delmaster_out:
  FUNC_12(VAR_12);
  if( VAR_10 ){
    FUNC_6(VAR_10);
    FUNC_0( !FUNC_1(VAR_11) );
    FUNC_12(VAR_10);
  }
  return VAR_9;
}
