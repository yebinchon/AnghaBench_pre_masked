
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int main_table_relid; } ;
typedef int List ;
typedef int LOCKMODE ;
typedef int HypertableRestrictInfo ;
typedef TYPE_1__ Hypertable ;


 int * FUNC_0 (int ,int ) ;
 int * FUNC_1 (int *,TYPE_1__*,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static List *
FUNC_3(HypertableRestrictInfo *VAR_0, Hypertable *VAR_1, LOCKMODE VAR_2)
{




 if (!FUNC_2(VAR_0))
  return FUNC_0(VAR_1->main_table_relid, VAR_2);







 return FUNC_1(VAR_0, VAR_1, VAR_2);
}
