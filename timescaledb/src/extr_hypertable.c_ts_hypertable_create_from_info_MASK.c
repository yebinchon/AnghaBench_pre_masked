
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint32 ;
typedef int int32 ;
struct TYPE_12__ {scalar_t__ target_size_bytes; int func_name; int func_schema; int func; } ;
struct TYPE_11__ {int adaptive_chunking; int * ht; } ;
typedef int Relation ;
typedef int Oid ;
typedef int NameData ;
typedef int * Name ;
typedef int Hypertable ;
typedef TYPE_1__ DimensionInfo ;
typedef TYPE_2__ ChunkSizingInfo ;
typedef int Cache ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 () ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_3 (int ) ;
 int VAR_13 ;
 scalar_t__ FUNC_4 (int ) ;


 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*,...) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ,int ) ;
 int FUNC_17 (int ,int ) ;
 int FUNC_18 (int ,int ) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (int ,int *,int *,int *,int *,int *,int *,scalar_t__,int,int) ;
 int FUNC_21 (int ) ;
 int FUNC_22 (int ) ;
 scalar_t__ FUNC_23 (int ) ;
 int FUNC_24 (int *,int ) ;
 int FUNC_25 (int ) ;
 scalar_t__ FUNC_26 (int ) ;
 scalar_t__ FUNC_27 (int ) ;
 int FUNC_28 (int ) ;
 int FUNC_29 (int *,int ) ;
 int FUNC_30 (int *) ;
 int FUNC_31 (TYPE_2__*) ;
 TYPE_2__* FUNC_32 (int ) ;
 int FUNC_33 (TYPE_1__*) ;
 int FUNC_34 (TYPE_1__*) ;
 void* FUNC_35 (int *,int ) ;
 int * FUNC_36 () ;
 int FUNC_37 (int ,int ) ;
 int FUNC_38 (int *) ;
 int FUNC_39 (int *) ;
 scalar_t__ FUNC_40 (int ) ;
 scalar_t__ FUNC_41 (int ) ;
 int FUNC_42 (int *,int ,int) ;

