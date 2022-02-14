
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int sqlite3_int64 ;
struct TYPE_2__ {int alarmThreshold; int nearlyFull; int mutex; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int) ;

sqlite3_int64 FUNC_6(sqlite3_int64 VAR_2){
  sqlite3_int64 VAR_3;
  sqlite3_int64 VAR_4;
  sqlite3_int64 VAR_5;

  int VAR_6 = FUNC_1();
  if( VAR_6 ) return -1;

  FUNC_3(VAR_1);
  VAR_3 = VAR_1;
  if( VAR_2<0 ){
    FUNC_4(VAR_1);
    return VAR_3;
  }
  VAR_1 = VAR_2;
  VAR_5 = FUNC_0(VAR_0);
  VAR_1 = (VAR_2>0 && VAR_2<=VAR_5);
  FUNC_4(VAR_1);
  VAR_4 = FUNC_2() - VAR_2;
  if( VAR_4>0 ) FUNC_5((int)(VAR_4 & 0x7fffffff));
  return VAR_3;
}
