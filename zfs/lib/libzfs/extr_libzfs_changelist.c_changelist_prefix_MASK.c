
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uu_avl_walk_t ;
struct TYPE_6__ {int cn_handle; void* cn_needpost; scalar_t__ cn_zoned; } ;
typedef TYPE_1__ prop_changenode_t ;
struct TYPE_7__ {int cl_prop; int cl_mflags; int cl_tree; } ;
typedef TYPE_2__ prop_changelist_t ;


 void* VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;


 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int *) ;
 TYPE_1__* FUNC_4 (int *) ;
 int * FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int *,int ) ;
 int FUNC_7 (int ,int *) ;

int
FUNC_8(prop_changelist_t *VAR_3)
{
 prop_changenode_t *VAR_4;
 uu_avl_walk_t *VAR_5;
 int VAR_6 = 0;

 if (VAR_3->cl_prop != 129 &&
     VAR_3->cl_prop != 128)
  return (0);

 if ((VAR_5 = FUNC_5(VAR_3->cl_tree, VAR_2)) == ((void*)0))
  return (-1);

 while ((VAR_4 = FUNC_4(VAR_5)) != ((void*)0)) {


  if (VAR_6 == -1) {
   VAR_4->cn_needpost = VAR_0;
   continue;
  }





  if (FUNC_2() == VAR_1 && VAR_4->cn_zoned)
   continue;

  if (!FUNC_0(VAR_4->cn_handle)) {



   switch (VAR_3->cl_prop) {
   case 129:
    if (FUNC_6(VAR_4->cn_handle, ((void*)0),
        VAR_3->cl_mflags) != 0) {
     VAR_6 = -1;
     VAR_4->cn_needpost = VAR_0;
    }
    break;
   case 128:
    (void) FUNC_7(VAR_4->cn_handle, ((void*)0));
    break;

   default:
    break;
   }
  }
 }

 FUNC_3(VAR_5);

 if (VAR_6 == -1)
  (void) FUNC_1(VAR_3);

 return (VAR_6);
}
