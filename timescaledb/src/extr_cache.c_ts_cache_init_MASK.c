
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int refcount; int release_on_commit; int flags; int hctl; int numelements; int name; int * htab; } ;
typedef TYPE_1__ Cache ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,TYPE_1__*) ;
 int FUNC_2 (int ,char*,int ) ;
 int * FUNC_3 (int ,int ,int *,int ) ;
 int FUNC_4 (TYPE_1__*) ;

void
FUNC_5(Cache *VAR_1)
{
 if (VAR_1->htab != ((void*)0))
 {
  FUNC_2(VAR_0, "cache %s is already initialized", VAR_1->name);
  return;
 }





 FUNC_0(FUNC_1(FUNC_4(VAR_1), VAR_1));

 VAR_1->htab = FUNC_3(VAR_1->name, VAR_1->numelements, &VAR_1->hctl, VAR_1->flags);
 VAR_1->refcount = 1;
 VAR_1->release_on_commit = 1;
}
