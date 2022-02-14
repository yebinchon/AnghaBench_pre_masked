
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int db_oid; } ;
struct TYPE_8__ {int state; int db_scheduler_handle; } ;
typedef int HTAB ;
typedef TYPE_1__ DbHashEntry ;
typedef TYPE_2__ BgwMessage ;
typedef int AckResult ;


 int VAR_0 ;
 int VAR_1 ;




 TYPE_1__* FUNC_0 (int *,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static AckResult
FUNC_6(HTAB *VAR_2, BgwMessage *VAR_3)
{
 DbHashEntry *VAR_4;







 VAR_4 = FUNC_0(VAR_2, VAR_3->db_oid);

 switch (VAR_4->state)
 {
  case 129:
   FUNC_2(VAR_4);
   break;
  case 131:
   FUNC_1(VAR_4);
   break;
  case 128:
   FUNC_4(VAR_4->db_scheduler_handle);
   FUNC_5(VAR_4->db_scheduler_handle);
   FUNC_3(VAR_4);
   break;
  case 130:
   break;
 }
 return VAR_4->state == 130 ? VAR_1 : VAR_0;
}
