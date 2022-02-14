
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int main_table_relid; } ;
struct TYPE_5__ {int hypertable_list; } ;
typedef TYPE_1__ ProcessUtilityArgs ;
typedef TYPE_2__ Hypertable ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static void
FUNC_1(ProcessUtilityArgs *VAR_0, Hypertable *VAR_1)
{
 VAR_0->hypertable_list = FUNC_0(VAR_0->hypertable_list, VAR_1->main_table_relid);
}
