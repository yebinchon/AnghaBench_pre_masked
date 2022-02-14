
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ hypertable_id; scalar_t__ compressed_chunk_id; int id; } ;
struct TYPE_14__ {TYPE_2__ fd; int table_id; } ;
struct TYPE_11__ {scalar_t__ id; int compressed_hypertable_id; } ;
struct TYPE_13__ {int main_table_relid; TYPE_1__ fd; } ;
typedef int Oid ;
typedef TYPE_3__ Hypertable ;
typedef TYPE_4__ Chunk ;
typedef int Cache ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 () ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (int ,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*,...) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 () ;
 int FUNC_12 (TYPE_4__*,int ,int) ;
 TYPE_4__* FUNC_13 (scalar_t__,int ,int) ;
 TYPE_4__* FUNC_14 (int ,int ,int) ;
 int FUNC_15 (TYPE_4__*,scalar_t__,int) ;
 int FUNC_16 (int ) ;
 TYPE_3__* FUNC_17 (int *,int ) ;
 int * FUNC_18 () ;
 TYPE_3__* FUNC_19 (int ) ;
 int FUNC_20 (int ,int ) ;

__attribute__((used)) static bool
FUNC_21(Oid VAR_11, Oid VAR_12,
       bool VAR_13)
{
 Cache *VAR_14 = FUNC_18();
 Hypertable *VAR_15 =
  FUNC_17(VAR_14, VAR_11);
 Hypertable *VAR_16;
 Chunk *VAR_17;
 Chunk *VAR_18;

 if (VAR_15 == ((void*)0))
  FUNC_6(VAR_6,
    (FUNC_7(VAR_5),
     FUNC_8("table \"%s\" is not a hypertable",
      FUNC_9(VAR_11))));

 FUNC_20(VAR_15->main_table_relid, FUNC_0());

 VAR_16 =
  FUNC_19(VAR_15->fd.compressed_hypertable_id);
 if (VAR_16 == ((void*)0))
  FUNC_6(VAR_6, (FUNC_7(VAR_3), FUNC_8("missing compressed hypertable")));

 VAR_17 = FUNC_14(VAR_12, 0, 1);
 if (VAR_17 == ((void*)0))
  FUNC_6(VAR_6,
    (FUNC_7(VAR_4),
     FUNC_8("table \"%s\" is not a chunk", FUNC_9(VAR_12))));

 if (VAR_17->fd.hypertable_id != VAR_15->fd.id)
  FUNC_5(VAR_6, "hypertable and chunk do not match");

 if (VAR_17->fd.compressed_chunk_id == VAR_8)
 {
  FUNC_10(VAR_14);
  FUNC_6((VAR_13 ? VAR_9 : VAR_6),
    (FUNC_7(VAR_4),
     FUNC_8("chunk \"%s\" is not compressed", FUNC_9(VAR_12))));
  return 0;
 }

 VAR_18 = FUNC_13(VAR_17->fd.compressed_chunk_id, 0, 1);


 FUNC_1(VAR_15->main_table_relid, VAR_0);
 FUNC_1(VAR_16->main_table_relid, VAR_0);
 FUNC_1(VAR_17->table_id, VAR_0);


 FUNC_1(FUNC_2(FUNC_11(), VAR_7),
     VAR_0);
 FUNC_1(FUNC_2(FUNC_11(), VAR_1), VAR_10);

 FUNC_3(VAR_17->table_id);
 FUNC_4(VAR_18->table_id, VAR_17->table_id);
 FUNC_16(VAR_17->fd.id);
 FUNC_15(VAR_17, VAR_8, 1);
 FUNC_12(VAR_18, VAR_2, -1);

 FUNC_10(VAR_14);
 return 1;
}
