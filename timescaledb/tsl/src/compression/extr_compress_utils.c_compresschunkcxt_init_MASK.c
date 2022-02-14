
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {int * srcht_chunk; TYPE_3__* compress_ht; TYPE_3__* srcht; } ;
struct TYPE_9__ {int compressed_hypertable_id; } ;
struct TYPE_11__ {TYPE_2__* space; int main_table_relid; TYPE_1__ fd; } ;
struct TYPE_10__ {int num_dimensions; } ;
typedef int Oid ;
typedef TYPE_3__ Hypertable ;
typedef TYPE_4__ CompressChunkCxt ;
typedef int Chunk ;
typedef int Cache ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (int ) ;
 int * FUNC_7 (int ,int ,int) ;
 TYPE_3__* FUNC_8 (int *,int ) ;
 TYPE_3__* FUNC_9 (int ) ;
 int FUNC_10 (int ,int ) ;

__attribute__((used)) static void
FUNC_11(CompressChunkCxt *VAR_4, Cache *VAR_5, Oid VAR_6, Oid VAR_7)
{
 Hypertable *VAR_8 = FUNC_8(VAR_5, VAR_6);
 Hypertable *VAR_9;
 Chunk *VAR_10;
 if (VAR_8 == ((void*)0))
  FUNC_2(VAR_3,
    (FUNC_3(VAR_2),
     FUNC_5("table \"%s\" is not a hypertable", FUNC_6(VAR_6))));
 FUNC_10(VAR_8->main_table_relid, FUNC_0());
 if (!FUNC_1(VAR_8))
 {
  FUNC_2(VAR_3,
    (FUNC_3(VAR_0),
     FUNC_5("chunks can be compressed only if compression property is set on the "
      "hypertable"),
     FUNC_4("Use ALTER TABLE with timescaledb.compress option.")));
 }
 VAR_9 = FUNC_9(VAR_8->fd.compressed_hypertable_id);
 if (VAR_9 == ((void*)0))
  FUNC_2(VAR_3, (FUNC_3(VAR_1), FUNC_5("missing compress hypertable")));

 FUNC_10(VAR_9->main_table_relid, FUNC_0());

 if (!VAR_8->space)
  FUNC_2(VAR_3,
    (FUNC_3(VAR_1), FUNC_5("missing hyperspace for hypertable")));

 VAR_10 = FUNC_7(VAR_7, VAR_8->space->num_dimensions, 1);
 VAR_4->srcht = VAR_8;
 VAR_4->compress_ht = VAR_9;
 VAR_4->srcht_chunk = VAR_10;
 return;
}
