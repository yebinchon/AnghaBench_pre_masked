
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* sa_share_impl_t ;
typedef int sa_handle_t ;
typedef TYPE_2__* sa_handle_impl_t ;
struct TYPE_8__ {TYPE_1__* shares; int * zfs_libhandle; } ;
struct TYPE_7__ {struct TYPE_7__* next; int * dataset; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*,int *) ;
 int FUNC_4 (TYPE_2__*) ;

void
FUNC_5(sa_handle_t VAR_0)
{
 sa_handle_impl_t VAR_1 = (sa_handle_impl_t)VAR_0;
 sa_share_impl_t VAR_2, VAR_3;
 sa_share_impl_t *VAR_4;

 if (VAR_1 == ((void*)0))
  return;






 VAR_4 = &(VAR_1->shares);
 VAR_2 = *VAR_4;
 while (VAR_2 != ((void*)0)) {
  VAR_3 = VAR_2->next;

  if (VAR_2->dataset == ((void*)0)) {

   *VAR_4 = VAR_3;

   FUNC_3(VAR_2, ((void*)0));

   FUNC_1(VAR_2);
  } else {
   VAR_4 = &(VAR_2->next);
  }

  VAR_2 = VAR_3;
 }

 FUNC_4(VAR_1);

 if (VAR_1->zfs_libhandle != ((void*)0))
  FUNC_2(VAR_1->zfs_libhandle);

 VAR_2 = VAR_1->shares;
 while (VAR_2 != ((void*)0)) {
  VAR_3 = VAR_2->next;
  FUNC_1(VAR_2);
  VAR_2 = VAR_3;
 }

 FUNC_0(VAR_1);
}
