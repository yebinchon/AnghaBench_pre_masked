
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int main_table_relid; } ;
typedef scalar_t__ Oid ;
typedef TYPE_1__ Hypertable ;
typedef int Chunk ;


 int FUNC_0 (scalar_t__*,int*) ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__,int) ;
 int VAR_1 ;
 int FUNC_2 (int ,int ,int *) ;
 scalar_t__ FUNC_3 (int ) ;

void
FUNC_4(Hypertable *VAR_2, Chunk *VAR_3)
{
 int VAR_4;
 Oid VAR_5;
 Oid VAR_6 = FUNC_3(VAR_2->main_table_relid);

 FUNC_0(&VAR_5, &VAR_4);

 if (VAR_5 != VAR_6)
  FUNC_1(VAR_6, VAR_4 | VAR_0);

 FUNC_2(VAR_2->main_table_relid, VAR_1, VAR_3);

 if (VAR_5 != VAR_6)
  FUNC_1(VAR_5, VAR_4);
}
