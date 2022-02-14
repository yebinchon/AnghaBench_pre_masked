
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int id; } ;
struct TYPE_6__ {TYPE_1__ fd; } ;
typedef scalar_t__ Oid ;
typedef int * Name ;
typedef TYPE_2__ Hypertable ;
typedef int CatalogSecurityContext ;
typedef int Cache ;
typedef scalar_t__ AclResult ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 () ;
 int FUNC_1 (scalar_t__,int) ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*,int ,...) ;
 int FUNC_9 (scalar_t__) ;
 scalar_t__ FUNC_10 (int ,int) ;
 scalar_t__ FUNC_11 (scalar_t__,scalar_t__,int ) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int ,int *) ;
 int FUNC_15 () ;
 int FUNC_16 (int *) ;
 TYPE_2__* FUNC_17 (int *,scalar_t__) ;
 int * FUNC_18 () ;
 scalar_t__ FUNC_19 (TYPE_2__*,scalar_t__) ;
 scalar_t__ FUNC_20 (scalar_t__,int ) ;

void
FUNC_21(Name VAR_9, Oid VAR_10, bool VAR_11)
{
 Cache *VAR_12;
 Hypertable *VAR_13;
 Oid VAR_14;
 Oid VAR_15;
 AclResult VAR_16;
 CatalogSecurityContext VAR_17;

 if (((void*)0) == VAR_9)
  FUNC_4(VAR_6, "invalid tablespace name");

 if (!FUNC_3(VAR_10))
  FUNC_4(VAR_6, "invalid hypertable");

 VAR_14 = FUNC_10(FUNC_2(*VAR_9), 1);

 if (!FUNC_3(VAR_14))
  FUNC_5(VAR_6,
    (FUNC_6(VAR_5),
     FUNC_8("tablespace \"%s\" does not exist", FUNC_2(*VAR_9)),
     FUNC_7("The tablespace needs to be created"
       " before attaching it to a hypertable.")));

 VAR_15 = FUNC_20(VAR_10, FUNC_0());
 if (VAR_14 != VAR_7)
 {





  VAR_16 = FUNC_11(VAR_14, VAR_15, VAR_1);

  if (VAR_16 != VAR_0)
   FUNC_5(VAR_6,
     (FUNC_6(VAR_2),
      FUNC_8("permission denied for tablespace \"%s\" by table owner \"%s\"",
       FUNC_2(*VAR_9),
       FUNC_1(VAR_15, 1))));
 }
 VAR_12 = FUNC_18();
 VAR_13 = FUNC_17(VAR_12, VAR_10);

 if (((void*)0) == VAR_13)
  FUNC_5(VAR_6,
    (FUNC_6(VAR_3),
     FUNC_8("table \"%s\" is not a hypertable", FUNC_9(VAR_10))));

 if (FUNC_19(VAR_13, VAR_14))
 {
  if (VAR_11)
   FUNC_5(VAR_8,
     (FUNC_6(VAR_4),
      FUNC_8("tablespace \"%s\" is already attached to hypertable \"%s\", skipping",
       FUNC_2(*VAR_9),
       FUNC_9(VAR_10))));
  else
   FUNC_5(VAR_6,
     (FUNC_6(VAR_4),
      FUNC_8("tablespace \"%s\" is already attached to hypertable \"%s\"",
       FUNC_2(*VAR_9),
       FUNC_9(VAR_10))));
 }
 else
 {
  FUNC_14(FUNC_15(), &VAR_17);
  FUNC_12(VAR_13->fd.id, FUNC_2(*VAR_9));
  FUNC_16(&VAR_17);
 }

 FUNC_13(VAR_12);
}
