
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int int32 ;
struct TYPE_8__ {int id; } ;
struct TYPE_11__ {TYPE_2__ fd; } ;
struct TYPE_9__ {scalar_t__ max_chunks; int indexinfo; int ht_hasoid; int n_ht_atts; int barrier_table; int multitransaction; } ;
struct TYPE_7__ {int objectId; } ;
struct TYPE_10__ {TYPE_3__ extended_options; int main_table_relid; TYPE_1__ obj; } ;
typedef int Relation ;
typedef int Oid ;
typedef TYPE_4__ CreateIndexInfo ;
typedef TYPE_5__ Chunk ;
typedef int CatalogSecurityContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int VAR_3 ;
 int FUNC_7 () ;
 scalar_t__ FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ,int ,int ,int ) ;
 int FUNC_12 (int ,int *) ;
 int FUNC_13 () ;
 int FUNC_14 (int *) ;
 TYPE_5__* FUNC_15 (int ,int ,int) ;
 int FUNC_16 (int ,int ,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_17(int32 VAR_4, Oid VAR_5, void *VAR_6)
{
 CreateIndexInfo *VAR_7 = (CreateIndexInfo *) VAR_6;
 CatalogSecurityContext VAR_8;
 Chunk *VAR_9;
 Relation VAR_10;
 Relation VAR_11;

 FUNC_0(VAR_7->extended_options.multitransaction);


 FUNC_7();
 FUNC_5(FUNC_2());
 FUNC_12(FUNC_13(), &VAR_8);
 VAR_11 = FUNC_10(VAR_5, VAR_3);
 VAR_10 = FUNC_10(VAR_7->obj.objectId, VAR_1);

 VAR_9 = FUNC_15(VAR_5, 0, 1);







 if (FUNC_8(VAR_7->extended_options.n_ht_atts,
         VAR_7->extended_options.ht_hasoid,
         FUNC_6(VAR_11)))
  FUNC_11(VAR_7->extended_options.indexinfo,
           VAR_7->main_table_relid,
           VAR_10,
           VAR_11);

 FUNC_16(VAR_4,
               VAR_10,
               VAR_9->fd.id,
               VAR_11,
               VAR_7->extended_options.indexinfo);

 FUNC_9(VAR_10, VAR_2);
 FUNC_9(VAR_11, VAR_2);

 FUNC_14(&VAR_8);

 FUNC_4();
 FUNC_1();
}
