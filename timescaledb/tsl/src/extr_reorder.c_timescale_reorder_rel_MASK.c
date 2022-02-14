
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {int indisclustered; } ;
struct TYPE_11__ {TYPE_1__* rd_rel; } ;
struct TYPE_10__ {scalar_t__ relpersistence; scalar_t__ relkind; scalar_t__ relhasoids; scalar_t__ relisshared; } ;
typedef TYPE_2__* Relation ;
typedef int Oid ;
typedef int HeapTuple ;
typedef TYPE_3__* Form_pg_index ;


 int FUNC_0 () ;
 int FUNC_1 (TYPE_2__*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int VAR_5 ;
 scalar_t__ FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,int ) ;
 int VAR_9 ;
 int FUNC_11 (TYPE_2__*,int ,int,int ) ;
 int FUNC_12 (int ,char*) ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (char*) ;
 int FUNC_16 (int ,int ) ;
 int FUNC_17 (TYPE_2__*,int ) ;
 int FUNC_18 (TYPE_2__*,int ,int,int ,int ,int ) ;
 TYPE_2__* FUNC_19 (int ,int ) ;

void
FUNC_20(Oid VAR_10, Oid VAR_11, bool VAR_12, Oid VAR_13,
       Oid VAR_14, Oid VAR_15)
{
 Relation VAR_16;
 HeapTuple VAR_17;
 Form_pg_index VAR_18;

 if (!FUNC_7(VAR_11))
  FUNC_12(VAR_3, "Reorder must specify an index.");


 FUNC_0();







 VAR_16 = FUNC_19(VAR_10, VAR_4);


 if (!VAR_16)
 {
  FUNC_13(VAR_9, (FUNC_14(VAR_2), FUNC_15("table disappeared during reorder.")));
  return;
 }






 if (!FUNC_16(VAR_10, FUNC_3()))
 {
  FUNC_17(VAR_16, VAR_4);
  FUNC_13(VAR_9, (FUNC_14(VAR_2), FUNC_15("ownership change during reorder.")));
  return;
 }

 if (FUNC_5(VAR_16))
  FUNC_13(VAR_3,
    (FUNC_14(VAR_1),
     FUNC_15("cannot reorder a system relation.")));

 if (VAR_16->rd_rel->relpersistence != VAR_8)
  FUNC_13(VAR_3,
    (FUNC_14(VAR_1),
     FUNC_15("can only reorder a permanent table.")));


 if (VAR_16->rd_rel->relisshared)
  FUNC_13(VAR_3,
    (FUNC_14(VAR_1),
     FUNC_15("cannot reorder a shared catalog")));

 if (VAR_16->rd_rel->relkind != VAR_6)
  FUNC_13(VAR_3,
    (FUNC_14(VAR_1), FUNC_15("can only reorder a relation.")));

 if (VAR_16->rd_rel->relhasoids)
  FUNC_13(VAR_3,
    (FUNC_14(VAR_1),
     FUNC_15("cannot reorder a table with OIDs.")));




 if (!FUNC_10(VAR_7, FUNC_6(VAR_11)))
 {
  FUNC_13(VAR_9, (FUNC_14(VAR_2), FUNC_15("index disappeared during reorder")));
  FUNC_17(VAR_16, VAR_4);
  return;
 }




 VAR_17 = FUNC_9(VAR_5, FUNC_6(VAR_11));
 if (!FUNC_4(VAR_17))
 {
  FUNC_13(VAR_9, (FUNC_14(VAR_2), FUNC_15("invalid index heap during reorder")));
  FUNC_17(VAR_16, VAR_4);
  return;
 }
 VAR_18 = (Form_pg_index) FUNC_2(VAR_17);





 if (!VAR_18->indisclustered)
  FUNC_13(VAR_3,
    (FUNC_14(VAR_0), FUNC_15("invalid index heap during reorder")));
 FUNC_8(VAR_17);





 FUNC_1(VAR_16, "CLUSTER");


 FUNC_11(VAR_16, VAR_11, 1, VAR_4);


 FUNC_18(VAR_16,
          VAR_11,
          VAR_12,
          VAR_13,
          VAR_14,
          VAR_15);


}
