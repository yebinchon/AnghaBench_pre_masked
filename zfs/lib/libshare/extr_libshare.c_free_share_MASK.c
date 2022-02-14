
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_8__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef TYPE_2__* sa_share_impl_t ;
struct TYPE_13__ {struct TYPE_13__* next; TYPE_1__* ops; } ;
typedef TYPE_3__ sa_fstype_t ;
struct TYPE_14__ {TYPE_2__* resource; } ;
struct TYPE_12__ {struct TYPE_12__* fsinfo; struct TYPE_12__* dataset; struct TYPE_12__* sharepath; } ;
struct TYPE_11__ {int (* clear_shareopts ) (TYPE_2__*) ;} ;


 TYPE_8__* FUNC_0 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_1 (TYPE_2__*) ;
 TYPE_3__* VAR_0 ;
 int FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_3(sa_share_impl_t VAR_1)
{
 sa_fstype_t *VAR_2;

 VAR_2 = VAR_0;
 while (VAR_2 != ((void*)0)) {
  VAR_2->ops->clear_shareopts(VAR_1);

  FUNC_1(FUNC_0(VAR_1, VAR_2)->resource);

  VAR_2 = VAR_2->next;
 }

 FUNC_1(VAR_1->sharepath);
 FUNC_1(VAR_1->dataset);
 FUNC_1(VAR_1->fsinfo);
 FUNC_1(VAR_1);
}
