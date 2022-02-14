
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_8__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {int natts; } ;
struct TYPE_11__ {int attname; } ;
struct TYPE_10__ {scalar_t__* ii_IndexAttrNumbers; scalar_t__* ii_KeyAttrNumbers; } ;
struct TYPE_9__ {int rd_id; TYPE_8__* rd_att; } ;
typedef TYPE_1__* Relation ;
typedef TYPE_2__ IndexInfo ;
typedef TYPE_3__ FormData_pg_attribute ;
typedef scalar_t__ AttrNumber ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 TYPE_3__* FUNC_1 (TYPE_8__*,int) ;
 int FUNC_2 (int ,char*,int ) ;
 scalar_t__ FUNC_3 (int ,int ) ;

__attribute__((used)) static void
FUNC_4(IndexInfo *VAR_2, Relation VAR_3, Relation VAR_4)
{
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_3->rd_att->natts; VAR_5++)
 {
  FormData_pg_attribute *VAR_6 = FUNC_1(VAR_3->rd_att, VAR_5);
  AttrNumber VAR_7 = FUNC_3(VAR_4->rd_id, FUNC_0(VAR_6->attname));

  if (VAR_7 == VAR_1)
   FUNC_2(VAR_0, "index attribute %s not found in chunk", FUNC_0(VAR_6->attname));



  VAR_2->ii_IndexAttrNumbers[VAR_5] = VAR_7;

 }
}
