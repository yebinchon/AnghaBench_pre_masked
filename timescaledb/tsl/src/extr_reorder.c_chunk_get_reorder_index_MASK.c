
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int table_id; } ;
struct TYPE_7__ {int main_table_relid; } ;
typedef int Oid ;
typedef TYPE_1__ Hypertable ;
typedef int ChunkIndexMapping ;
typedef TYPE_2__ Chunk ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*,int ,int *) ;
 int FUNC_2 (TYPE_2__*,int ,int *) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static bool
FUNC_4(Hypertable *VAR_0, Chunk *VAR_1, Oid VAR_2, ChunkIndexMapping *VAR_3)
{




 if (FUNC_0(VAR_2))
 {
  if (FUNC_2(VAR_1, VAR_2, VAR_3))
   return 1;

  return FUNC_1(VAR_1, VAR_2, VAR_3);
 }

 VAR_2 = FUNC_3(VAR_1->table_id);
 if (FUNC_0(VAR_2))
  return FUNC_2(VAR_1, VAR_2, VAR_3);

 VAR_2 = FUNC_3(VAR_0->main_table_relid);
 if (FUNC_0(VAR_2))
  return FUNC_1(VAR_1, VAR_2, VAR_3);

 return 0;
}
