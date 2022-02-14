
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ int64 ;
typedef scalar_t__ int32 ;
typedef int int16 ;
struct TYPE_3__ {scalar_t__ id; scalar_t__ chunk_target_size; int compressed; scalar_t__ compressed_hypertable_id; int chunk_sizing_func_name; int chunk_sizing_func_schema; int num_dimensions; int associated_table_prefix; int associated_schema_name; int table_name; int schema_name; } ;
typedef int Relation ;
typedef int NameData ;
typedef int * Name ;
typedef TYPE_1__ FormData_hypertable ;
typedef int CatalogSecurityContext ;
typedef int Catalog ;


 char* VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,TYPE_1__*) ;
 int FUNC_5 (int ,char,int ) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int ,int ,char*,scalar_t__) ;
 int FUNC_8 (int ,int *) ;
 int FUNC_9 () ;
 int * FUNC_10 () ;
 int FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (int *,int ) ;

__attribute__((used)) static void
FUNC_13(int32 VAR_5, Name VAR_6, Name VAR_7,
      Name VAR_8, Name VAR_9,
      Name VAR_10, Name VAR_11,
      int64 VAR_12, int16 VAR_13, bool VAR_14)
{
 Catalog *VAR_15 = FUNC_10();
 Relation VAR_16;
 FormData_hypertable VAR_17;

 VAR_17.id = VAR_5;
 if (VAR_17.id == VAR_2)
 {
  CatalogSecurityContext VAR_18;
  FUNC_8(FUNC_9(), &VAR_18);
  VAR_17.id = FUNC_12(FUNC_10(), VAR_1);
  FUNC_11(&VAR_18);
 }

 FUNC_6(&VAR_17.schema_name, FUNC_0(*VAR_6));
 FUNC_6(&VAR_17.table_name, FUNC_0(*VAR_7));
 FUNC_6(&VAR_17.associated_schema_name, FUNC_0(*VAR_8));

 if (((void*)0) == VAR_9)
 {
  NameData VAR_19;
  FUNC_5(FUNC_0(VAR_19), '\0', VAR_3);
  FUNC_7(FUNC_0(VAR_19),
     VAR_3,
     VAR_0,
     VAR_17.id);
  FUNC_6(&VAR_17.associated_table_prefix, FUNC_0(VAR_19));
 }
 else
 {
  FUNC_6(&VAR_17.associated_table_prefix, FUNC_0(*VAR_9));
 }
 VAR_17.num_dimensions = VAR_13;

 FUNC_6(&VAR_17.chunk_sizing_func_schema, FUNC_0(*VAR_10));
 FUNC_6(&VAR_17.chunk_sizing_func_name, FUNC_0(*VAR_11));

 VAR_17.chunk_target_size = VAR_12;
 if (VAR_17.chunk_target_size < 0)
  VAR_17.chunk_target_size = 0;

 VAR_17.compressed = VAR_14;


 VAR_17.compressed_hypertable_id = VAR_2;

 VAR_16 = FUNC_3(FUNC_1(VAR_15, VAR_1), VAR_4);
 FUNC_4(VAR_16, &VAR_17);
 FUNC_2(VAR_16, VAR_4);
}
