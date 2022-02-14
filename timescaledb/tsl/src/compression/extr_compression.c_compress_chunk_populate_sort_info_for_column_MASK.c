
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int gt_opr; int lt_opr; } ;
typedef TYPE_1__ TypeCacheEntry ;
struct TYPE_9__ {int attname; scalar_t__ orderby_asc; scalar_t__ orderby_nullsfirst; } ;
struct TYPE_8__ {int atttypid; int attcollation; int attnum; } ;
typedef int Oid ;
typedef int HeapTuple ;
typedef TYPE_2__* Form_pg_attribute ;
typedef TYPE_3__ ColumnCompressionInfo ;
typedef int AttrNumber ;


 scalar_t__ FUNC_0 (TYPE_3__ const*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_7 (int ,char*,int ,int ) ;
 int FUNC_8 (int ) ;
 TYPE_1__* FUNC_9 (int ,int) ;

__attribute__((used)) static void
FUNC_10(Oid VAR_3, const ColumnCompressionInfo *VAR_4,
            AttrNumber *VAR_5, Oid *VAR_6,
            Oid *VAR_7, bool *VAR_8)
{
 HeapTuple VAR_9;
 Form_pg_attribute VAR_10;
 TypeCacheEntry *VAR_11;

 VAR_9 = FUNC_6(VAR_3, FUNC_3(VAR_4->attname));
 if (!FUNC_2(VAR_9))
  FUNC_7(VAR_0, "table %d does not have column \"%s\"", VAR_3, FUNC_3(VAR_4->attname));

 VAR_10 = (Form_pg_attribute) FUNC_1(VAR_9);


 *VAR_5 = VAR_10->attnum;
 *VAR_7 = VAR_10->attcollation;
 *VAR_8 = (!(FUNC_0(VAR_4))) && VAR_4->orderby_nullsfirst;

 VAR_11 = FUNC_9(VAR_10->atttypid, VAR_2 | VAR_1);

 if (FUNC_0(VAR_4) || VAR_4->orderby_asc)
  *VAR_6 = VAR_11->lt_opr;
 else
  *VAR_6 = VAR_11->gt_opr;

 if (!FUNC_4(*VAR_6))
  FUNC_7(VAR_0,
    "no valid sort operator for column \"%s\" of type \"%s\"",
    FUNC_3(VAR_4->attname),
    FUNC_8(VAR_10->atttypid));

 FUNC_5(VAR_9);
}
