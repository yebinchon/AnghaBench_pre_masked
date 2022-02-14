
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef int int32 ;
struct TYPE_18__ {int ii_Expressions; } ;
struct TYPE_17__ {int rd_id; } ;
typedef TYPE_1__* Relation ;
typedef int Oid ;
typedef TYPE_2__ IndexInfo ;


 TYPE_2__* FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,TYPE_2__*,TYPE_1__*) ;
 int FUNC_3 (TYPE_2__*,TYPE_1__*,TYPE_1__*) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ,TYPE_1__*,TYPE_1__*,TYPE_2__*,int,int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static Oid
FUNC_8(Relation VAR_0, Relation VAR_1, Relation VAR_2,
       bool VAR_3, Oid VAR_4)
{
 IndexInfo *VAR_5 = FUNC_0(VAR_1);
 int32 VAR_6;





 if (FUNC_4(FUNC_1(VAR_0), FUNC_1(VAR_2)))
 {
  if (FUNC_5(VAR_5->ii_Expressions) == 0)
   FUNC_3(VAR_5, VAR_1, VAR_2);
  else
  {
   FUNC_2(VAR_0->rd_id, VAR_5, VAR_2);
  }
 }

 VAR_6 = FUNC_7(VAR_0->rd_id);

 return FUNC_6(VAR_6,
             VAR_1,
             VAR_2,
             VAR_5,
             VAR_3,
             VAR_4);
}
