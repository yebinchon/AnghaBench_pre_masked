
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int znode_t ;
struct TYPE_5__ {int zgd_lr; scalar_t__ zgd_db; int * zgd_private; } ;
typedef TYPE_1__ zgd_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

void
FUNC_5(zgd_t *VAR_0, int VAR_1)
{
 znode_t *VAR_2 = VAR_0->zgd_private;

 if (VAR_0->zgd_db)
  FUNC_1(VAR_0->zgd_db, VAR_0);

 FUNC_4(VAR_0->zgd_lr);





 FUNC_3(FUNC_0(VAR_2));

 FUNC_2(VAR_0, sizeof (zgd_t));
}
