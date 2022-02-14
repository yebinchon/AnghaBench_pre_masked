
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* next; int path; } ;
typedef TYPE_1__ smb_share_t ;
typedef TYPE_2__* sa_share_impl_t ;
typedef int boolean_t ;
struct TYPE_6__ {int sharepath; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 TYPE_1__* VAR_2 ;
 scalar_t__ FUNC_2 (int ,int ) ;

__attribute__((used)) static boolean_t
FUNC_3(sa_share_impl_t VAR_3)
{
 smb_share_t *VAR_4 = VAR_2;

 if (!FUNC_0())
  return (VAR_0);


 FUNC_1();

 while (VAR_4 != ((void*)0)) {
  if (FUNC_2(VAR_3->sharepath, VAR_4->path) == 0)
   return (VAR_1);

  VAR_4 = VAR_4->next;
 }

 return (VAR_0);
}
