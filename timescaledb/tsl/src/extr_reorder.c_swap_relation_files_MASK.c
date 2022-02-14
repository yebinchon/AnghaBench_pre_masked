
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef void* int32 ;
typedef int float4 ;
typedef int TransactionId ;
struct TYPE_16__ {long relfilenode; long reltablespace; char relpersistence; long reltoastrelid; scalar_t__ relkind; void* relallvisible; int reltuples; void* relpages; int relminmxid; int relfrozenxid; int relname; } ;
struct TYPE_15__ {int t_self; } ;
struct TYPE_14__ {long objectId; scalar_t__ objectSubId; void* classId; } ;
typedef int Relation ;
typedef long Oid ;
typedef TYPE_1__ ObjectAddress ;
typedef int MultiXactId ;
typedef TYPE_2__* HeapTuple ;
typedef TYPE_3__* Form_pg_class ;
typedef int CatalogIndexState ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,TYPE_2__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int *,TYPE_2__*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_7 (void*,long,int ,int ,int) ;
 int FUNC_8 (long,TYPE_3__*) ;
 int FUNC_9 (int ) ;
 long FUNC_10 (int ) ;
 int FUNC_11 (long) ;
 int FUNC_12 (long) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_13 (long) ;
 void* VAR_9 ;
 int VAR_10 ;
 TYPE_2__* FUNC_14 (int ,int ) ;
 int FUNC_15 (int ) ;
 long FUNC_16 (void*,long,int) ;
 int FUNC_17 (int ,char*,...) ;
 int FUNC_18 (int ,int ) ;
 int FUNC_19 (TYPE_2__*) ;
 int FUNC_20 (void*,int ) ;
 int FUNC_21 (TYPE_1__*,TYPE_1__*,int ) ;
 int FUNC_22 (int ,int *,TYPE_2__*) ;
 long FUNC_23 (long,int ) ;

