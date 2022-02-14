
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {int newowner; } ;
struct TYPE_11__ {int compressed_hypertable_id; } ;
struct TYPE_12__ {int main_table_relid; TYPE_1__ fd; } ;
typedef TYPE_2__ Hypertable ;
typedef TYPE_3__ AlterTableCmd ;


 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,int ,TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*) ;
 int VAR_1 ;
 TYPE_2__* FUNC_6 (int ) ;

__attribute__((used)) static void
FUNC_7(Hypertable *VAR_2, AlterTableCmd *VAR_3)
{
 FUNC_1(FUNC_2(VAR_3->newowner, VAR_0));

 FUNC_4(VAR_2, VAR_1, VAR_3);

 if (FUNC_3(VAR_2))
 {
  Hypertable *VAR_4 =
   FUNC_6(VAR_2->fd.compressed_hypertable_id);
  FUNC_0(VAR_4->main_table_relid, FUNC_5(VAR_3), 0);
  FUNC_7(VAR_4, VAR_3);
 }
}
