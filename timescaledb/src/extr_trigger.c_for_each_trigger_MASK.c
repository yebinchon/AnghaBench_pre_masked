
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int (* trigger_handler ) (int *,void*) ;
struct TYPE_5__ {int numtriggers; int * triggers; } ;
typedef TYPE_1__ TriggerDesc ;
typedef int Trigger ;
struct TYPE_6__ {TYPE_1__* trigdesc; } ;
typedef TYPE_2__* Relation ;
typedef int Oid ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 TYPE_2__* FUNC_1 (int ,int ) ;

__attribute__((used)) static inline void
FUNC_2(Oid VAR_1, trigger_handler VAR_2, void *VAR_3)
{
 Relation VAR_4;

 VAR_4 = FUNC_1(VAR_1, VAR_0);

 if (VAR_4->trigdesc != ((void*)0))
 {
  TriggerDesc *VAR_5 = VAR_4->trigdesc;
  int VAR_6;

  for (VAR_6 = 0; VAR_6 < VAR_5->numtriggers; VAR_6++)
  {
   Trigger *VAR_7 = &VAR_5->triggers[VAR_6];

   if (!VAR_2(VAR_7, VAR_3))
    break;
  }
 }

 FUNC_0(VAR_4, VAR_0);
}
