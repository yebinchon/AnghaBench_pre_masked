
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int sqlite3_uint64 ;
typedef int sqlite3_stmt ;
struct TYPE_3__ {TYPE_2__* db; } ;
typedef TYPE_1__ Vdbe ;
struct TYPE_4__ {int mutex; scalar_t__* aLimit; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (int *,int,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

int FUNC_5(sqlite3_stmt *VAR_2, int VAR_3, sqlite3_uint64 VAR_4){
  int VAR_5;
  Vdbe *VAR_6 = (Vdbe *)VAR_2;
  FUNC_3(VAR_6->db->mutex);
  if( VAR_4>(u64)VAR_6->db->aLimit[VAR_0] ){
    VAR_5 = VAR_1;
  }else{
    FUNC_0( (VAR_4 & 0x7FFFFFFF)==VAR_4 );
    VAR_5 = FUNC_2(VAR_2, VAR_3, VAR_4);
  }
  VAR_5 = FUNC_1(VAR_6->db, VAR_5);
  FUNC_4(VAR_6->db->mutex);
  return VAR_5;
}
