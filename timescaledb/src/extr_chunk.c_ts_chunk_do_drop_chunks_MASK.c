
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint64 ;
typedef int int32 ;
struct TYPE_13__ {int (* continuous_agg_drop_chunks_by_chunk_id ) (int ,TYPE_4__**,int) ;} ;
struct TYPE_10__ {int data; } ;
struct TYPE_9__ {int data; } ;
struct TYPE_11__ {TYPE_2__ table_name; TYPE_1__ schema_name; } ;
struct TYPE_12__ {TYPE_3__ fd; } ;
typedef int Oid ;
typedef int List ;
typedef int Datum ;
typedef TYPE_4__ Chunk ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;



 int * VAR_5 ;
 TYPE_4__** FUNC_1 (int ,int ,int ,int ,int ,char*,int ,int*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*) ;
 int * FUNC_6 (int *,char*) ;
 char* FUNC_7 (size_t) ;
 char* FUNC_8 (int ) ;
 int FUNC_9 (char*,size_t,char*,char const*,char const*) ;
 int FUNC_10 (char const*) ;
 int FUNC_11 (int ,TYPE_4__**,int) ;
 int FUNC_12 (TYPE_4__*,int ,int ) ;
 TYPE_5__* VAR_6 ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (int ) ;

List *
FUNC_16(Oid VAR_7, Datum VAR_8, Datum VAR_9,
      Oid VAR_10, Oid VAR_11, bool VAR_12,
      bool VAR_13, int32 VAR_14)
{
 int VAR_15 = 0;
 uint64 VAR_16 = 0;
 Chunk **VAR_17;
 List *VAR_18 = VAR_5;
 const char *VAR_19, *VAR_20;
 int32 VAR_21 = FUNC_15(VAR_7);

 FUNC_14(VAR_7, FUNC_0());

 switch (FUNC_13(VAR_21))
 {
  case 130:
  case 129:
   FUNC_2(VAR_4, "cannot drop_chunks on a continuous aggregate materialization table");
  case 128:
   if (!VAR_13)
    FUNC_3(VAR_4,
      (FUNC_4(VAR_3),
       FUNC_5("cannot drop_chunks on hypertable that has a continuous aggregate "
        "without cascade_to_materializations set to true")));
   break;
  default:
   VAR_13 = 0;
   break;
 }

 VAR_17 = FUNC_1(VAR_7,
           VAR_8,
           VAR_9,
           VAR_10,
           VAR_11,
           "drop_chunks",
           VAR_0,
           &VAR_16);

 for (; VAR_15 < VAR_16; VAR_15++)
 {
  size_t VAR_22;
  char *VAR_23;


  VAR_19 = FUNC_8(VAR_17[VAR_15]->fd.schema_name.data);
  VAR_20 = FUNC_8(VAR_17[VAR_15]->fd.table_name.data);

  VAR_22 = FUNC_10(VAR_19) + FUNC_10(VAR_20) + 2;
  VAR_23 = FUNC_7(VAR_22);

  FUNC_9(VAR_23, VAR_22, "%s.%s", VAR_19, VAR_20);
  VAR_18 = FUNC_6(VAR_18, VAR_23);

  FUNC_12(VAR_17[VAR_15], (VAR_12 ? VAR_1 : VAR_2), VAR_14);
 }

 if (VAR_13)
  VAR_6->continuous_agg_drop_chunks_by_chunk_id(VAR_21, VAR_17, VAR_16);

 return VAR_18;
}
