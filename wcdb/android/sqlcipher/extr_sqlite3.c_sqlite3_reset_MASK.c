
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int sqlite3_stmt ;
struct TYPE_8__ {int errMask; int mutex; } ;
typedef TYPE_1__ sqlite3 ;
struct TYPE_9__ {TYPE_1__* db; } ;
typedef TYPE_2__ Vdbe ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

int FUNC_7(sqlite3_stmt *VAR_1){
  int VAR_2;
  if( VAR_1==0 ){
    VAR_2 = VAR_0;
  }else{
    Vdbe *VAR_3 = (Vdbe*)VAR_1;
    sqlite3 *VAR_4 = VAR_3->db;
    FUNC_5(VAR_4->mutex);
    FUNC_1(VAR_4, VAR_3);
    VAR_2 = FUNC_3(VAR_3);
    FUNC_4(VAR_3);
    FUNC_0( (VAR_2 & (VAR_4->errMask))==VAR_2 );
    VAR_2 = FUNC_2(VAR_4, VAR_2);
    FUNC_6(VAR_4->mutex);
  }
  return VAR_2;
}
