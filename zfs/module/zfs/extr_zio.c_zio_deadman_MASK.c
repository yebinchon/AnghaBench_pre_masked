
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * io_spa; } ;
typedef TYPE_1__ zio_t ;
typedef int spa_t ;





 int FUNC_0 (char*,char*,char*) ;
 int FUNC_1 (int *) ;
 char* FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (char*,char*,char*) ;
 int VAR_0 ;
 int FUNC_5 (TYPE_1__*,int ) ;

void
FUNC_6(zio_t *VAR_1, char *VAR_2)
{
 spa_t *VAR_3 = VAR_1->io_spa;
 char *VAR_4 = FUNC_2(VAR_3);

 if (!VAR_0 || FUNC_3(VAR_3))
  return;

 FUNC_5(VAR_1, 0);

 switch (FUNC_1(VAR_3)) {
 case 128:
  FUNC_4("%s waiting for hung I/O to pool '%s'", VAR_2, VAR_4);
  break;

 case 130:
  FUNC_4("%s restarting hung I/O for pool '%s'", VAR_2, VAR_4);
  break;

 case 129:
  FUNC_0("%s determined I/O to pool '%s' is hung.", VAR_2, VAR_4);
  break;
 }
}
