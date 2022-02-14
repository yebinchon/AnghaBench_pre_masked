
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int natts; } ;
struct TYPE_7__ {int attname; } ;
struct TYPE_6__ {TYPE_5__* rd_att; } ;
typedef TYPE_1__* Relation ;
typedef int List ;
typedef TYPE_2__* Form_pg_attribute ;


 int * VAR_0 ;
 int FUNC_0 (int ) ;
 TYPE_2__* FUNC_1 (TYPE_5__*,int) ;
 int * FUNC_2 (int *,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static List *
FUNC_4(Relation VAR_1)
{
 List *VAR_2 = VAR_0;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1->rd_att->natts; VAR_3++)
 {
  Form_pg_attribute VAR_4 = FUNC_1(VAR_1->rd_att, VAR_3);

  VAR_2 = FUNC_2(VAR_2, FUNC_3(FUNC_0(VAR_4->attname)));
 }

 return VAR_2;
}
