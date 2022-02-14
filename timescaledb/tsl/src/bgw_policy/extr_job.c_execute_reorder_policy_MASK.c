
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_9__ ;
typedef struct TYPE_29__ TYPE_8__ ;
typedef struct TYPE_28__ TYPE_7__ ;
typedef struct TYPE_27__ TYPE_6__ ;
typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;
typedef struct TYPE_21__ TYPE_18__ ;
typedef struct TYPE_20__ TYPE_11__ ;
typedef struct TYPE_19__ TYPE_10__ ;


typedef int (* reorder_func ) (int ,int ,int,int ,int ,int ) ;
typedef int int32 ;
struct TYPE_26__ {int data; } ;
struct TYPE_25__ {int data; } ;
struct TYPE_27__ {TYPE_5__ table_name; TYPE_4__ schema_name; } ;
struct TYPE_30__ {TYPE_6__ fd; int table_id; } ;
struct TYPE_21__ {int data; } ;
struct TYPE_23__ {int data; } ;
struct TYPE_24__ {TYPE_18__ schema_name; TYPE_2__ table_name; } ;
struct TYPE_29__ {TYPE_3__ fd; } ;
struct TYPE_28__ {int job_id; TYPE_18__ hypertable_index_name; int hypertable_id; } ;
struct TYPE_22__ {int id; } ;
struct TYPE_20__ {TYPE_1__ fd; } ;
struct TYPE_19__ {TYPE_7__ fd; } ;
typedef TYPE_8__ Hypertable ;
typedef TYPE_9__ Chunk ;
typedef TYPE_10__ BgwPolicyReorder ;
typedef TYPE_11__ BgwJob ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 () ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (TYPE_18__) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,char*,int ,int ) ;
 int FUNC_5 (TYPE_11__*,char*) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*,int ) ;
 int FUNC_9 (int ,TYPE_8__*) ;
 int FUNC_10 (int ,int) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int ,int,int ) ;
 TYPE_10__* FUNC_13 (int ) ;
 TYPE_9__* FUNC_14 (int,int ,int) ;
 TYPE_8__* FUNC_15 (int ) ;
 int FUNC_16 () ;

bool
FUNC_17(BgwJob *VAR_5, reorder_func VAR_6, bool VAR_7)
{
 int VAR_8;
 bool VAR_9 = 0;
 BgwPolicyReorder *VAR_10;
 Hypertable *VAR_11;
 Chunk *VAR_12;
 int32 VAR_13 = VAR_5->fd.id;

 if (!FUNC_1())
 {
  VAR_9 = 1;
  FUNC_3();
 }


 VAR_10 = FUNC_13(VAR_13);

 if (VAR_10 == ((void*)0))
  FUNC_6(VAR_1,
    (FUNC_7(VAR_0),
     FUNC_8("could not run reorder policy #%d because no args in policy table",
      VAR_13)));

 VAR_11 = FUNC_15(VAR_10->fd.hypertable_id);


 VAR_8 = FUNC_9(VAR_10->fd.job_id, VAR_11);

 if (VAR_8 == -1)
 {
  FUNC_4(VAR_4,
    "no chunks need reordering for hypertable %s.%s",
    VAR_11->fd.schema_name.data,
    VAR_11->fd.table_name.data);
  goto commit;
 }






 VAR_12 = FUNC_14(VAR_8, 0, 0);
 FUNC_4(VAR_3, "reordering chunk %s.%s", VAR_12->fd.schema_name.data, VAR_12->fd.table_name.data);
 VAR_6(VAR_12->table_id,
   FUNC_11(FUNC_2(VAR_10->fd.hypertable_index_name),
         FUNC_10(FUNC_2(VAR_11->fd.schema_name), 0)),
   0,
   VAR_2,
   VAR_2,
   VAR_2);
 FUNC_4(VAR_3,
   "completed reordering chunk %s.%s",
   VAR_12->fd.schema_name.data,
   VAR_12->fd.table_name.data);


 FUNC_12(VAR_10->fd.job_id,
            VAR_8,
            FUNC_16());

 if (VAR_7 && FUNC_9(VAR_10->fd.job_id, VAR_11) != -1)
  FUNC_5(VAR_5, "reorder");

commit:
 if (VAR_9)
  FUNC_0();

 return 1;
}
