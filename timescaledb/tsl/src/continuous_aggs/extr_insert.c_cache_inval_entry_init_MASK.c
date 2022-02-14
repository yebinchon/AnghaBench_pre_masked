
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int int32 ;
struct TYPE_8__ {int * partitioning; } ;
struct TYPE_7__ {int greatest_modified_value; int lowest_modified_value; int previous_chunk_relid; TYPE_4__ hypertable_open_dimension; int hypertable_relid; } ;
struct TYPE_6__ {int space; int main_table_relid; } ;
typedef int PartitioningInfo ;
typedef TYPE_1__ Hypertable ;
typedef TYPE_2__ ContinuousAggsCacheInvalEntry ;
typedef int Cache ;


 int VAR_0 ;
 int * FUNC_0 (int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_4__* FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;
 TYPE_1__* FUNC_3 (int *,int ) ;
 int * FUNC_4 () ;

__attribute__((used)) static inline void
FUNC_5(ContinuousAggsCacheInvalEntry *VAR_4, int32 VAR_5)
{
 Cache *VAR_6 = FUNC_4();


 Hypertable *VAR_7 = FUNC_3(VAR_6, VAR_5);
 VAR_4->hypertable_relid = VAR_7->main_table_relid;
 VAR_4->hypertable_open_dimension = *FUNC_1(VAR_7->space, 0);
 if (VAR_4->hypertable_open_dimension.partitioning != ((void*)0))
 {
  PartitioningInfo *VAR_8 =
   FUNC_0(VAR_3, sizeof(*VAR_8));
  *VAR_8 = *VAR_4->hypertable_open_dimension.partitioning;
  VAR_4->hypertable_open_dimension.partitioning = VAR_8;
 }
 VAR_4->previous_chunk_relid = VAR_0;
 VAR_4->lowest_modified_value = VAR_1;
 VAR_4->greatest_modified_value = VAR_2;
 FUNC_2(VAR_6);
}
