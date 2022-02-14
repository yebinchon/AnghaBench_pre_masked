
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* next; int name; int path; } ;
typedef TYPE_1__ smb_share_t ;
typedef TYPE_2__* sa_share_impl_t ;
struct TYPE_6__ {int sharepath; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 TYPE_1__* VAR_1 ;
 scalar_t__ FUNC_2 (int ,int ) ;

__attribute__((used)) static int
FUNC_3(sa_share_impl_t VAR_2)
{
 smb_share_t *VAR_3 = VAR_1;

 if (!FUNC_0()) {




  return (VAR_0);
 }

 while (VAR_3 != ((void*)0)) {
  if (FUNC_2(VAR_2->sharepath, VAR_3->path) == 0)
   return (FUNC_1(VAR_3->name));

  VAR_3 = VAR_3->next;
 }

 return (VAR_0);
}
