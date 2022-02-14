
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint16 ;
typedef int int32 ;
struct TYPE_4__ {scalar_t__ num_dimensions; int capacity; int main_table_relid; int hypertable_id; } ;
typedef int Oid ;
typedef int MemoryContext ;
typedef TYPE_1__ Hyperspace ;


 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (int ,int ) ;

__attribute__((used)) static Hyperspace *
FUNC_2(int32 VAR_0, Oid VAR_1, uint16 VAR_2,
      MemoryContext VAR_3)
{
 Hyperspace *VAR_4 = FUNC_1(VAR_3, FUNC_0(VAR_2));

 VAR_4->hypertable_id = VAR_0;
 VAR_4->main_table_relid = VAR_1;
 VAR_4->capacity = VAR_2;
 VAR_4->num_dimensions = 0;
 return VAR_4;
}
