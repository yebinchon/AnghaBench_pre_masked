
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int hcxt; } ;
struct TYPE_6__ {scalar_t__ refcount; TYPE_1__ hctl; int htab; int (* pre_destroy_hook ) (TYPE_2__*) ;} ;
typedef TYPE_2__ Cache ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_3(Cache *VAR_0)
{
 if (VAR_0->refcount > 0)
 {

  return;
 }

 if (VAR_0->pre_destroy_hook != ((void*)0))
  VAR_0->pre_destroy_hook(VAR_0);

 FUNC_1(VAR_0->htab);
 FUNC_0(VAR_0->hctl.hcxt);
}
