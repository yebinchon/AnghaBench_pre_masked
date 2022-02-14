
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int n_members; TYPE_1__** members; } ;
struct TYPE_5__ {int tuple; } ;
typedef int Oid ;
typedef int List ;
typedef int * HeapTuple ;
typedef TYPE_2__ CatCList ;


 int FUNC_0 (int) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (int *) ;
 int * VAR_0 ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int FUNC_4 (TYPE_2__*) ;
 TYPE_2__* FUNC_5 (int ,int ) ;
 char* VAR_2 ;
 int * FUNC_6 (int *,int ) ;

__attribute__((used)) static List *
FUNC_7()
{
 List *VAR_3 = VAR_0;
 Oid VAR_4;
 const char *VAR_5 = VAR_2;
 CatCList *VAR_6 = FUNC_5(VAR_1, FUNC_1(VAR_5));
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_6->n_members; VAR_7++)
 {
  HeapTuple VAR_8 = &VAR_6->members[VAR_7]->tuple;
  VAR_4 = FUNC_3(FUNC_2(VAR_8));
  VAR_3 = FUNC_6(VAR_3, VAR_4);
 }
 FUNC_4(VAR_6);
 FUNC_0(VAR_3 != VAR_0);
 return VAR_3;
}
