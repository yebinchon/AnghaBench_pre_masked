
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int schema_name; int table_name; } ;
typedef TYPE_1__ TableInfoDef ;
struct TYPE_8__ {scalar_t__ length; int * names; } ;
typedef TYPE_2__ TableIndexDef ;
struct TYPE_9__ {scalar_t__ serial_relid; int schema_name; int name; scalar_t__* index_ids; scalar_t__ id; } ;
typedef scalar_t__ Size ;
typedef int RangeVar ;
typedef scalar_t__ Oid ;
typedef TYPE_3__ CatalogTableInfo ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int *,int ,int) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int ,char*,int ,...) ;
 scalar_t__ FUNC_3 (int ,int) ;
 scalar_t__ FUNC_4 (int ,scalar_t__) ;
 int * FUNC_5 (int ) ;
 int FUNC_6 (char const*) ;

void
FUNC_7(CatalogTableInfo *VAR_4, int VAR_5,
         const TableInfoDef *VAR_6, const TableIndexDef *VAR_7,
         const char **VAR_8)
{
 int VAR_9;

 for (VAR_9 = 0; VAR_9 < VAR_5; VAR_9++)
 {
  Oid VAR_10;
  Oid VAR_11;
  const char *VAR_12;
  Size VAR_13, VAR_14;

  VAR_10 = FUNC_3(VAR_6[VAR_9].schema_name, 0);
  VAR_11 = FUNC_4(VAR_6[VAR_9].table_name, VAR_10);

  if (VAR_11 == VAR_1)
   FUNC_2(VAR_0,
     "OID lookup failed for table \"%s.%s\"",
     VAR_6[VAR_9].schema_name,
     VAR_6[VAR_9].table_name);

  VAR_4[VAR_9].id = VAR_11;

  VAR_13 = VAR_7[VAR_9].length;
  FUNC_0(VAR_13 <= VAR_3);

  for (VAR_14 = 0; VAR_14 < VAR_13; VAR_14++)
  {
   VAR_11 = FUNC_4(VAR_7[VAR_9].names[VAR_14], VAR_10);

   if (VAR_11 == VAR_1)
    FUNC_2(VAR_0, "OID lookup failed for table index \"%s\"", VAR_7[VAR_9].names[VAR_14]);

   VAR_4[VAR_9].index_ids[VAR_14] = VAR_11;
  }

  VAR_4[VAR_9].name = VAR_6[VAR_9].table_name;
  VAR_4[VAR_9].schema_name = VAR_6[VAR_9].schema_name;
  VAR_12 = VAR_8[VAR_9];

  if (((void*)0) != VAR_12)
  {
   RangeVar *VAR_15;

   VAR_15 = FUNC_5(FUNC_6(VAR_12));
   VAR_4[VAR_9].serial_relid = FUNC_1(VAR_15, VAR_2, 0);
  }
  else
   VAR_4[VAR_9].serial_relid = VAR_1;
 }
}
