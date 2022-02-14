
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_14__ {int compressed_chunk_id; } ;
struct TYPE_18__ {int table_id; TYPE_1__ fd; } ;
struct TYPE_17__ {int * compressed_rel; int * compressed_rte; } ;
struct TYPE_16__ {size_t simple_rel_array_size; int ** simple_rel_array; TYPE_2__* parse; int ** simple_rte_array; int ** append_rel_array; } ;
struct TYPE_15__ {int rtable; } ;
typedef int RelOptInfo ;
typedef int RangeTblEntry ;
typedef TYPE_3__ PlannerInfo ;
typedef int Oid ;
typedef size_t Index ;
typedef TYPE_4__ CompressionInfo ;
typedef TYPE_5__ Chunk ;
typedef int AppendRelInfo ;


 int VAR_0 ;
 int * VAR_1 ;
 int * FUNC_0 (TYPE_3__*,size_t,int *) ;
 int FUNC_1 (TYPE_3__*,TYPE_4__*) ;
 int FUNC_2 (int *,TYPE_4__*,int) ;
 int * FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int *) ;
 void* FUNC_5 (int **,int) ;
 TYPE_5__* FUNC_6 (int ,int ,int) ;

__attribute__((used)) static void
FUNC_7(PlannerInfo *VAR_2, CompressionInfo *VAR_3, Chunk *VAR_4,
         RelOptInfo *VAR_5, bool VAR_6)
{
 Index VAR_7 = VAR_2->simple_rel_array_size;
 Chunk *VAR_8 = FUNC_6(VAR_4->fd.compressed_chunk_id, 0, 1);
 Oid VAR_9 = VAR_8->table_id;
 RelOptInfo *VAR_10;

 VAR_2->simple_rel_array_size++;
 VAR_2->simple_rel_array =
  FUNC_5(VAR_2->simple_rel_array, VAR_2->simple_rel_array_size * sizeof(RelOptInfo *));
 VAR_2->simple_rte_array =
  FUNC_5(VAR_2->simple_rte_array, VAR_2->simple_rel_array_size * sizeof(RangeTblEntry *));






 VAR_3->compressed_rte = FUNC_3(VAR_9, VAR_0);
 VAR_2->simple_rte_array[VAR_7] = VAR_3->compressed_rte;

 VAR_2->parse->rtable = FUNC_4(VAR_2->parse->rtable, VAR_3->compressed_rte);

 VAR_2->simple_rel_array[VAR_7] = ((void*)0);




 VAR_10 = FUNC_0(VAR_2, VAR_7, ((void*)0));


 VAR_2->simple_rel_array[VAR_7] = VAR_10;
 VAR_3->compressed_rel = VAR_10;

 FUNC_2(VAR_10, VAR_3, VAR_6);
 FUNC_1(VAR_2, VAR_3);
}