bool
FUNC_43(Oid VAR_14, int32 VAR_15, uint32 VAR_16,
          DimensionInfo *VAR_17, DimensionInfo *VAR_18,
          Name VAR_19, Name VAR_20,
          ChunkSizingInfo *VAR_21)
{
 Cache *VAR_22;
 Hypertable *VAR_23;
 Oid VAR_24;
 Oid VAR_25 = FUNC_2();
 Oid VAR_26 = FUNC_14(VAR_14);
 bool VAR_27;
 NameData VAR_28, VAR_29, VAR_30;
 Relation VAR_31;
 bool VAR_32 = (VAR_16 & VAR_9) != 0;


 if (VAR_32 && FUNC_40(VAR_14))
 {
  FUNC_5(VAR_12,
    (FUNC_6(VAR_4),
     FUNC_9("table \"%s\" is already a hypertable, skipping",
      FUNC_11(VAR_14))));

  return 0;
 }
 VAR_31 = FUNC_17(VAR_14, VAR_0);


 if (FUNC_40(VAR_14))
 {




  FUNC_16(VAR_31, VAR_0);

  if (VAR_32)
  {
   FUNC_5(VAR_12,
     (FUNC_6(VAR_4),
      FUNC_9("table \"%s\" is already a hypertable, skipping",
       FUNC_11(VAR_14))));
   return 0;
  }

  FUNC_5(VAR_7,
    (FUNC_6(VAR_4),
     FUNC_9("table \"%s\" is already a hypertable", FUNC_11(VAR_14))));
 }





 FUNC_37(VAR_14, VAR_25);


 switch (FUNC_13(VAR_14))
 {







  case 128:
   break;
  default:
   FUNC_5(VAR_7, (FUNC_6(VAR_6), FUNC_9("invalid relation type")));
 }


 FUNC_21(VAR_14);

 VAR_27 = FUNC_25(VAR_31);

 if ((VAR_16 & VAR_10) == 0 && VAR_27)
  FUNC_5(VAR_7,
    (FUNC_6(VAR_2),
     FUNC_9("table \"%s\" is not empty", FUNC_11(VAR_14)),
     FUNC_8("You can migrate data by specifying 'migrate_data => true' when calling "
       "this function.")));

 if (FUNC_23(VAR_14))
  FUNC_5(VAR_7,
    (FUNC_6(VAR_2),
     FUNC_9("table \"%s\" is already partitioned", FUNC_11(VAR_14)),
     FUNC_7(
      "It is not possible to turn tables that use inheritance into hypertables.")));

 if (!FUNC_28(VAR_14))
  FUNC_5(VAR_7,
    (FUNC_6(VAR_2),
     FUNC_9("table \"%s\" has to be logged", FUNC_11(VAR_14)),
     FUNC_7(
      "It is not possible to turn temporary or unlogged tables into hypertables.")));

 if (FUNC_26(VAR_31))
  FUNC_5(VAR_7,
    (FUNC_6(VAR_2),
     FUNC_9("table \"%s\" has replica identity set", FUNC_11(VAR_14)),
     FUNC_7("Logical replication is not supported on hypertables.")));

 if (FUNC_27(VAR_31))
  FUNC_5(VAR_7,
    (FUNC_6(VAR_2),
     FUNC_9("hypertables do not support rules"),
     FUNC_7("Table \"%s\" has attached rules, which do not work on hypertables.",
         FUNC_11(VAR_14)),
     FUNC_8("Remove the rules before calling create_hypertable")));





 if (((void*)0) == VAR_19)
 {
  FUNC_24(&VAR_30, VAR_11);
  VAR_19 = &VAR_30;
 }

 VAR_24 =
  FUNC_18(FUNC_3(*VAR_19), VAR_25);


 if (!FUNC_4(VAR_24))
  FUNC_19(FUNC_3(*VAR_19));





 if (FUNC_41(VAR_14))
  FUNC_5(VAR_7,
    (FUNC_6(VAR_2),
     FUNC_9("hypertables do not support transition tables in triggers")));

 if (((void*)0) == VAR_21)
  VAR_21 = FUNC_32(VAR_14);


 if (FUNC_4(VAR_21->func))
 {
  FUNC_31(VAR_21);

  if (VAR_21->target_size_bytes > 0)
  {
   FUNC_5(VAR_12,
     (FUNC_6(VAR_5),
      FUNC_9("adaptive chunking is a BETA feature and is not recommended for "
       "production deployments")));

   VAR_17->adaptive_chunking = 1;
  }
 }
 else
 {
  FUNC_5(VAR_7,
    (FUNC_6(VAR_3),
     FUNC_9("invalid chunk_sizing function: cannot be NULL")));
 }


 FUNC_34(VAR_17);

 if (FUNC_1(VAR_18))
  FUNC_34(VAR_18);


 FUNC_24(&VAR_28, FUNC_10(FUNC_12(VAR_14)));
 FUNC_24(&VAR_29, FUNC_11(VAR_14));

 FUNC_20(VAR_15,
       &VAR_28,
       &VAR_29,
       VAR_19,
       VAR_20,
       &VAR_21->func_schema,
       &VAR_21->func_name,
       VAR_21->target_size_bytes,
       FUNC_1(VAR_18) ? 2 : 1,
       0);


 VAR_22 = FUNC_36();
 VAR_17->ht = FUNC_35(VAR_22, VAR_14);

 FUNC_0(VAR_17->ht != ((void*)0));


 FUNC_33(VAR_17);

 if (FUNC_1(VAR_18))
 {
  VAR_18->ht = VAR_17->ht;
  FUNC_33(VAR_18);
 }


 FUNC_30(VAR_22);
 VAR_22 = FUNC_36();
 VAR_23 = FUNC_35(VAR_22, VAR_14);

 FUNC_0(VAR_23 != ((void*)0));


 FUNC_39(VAR_23);


 if (FUNC_4(VAR_26))
 {
  NameData VAR_33;

  FUNC_24(&VAR_33, FUNC_15(VAR_26));
  FUNC_42(&VAR_33, VAR_14, 0);
 }







 FUNC_16(VAR_31, VAR_13);

 if (VAR_27)
 {
  FUNC_5(VAR_12,
    (FUNC_9("migrating data to chunks"),
     FUNC_7("Migration might take a while depending on the amount of data.")));

  FUNC_29(VAR_23, VAR_1);
 }

 FUNC_22(VAR_14);

 if ((VAR_16 & VAR_8) == 0)
  FUNC_38(VAR_23);

 FUNC_30(VAR_22);

 return 1;
}
