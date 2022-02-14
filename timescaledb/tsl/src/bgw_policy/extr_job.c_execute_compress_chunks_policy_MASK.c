
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_9__ ;
typedef struct TYPE_25__ TYPE_8__ ;
typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_10__ ;


typedef scalar_t__ int32 ;
struct TYPE_23__ {int older_than; int hypertable_id; } ;
struct TYPE_26__ {TYPE_6__ fd; } ;
struct TYPE_22__ {int table_name; int schema_name; } ;
struct TYPE_25__ {TYPE_5__ fd; int table_id; } ;
struct TYPE_20__ {int data; } ;
struct TYPE_19__ {int data; } ;
struct TYPE_21__ {TYPE_3__ table_name; TYPE_2__ schema_name; } ;
struct TYPE_24__ {TYPE_4__ fd; } ;
struct TYPE_18__ {int id; } ;
struct TYPE_17__ {TYPE_1__ fd; } ;
typedef int Oid ;
typedef TYPE_7__ Hypertable ;
typedef TYPE_8__ Chunk ;
typedef int Cache ;
typedef TYPE_9__ BgwPolicyCompressChunks ;
typedef TYPE_10__ BgwJob ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 () ;
 scalar_t__ VAR_3 ;
 int FUNC_2 () ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 int FUNC_6 () ;
 int FUNC_7 (int ,char*,int ,int ) ;
 int FUNC_8 (TYPE_10__*,char*) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (char*,int,...) ;
 scalar_t__ FUNC_12 (TYPE_7__*,int *) ;
 int FUNC_13 (int ) ;
 TYPE_9__* FUNC_14 (int) ;
 int FUNC_15 (int *) ;
 TYPE_8__* FUNC_16 (scalar_t__,int ,int) ;
 TYPE_7__* FUNC_17 (int *,int ) ;
 int * FUNC_18 () ;
 int FUNC_19 (int ) ;
 int FUNC_20 (int ,int) ;

bool
FUNC_21(BgwJob *VAR_6)
{
 bool VAR_7 = 0;
 BgwPolicyCompressChunks *VAR_8;
 Oid VAR_9;
 Hypertable *VAR_10;
 Cache *VAR_11;
 int32 VAR_12;
 Chunk *VAR_13 = ((void*)0);
 int VAR_14 = VAR_6->fd.id;

 if (!FUNC_2())
 {
  VAR_7 = 1;
  FUNC_6();
  FUNC_5(FUNC_1());
 }


 VAR_8 = FUNC_14(VAR_14);

 if (VAR_8 == ((void*)0))
  FUNC_9(VAR_2,
    (FUNC_10(VAR_1),
     FUNC_11("could not run compress_chunks policy #%d because no args in policy table",
      VAR_14)));

 VAR_9 = FUNC_19(VAR_8->fd.hypertable_id);
 VAR_11 = FUNC_18();
 VAR_10 = FUNC_17(VAR_11, VAR_9);

 if (VAR_10 == ((void*)0))
  FUNC_9(VAR_2,
    (FUNC_10(VAR_0),
     FUNC_11("could not run compress_chunks policy #%d because \"%s\" is not a "
      "hypertable",
      VAR_14,
      FUNC_13(VAR_9))));

 VAR_12 = FUNC_12(VAR_10, &VAR_8->fd.older_than);
 if (VAR_12 == VAR_3)
 {
  FUNC_7(VAR_5,
    "no chunks for hypertable %s.%s that satisfy compress chunk policy",
    VAR_10->fd.schema_name.data,
    VAR_10->fd.table_name.data);
 }
 else
 {
  VAR_13 = FUNC_16(VAR_12, 0, 1);
  FUNC_20(VAR_13->table_id, 0);
  FUNC_7(VAR_4,
    "completed compressing chunk %s.%s",
    FUNC_3(VAR_13->fd.schema_name),
    FUNC_3(VAR_13->fd.table_name));
 }

 VAR_12 = FUNC_12(VAR_10, &VAR_8->fd.older_than);
 if (VAR_12 != VAR_3)
  FUNC_8(VAR_6, "compress_chunks");

 FUNC_15(VAR_11);
 if (VAR_7)
 {
  FUNC_4();
  FUNC_0();
 }
 return 1;
}
