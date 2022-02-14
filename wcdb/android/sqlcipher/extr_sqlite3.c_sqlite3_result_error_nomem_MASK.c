
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_3__* pOut; int isError; } ;
typedef TYPE_1__ sqlite3_context ;
struct TYPE_7__ {int mutex; } ;
struct TYPE_6__ {TYPE_4__* db; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int ) ;

void FUNC_4(sqlite3_context *VAR_1){
  FUNC_0( FUNC_3(VAR_1->pOut->db->mutex) );
  FUNC_2(VAR_1->pOut);
  VAR_1->isError = VAR_0;
  FUNC_1(VAR_1->pOut->db);
}
