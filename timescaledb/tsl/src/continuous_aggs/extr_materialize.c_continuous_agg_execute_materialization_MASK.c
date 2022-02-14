
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_10__ ;


typedef scalar_t__ int64 ;
typedef int int32 ;
struct TYPE_15__ {int table_name; int schema_name; } ;
struct TYPE_18__ {TYPE_2__ fd; int space; } ;
struct TYPE_17__ {scalar_t__ start; scalar_t__ end; int type; } ;
struct TYPE_16__ {int * name; int * schema; } ;
struct TYPE_14__ {int column_name; } ;
struct TYPE_13__ {TYPE_1__ fd; } ;
typedef TYPE_3__ SchemaAndName ;
typedef int NameData ;
typedef int List ;
typedef TYPE_4__ InternalTimeRange ;
typedef TYPE_5__ Hypertable ;
typedef int CatalogSecurityContext ;
typedef int Cache ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (int ,char*) ;
 TYPE_10__* FUNC_4 (int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 () ;
 int FUNC_8 (int *) ;
 int FUNC_9 (TYPE_10__*) ;
 TYPE_5__* FUNC_10 (int *,int ) ;
 int * FUNC_11 () ;
 scalar_t__ FUNC_12 (scalar_t__,scalar_t__,int ) ;
 int FUNC_13 (TYPE_3__,TYPE_3__,int *,TYPE_4__,scalar_t__,int *) ;

void
FUNC_14(int64 VAR_3, int32 VAR_4,
            int32 VAR_5, SchemaAndName VAR_6,
            List *VAR_7,
            int64 VAR_8)
{
 CatalogSecurityContext VAR_9;
 SchemaAndName VAR_10;
 InternalTimeRange VAR_11 = {
  .start = FUNC_1(VAR_5),
  .end = VAR_8,
 };
 Cache *VAR_12 = FUNC_11();
 Hypertable *VAR_13 = FUNC_10(VAR_12, VAR_4);
 Hypertable *VAR_14 =
  FUNC_10(VAR_12, VAR_5);
 NameData VAR_15;

 FUNC_0(VAR_11.start <= VAR_11.end);

 if (VAR_13 == ((void*)0))
  FUNC_3(VAR_0, "can only materialize continuous aggregates on a hypertable");

 if (VAR_14 == ((void*)0))
  FUNC_3(VAR_0, "can only materialize continuous aggregates to a hypertable");



 VAR_11.type =
  FUNC_9(FUNC_4(VAR_13->space, 0));

 VAR_15 =
  FUNC_4(VAR_14->space, 0)->fd.column_name;

 if (VAR_11.start > VAR_2)
  FUNC_0(VAR_11.start ==
      FUNC_12(VAR_3,
           VAR_11.start,
           VAR_11.type));







 if (VAR_11.end < VAR_1)
  FUNC_0(VAR_11.end ==
      FUNC_12(VAR_3,
           VAR_11.end,
           VAR_11.type));
 else
  VAR_11.end = FUNC_12(VAR_3,
                  VAR_11.end,
                  VAR_11.type);

 VAR_10.schema = &VAR_14->fd.schema_name;
 VAR_10.name = &VAR_14->fd.table_name;





 FUNC_13(VAR_6,
       VAR_10,
       &VAR_15,
       VAR_11,
       VAR_3,
       VAR_7);


 FUNC_6(FUNC_7(), &VAR_9);

 FUNC_2(VAR_5, VAR_11.end);

 FUNC_8(&VAR_9);
 FUNC_5(VAR_12);
 return;
}
