
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int prev_cis_oid; int * prev_cis; int cache; int cmd_type; int arbiter_indexes; int on_conflict; int * hypertable_result_rel_info; TYPE_2__* estate; TYPE_1__* hypertable; } ;
struct TYPE_9__ {int es_query_cxt; } ;
struct TYPE_8__ {int space; } ;
typedef TYPE_1__ Hypertable ;
typedef TYPE_2__ EState ;
typedef TYPE_3__ ChunkDispatch ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_3__* FUNC_0 (int) ;
 int VAR_4 ;
 int FUNC_1 (int ,int ,int ) ;

ChunkDispatch *
FUNC_2(Hypertable *VAR_5, EState *VAR_6)
{
 ChunkDispatch *VAR_7 = FUNC_0(sizeof(ChunkDispatch));

 VAR_7->hypertable = VAR_5;
 VAR_7->estate = VAR_6;
 VAR_7->hypertable_result_rel_info = ((void*)0);
 VAR_7->on_conflict = VAR_3;
 VAR_7->arbiter_indexes = VAR_2;
 VAR_7->cmd_type = VAR_0;
 VAR_7->cache =
  FUNC_1(VAR_5->space, VAR_6->es_query_cxt, VAR_4);
 VAR_7->prev_cis = ((void*)0);
 VAR_7->prev_cis_oid = VAR_1;

 return VAR_7;
}
