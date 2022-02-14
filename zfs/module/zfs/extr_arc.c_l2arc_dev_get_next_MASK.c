
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int l2ad_spa; int l2ad_vdev; } ;
typedef TYPE_1__ l2arc_dev_t ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_1__* FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (int ,TYPE_1__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ,TYPE_1__*,int ) ;
 int VAR_6 ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static l2arc_dev_t *
FUNC_6(void)
{
 l2arc_dev_t *VAR_7, *VAR_8 = ((void*)0);






 FUNC_2(&VAR_6);
 FUNC_2(&VAR_4);


 if (VAR_5 == 0)
  goto out;

 VAR_7 = ((void*)0);
 VAR_8 = VAR_2;
 do {

  if (VAR_8 == ((void*)0)) {
   VAR_8 = FUNC_0(VAR_3);
  } else {
   VAR_8 = FUNC_1(VAR_3, VAR_8);
   if (VAR_8 == ((void*)0))
    VAR_8 = FUNC_0(VAR_3);
  }


  if (VAR_7 == ((void*)0))
   VAR_7 = VAR_8;
  else if (VAR_8 == VAR_7)
   break;

 } while (FUNC_5(VAR_8->l2ad_vdev));


 if (FUNC_5(VAR_8->l2ad_vdev))
  VAR_8 = ((void*)0);

 VAR_2 = VAR_8;

out:
 FUNC_3(&VAR_4);





 if (VAR_8 != ((void*)0))
  FUNC_4(VAR_8->l2ad_spa, VAR_1, VAR_8, VAR_0);
 FUNC_3(&VAR_6);

 return (VAR_8);
}
