
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int int32 ;
struct TYPE_6__ {int cascade_to_materializations; int cascade; int older_than; int hypertable_id; } ;
struct TYPE_8__ {TYPE_1__ fd; } ;
struct TYPE_7__ {int space; } ;
typedef int Oid ;
typedef TYPE_2__ Hypertable ;
typedef int Dimension ;
typedef int Datum ;
typedef int Cache ;
typedef TYPE_3__ BgwPolicyDropChunks ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 () ;
 int VAR_3 ;
 int FUNC_2 () ;
 int VAR_4 ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (char*,int ,...) ;
 int FUNC_10 (int ) ;
 int * FUNC_11 (int ,int ) ;
 TYPE_3__* FUNC_12 (int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_15 (int *) ;
 TYPE_2__* FUNC_16 (int *,int ) ;
 int * FUNC_17 () ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int *,int *) ;

bool
FUNC_20(int32 VAR_5)
{
 bool VAR_6 = 0;
 BgwPolicyDropChunks *VAR_7;
 Oid VAR_8;
 Hypertable *VAR_9;
 Cache *VAR_10;
 Dimension *VAR_11;

 if (!FUNC_2())
 {
  VAR_6 = 1;
  FUNC_5();
  FUNC_4(FUNC_1());
 }


 VAR_7 = FUNC_12(VAR_5);

 if (VAR_7 == ((void*)0))
  FUNC_7(VAR_2,
    (FUNC_8(VAR_1),
     FUNC_9("could not run drop_chunks policy #%d because no args in policy table",
      VAR_5)));

 VAR_8 = FUNC_18(VAR_7->fd.hypertable_id);
 VAR_10 = FUNC_17();
 VAR_9 = FUNC_16(VAR_10, VAR_8);

 if (VAR_9 == ((void*)0))
  FUNC_7(VAR_2,
    (FUNC_8(VAR_0),
     FUNC_9("could not run drop_chunks policy #%d because \"%s\" is not a hypertable",
      VAR_5,
      FUNC_10(VAR_8))));

 VAR_11 = FUNC_11(VAR_9->space, 0);
 FUNC_14(VAR_8,
       FUNC_19(&VAR_7->fd.older_than, VAR_11),
       (Datum) 0,
       FUNC_15(VAR_11),
       VAR_3,
       VAR_7->fd.cascade,
       VAR_7->fd.cascade_to_materializations,
       VAR_4);

 FUNC_13(VAR_10);
 FUNC_6(VAR_4, "completed dropping chunks");

 if (VAR_6)
 {
  FUNC_3();
  FUNC_0();
 }
 return 1;
}
