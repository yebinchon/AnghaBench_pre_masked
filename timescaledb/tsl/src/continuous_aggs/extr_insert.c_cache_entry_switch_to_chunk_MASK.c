
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_13__ {int table_id; } ;
struct TYPE_9__ {int column_name; } ;
struct TYPE_10__ {TYPE_1__ fd; } ;
struct TYPE_12__ {scalar_t__ previous_chunk_open_dimension; TYPE_2__ hypertable_open_dimension; int previous_chunk_relid; } ;
struct TYPE_11__ {int rd_id; } ;
typedef TYPE_3__* Relation ;
typedef int Oid ;
typedef TYPE_4__ ContinuousAggsCacheInvalEntry ;
typedef TYPE_5__ Chunk ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 TYPE_5__* FUNC_3 (int ,int ,int) ;

__attribute__((used)) static inline void
FUNC_4(ContinuousAggsCacheInvalEntry *VAR_2, Oid VAR_3,
       Relation VAR_4)
{
 Chunk *VAR_5 = FUNC_3(VAR_3, 0, 0);
 if (VAR_5 == ((void*)0))
  FUNC_1(VAR_0, "continuous agg trigger function must be called on hypertable chunks only");

 VAR_2->previous_chunk_relid = VAR_5->table_id;
 VAR_2->previous_chunk_open_dimension =
  FUNC_2(VAR_4->rd_id,
       FUNC_0(VAR_2->hypertable_open_dimension.fd.column_name));

 if (VAR_2->previous_chunk_open_dimension == VAR_1)
  FUNC_1(VAR_0, "continuous agg trigger function must be called on hypertable chunks only");
}
