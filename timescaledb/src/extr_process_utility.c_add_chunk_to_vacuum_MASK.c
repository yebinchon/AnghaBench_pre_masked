
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int VacuumRelation ;
struct TYPE_15__ {int chunk_rels; TYPE_2__* ht_vacuum_rel; } ;
typedef TYPE_4__ VacuumCtx ;
struct TYPE_12__ {int schema_name; int table_name; } ;
struct TYPE_18__ {TYPE_1__ fd; } ;
struct TYPE_17__ {TYPE_3__* space; } ;
struct TYPE_16__ {void* schemaname; void* relname; } ;
struct TYPE_14__ {int num_dimensions; } ;
struct TYPE_13__ {int va_cols; int relation; } ;
typedef TYPE_5__ RangeVar ;
typedef int Oid ;
typedef TYPE_6__ Hypertable ;
typedef TYPE_7__ Chunk ;


 void* FUNC_0 (int ) ;
 TYPE_5__* FUNC_1 (int ) ;
 int FUNC_2 (int ,int *) ;
 int * FUNC_3 (TYPE_5__*,int ,int ) ;
 TYPE_7__* FUNC_4 (int ,int ,int) ;

__attribute__((used)) static void
FUNC_5(Hypertable *VAR_0, Oid VAR_1, void *VAR_2)
{
 VacuumCtx *VAR_3 = (VacuumCtx *) VAR_2;
 Chunk *VAR_4 = FUNC_4(VAR_1, VAR_0->space->num_dimensions, 1);
 VacuumRelation *VAR_5;
 RangeVar *VAR_6 = FUNC_1(VAR_3->ht_vacuum_rel->relation);

 VAR_6->relname = FUNC_0(VAR_4->fd.table_name);
 VAR_6->schemaname = FUNC_0(VAR_4->fd.schema_name);
 VAR_5 =
  FUNC_3(VAR_6, VAR_1, VAR_3->ht_vacuum_rel->va_cols);

 VAR_3->chunk_rels = FUNC_2(VAR_3->chunk_rels, VAR_5);
}