__attribute__((used)) static void
FUNC_24(Oid VAR_11, Oid VAR_12, bool VAR_13, bool VAR_14,
     TransactionId VAR_15, MultiXactId VAR_16)
{
 Relation VAR_17;
 HeapTuple VAR_18, VAR_19;
 Form_pg_class VAR_20, VAR_21;
 Oid VAR_22, VAR_23;
 Oid VAR_24;
 char VAR_25;


 VAR_17 = FUNC_20(VAR_9, VAR_10);

 VAR_18 = FUNC_14(VAR_8, FUNC_11(VAR_11));
 if (!FUNC_6(VAR_18))
  FUNC_17(VAR_2, "cache lookup failed for relation %u", VAR_11);
 VAR_20 = (Form_pg_class) FUNC_5(VAR_18);

 VAR_19 = FUNC_14(VAR_8, FUNC_11(VAR_12));
 if (!FUNC_6(VAR_19))
  FUNC_17(VAR_2, "cache lookup failed for relation %u", VAR_12);
 VAR_21 = (Form_pg_class) FUNC_5(VAR_19);

 VAR_22 = VAR_20->relfilenode;
 VAR_23 = VAR_21->relfilenode;

 if (!FUNC_12(VAR_22) || !FUNC_12(VAR_23))
  FUNC_17(VAR_2, "cannot reorder mapped relation \"%s\".", FUNC_10(VAR_20->relname));



 VAR_24 = VAR_20->relfilenode;
 VAR_20->relfilenode = VAR_21->relfilenode;
 VAR_21->relfilenode = VAR_24;

 VAR_24 = VAR_20->reltablespace;
 VAR_20->reltablespace = VAR_21->reltablespace;
 VAR_21->reltablespace = VAR_24;

 VAR_25 = VAR_20->relpersistence;
 VAR_20->relpersistence = VAR_21->relpersistence;
 VAR_21->relpersistence = VAR_25;


 if (!VAR_13)
 {
  VAR_24 = VAR_20->reltoastrelid;
  VAR_20->reltoastrelid = VAR_21->reltoastrelid;
  VAR_21->reltoastrelid = VAR_24;
 }


 if (VAR_20->relkind != VAR_6)
 {
  FUNC_0(FUNC_15(VAR_15));
  VAR_20->relfrozenxid = VAR_15;
  FUNC_0(FUNC_9(VAR_16));
  VAR_20->relminmxid = VAR_16;
 }


 {
  int32 VAR_26;
  float4 VAR_27;
  int32 VAR_28;

  VAR_26 = VAR_20->relpages;
  VAR_20->relpages = VAR_21->relpages;
  VAR_21->relpages = VAR_26;

  VAR_27 = VAR_20->reltuples;
  VAR_20->reltuples = VAR_21->reltuples;
  VAR_21->reltuples = VAR_27;

  VAR_28 = VAR_20->relallvisible;
  VAR_20->relallvisible = VAR_21->relallvisible;
  VAR_21->relallvisible = VAR_28;
 }


 {
  CatalogIndexState VAR_29;
  VAR_29 = FUNC_3(VAR_17);
  FUNC_4(VAR_17, &VAR_18->t_self, VAR_18, VAR_29);
  FUNC_4(VAR_17, &VAR_19->t_self, VAR_19, VAR_29);
  FUNC_1(VAR_29);

 }





 FUNC_7(VAR_9, VAR_11, 0, VAR_4, VAR_14);
 FUNC_7(VAR_9, VAR_12, 0, VAR_4, 1);





 if (VAR_20->reltoastrelid || VAR_21->reltoastrelid)
 {
  if (VAR_13)
  {
   if (VAR_20->reltoastrelid && VAR_21->reltoastrelid)
   {

    FUNC_24(VAR_20->reltoastrelid,
         VAR_21->reltoastrelid,
         VAR_13,
         VAR_14,
         VAR_15,
         VAR_16);
   }
   else
   {

    FUNC_17(VAR_2, "cannot swap toast files by content when there's only one");
   }
  }
  else
  {
   ObjectAddress VAR_30, VAR_31;
   long VAR_32;





   FUNC_0(!FUNC_8(VAR_11, VAR_20));


   if (VAR_20->reltoastrelid)
   {
    VAR_32 =
     FUNC_16(VAR_9, VAR_20->reltoastrelid, 0);
    if (VAR_32 != 1)
     FUNC_17(VAR_2, "expected one dependency record for TOAST table, found %ld", VAR_32);
   }
   if (VAR_21->reltoastrelid)
   {
    VAR_32 =
     FUNC_16(VAR_9, VAR_21->reltoastrelid, 0);
    if (VAR_32 != 1)
     FUNC_17(VAR_2, "expected one dependency record for TOAST table, found %ld", VAR_32);
   }


   VAR_30.classId = VAR_9;
   VAR_30.objectSubId = 0;
   VAR_31.classId = VAR_9;
   VAR_31.objectSubId = 0;

   if (VAR_20->reltoastrelid)
   {
    VAR_30.objectId = VAR_11;
    VAR_31.objectId = VAR_20->reltoastrelid;
    FUNC_21(&VAR_31, &VAR_30, VAR_1);
   }

   if (VAR_21->reltoastrelid)
   {
    VAR_30.objectId = VAR_12;
    VAR_31.objectId = VAR_21->reltoastrelid;
    FUNC_21(&VAR_31, &VAR_30, VAR_1);
   }
  }
 }






 if (VAR_13 && VAR_20->relkind == VAR_7 &&
  VAR_21->relkind == VAR_7)
 {
  Oid VAR_33, VAR_34;


  VAR_33 = FUNC_23(VAR_11, VAR_0);
  VAR_34 = FUNC_23(VAR_12, VAR_0);

  FUNC_24(VAR_33,
       VAR_34,
       VAR_13,
       VAR_14,
       VAR_5,
       VAR_3);
 }


 FUNC_19(VAR_18);
 FUNC_19(VAR_19);

 FUNC_18(VAR_17, VAR_10);
 FUNC_13(VAR_11);
 FUNC_13(VAR_12);
}
