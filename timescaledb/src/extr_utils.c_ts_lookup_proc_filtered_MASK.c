
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ regproc ;
typedef scalar_t__ (* proc_filter ) (TYPE_2__*,void*) ;
struct TYPE_10__ {int n_members; TYPE_1__** members; } ;
struct TYPE_9__ {scalar_t__ pronamespace; scalar_t__ prorettype; } ;
struct TYPE_8__ {int tuple; } ;
typedef scalar_t__ Oid ;
typedef int * HeapTuple ;
typedef TYPE_2__* Form_pg_proc ;
typedef TYPE_4__ CatCList ;


 int FUNC_0 (char const*) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_3 (char const*,int) ;
 int VAR_1 ;
 int FUNC_4 (TYPE_4__*) ;
 TYPE_4__* FUNC_5 (int ,int ) ;

Oid
FUNC_6(const char *VAR_2, const char *VAR_3, Oid *VAR_4, proc_filter VAR_5,
      void *VAR_6)
{
 Oid VAR_7 = FUNC_3(VAR_2, 0);
 regproc VAR_8 = VAR_0;
 CatCList *VAR_9;
 int VAR_10;






 VAR_9 = FUNC_5(VAR_1, FUNC_0(VAR_3));

 for (VAR_10 = 0; VAR_10 < VAR_9->n_members; VAR_10++)
 {
  HeapTuple VAR_11 = &VAR_9->members[VAR_10]->tuple;
  Form_pg_proc VAR_12 = (Form_pg_proc) FUNC_1(VAR_11);

  if (VAR_12->pronamespace == VAR_7 &&
   (VAR_5 == ((void*)0) || VAR_5(VAR_12, VAR_6)))
  {
   if (VAR_4)
    *VAR_4 = VAR_12->prorettype;

   VAR_8 = FUNC_2(VAR_11);
   break;
  }
 }

 FUNC_4(VAR_9);

 return VAR_8;
}
