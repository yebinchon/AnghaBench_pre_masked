
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int Var ;
typedef int TargetEntry ;
struct TYPE_14__ {TYPE_1__* compressed_rel; TYPE_6__* ht_rte; TYPE_6__* compressed_rte; TYPE_6__* chunk_rte; int hypertable_compression_info; } ;
struct TYPE_13__ {int relid; } ;
struct TYPE_12__ {int type_oid; } ;
struct TYPE_11__ {int varattno_map; TYPE_7__* info; } ;
struct TYPE_10__ {scalar_t__ algo_id; } ;
struct TYPE_9__ {int relid; } ;
typedef TYPE_2__ FormData_hypertable_compression ;
typedef int Expr ;
typedef TYPE_3__ DecompressChunkPath ;
typedef int AttrNumber ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 char* FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,int ) ;
 TYPE_2__* FUNC_4 (int ,char*) ;
 int FUNC_5 (TYPE_7__*,int ) ;
 int FUNC_6 (TYPE_6__*,int ) ;
 int FUNC_7 (int ,int ) ;
 int * FUNC_8 (int *,int,int *,int) ;
 int * FUNC_9 (int ,int ,int ,int,int ,int ) ;
 TYPE_4__* FUNC_10 (int ) ;

__attribute__((used)) static TargetEntry *
FUNC_11(DecompressChunkPath *VAR_1, AttrNumber VAR_2, int VAR_3)
{
 Var *VAR_4;
 char *VAR_5 = FUNC_1(VAR_1->info->ht_rte->relid, VAR_2, 0);
 FormData_hypertable_compression *VAR_6 =
  FUNC_4(VAR_1->info->hypertable_compression_info, VAR_5);
 AttrNumber VAR_7 = FUNC_5(VAR_1->info, VAR_2);
 AttrNumber VAR_8 = FUNC_2(VAR_1->info->chunk_rte->relid, VAR_5);

 FUNC_0(!FUNC_6(VAR_1->info->ht_rte, VAR_2));
 FUNC_0(!FUNC_6(VAR_1->info->chunk_rte, VAR_8));
 FUNC_0(!FUNC_6(VAR_1->info->compressed_rte, VAR_7));

 if (VAR_6->algo_id == 0)
  VAR_4 = FUNC_9(VAR_1->info->compressed_rel->relid,
         VAR_7,
         FUNC_3(VAR_1->info->ht_rte->relid, VAR_2),
         -1,
         0,
         0);
 else
  VAR_4 = FUNC_9(VAR_1->info->compressed_rel->relid,
         VAR_7,
         FUNC_10(VAR_0)->type_oid,
         -1,
         0,
         0);
 VAR_1->varattno_map = FUNC_7(VAR_1->varattno_map, VAR_8);

 return FUNC_8((Expr *) VAR_4, VAR_3, ((void*)0), 0);
}
