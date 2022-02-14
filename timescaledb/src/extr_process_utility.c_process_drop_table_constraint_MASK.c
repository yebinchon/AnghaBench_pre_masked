
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int id; } ;
struct TYPE_10__ {TYPE_1__ fd; } ;
struct TYPE_9__ {scalar_t__ type; } ;
struct TYPE_8__ {int constraint_name; int table; int schema; } ;
typedef int Hypertable ;
typedef TYPE_2__ EventTriggerDropTableConstraint ;
typedef TYPE_3__ EventTriggerDropObject ;
typedef TYPE_4__ Chunk ;
typedef int CatalogSecurityContext ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 TYPE_4__* FUNC_1 (int ,int ,int ,int) ;
 int FUNC_2 (int *,int ,int ) ;
 int VAR_1 ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 () ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int ,int,int) ;
 int * FUNC_7 (int ,int ) ;

__attribute__((used)) static void
FUNC_8(EventTriggerDropObject *VAR_2)
{
 EventTriggerDropTableConstraint *VAR_3;
 Hypertable *VAR_4;

 FUNC_0(VAR_2->type == VAR_0);
 VAR_3 = (EventTriggerDropTableConstraint *) VAR_2;


 VAR_4 = FUNC_7(VAR_3->schema, VAR_3->table);

 if (VAR_4 != ((void*)0))
 {
  CatalogSecurityContext VAR_5;

  FUNC_3(FUNC_4(), &VAR_5);


  FUNC_2(VAR_4, VAR_1, VAR_3->constraint_name);

  FUNC_5(&VAR_5);
 }
 else
 {
  Chunk *VAR_6 = FUNC_1(VAR_3->schema, VAR_3->table, 0, 0);

  if (((void*)0) != VAR_6)
  {
   FUNC_6(VAR_6->fd.id,
                VAR_3->constraint_name,
                1,
                0);
  }
 }
}
