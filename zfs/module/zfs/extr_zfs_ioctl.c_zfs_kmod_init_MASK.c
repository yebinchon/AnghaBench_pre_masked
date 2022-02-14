
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int zfsdev_state_t ;
struct TYPE_3__ {int zs_minor; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int *,int ,int *) ;
 int * VAR_4 ;
 int VAR_5 ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *,int *) ;
 int * VAR_6 ;
 int VAR_7 ;
 int FUNC_5 () ;
 int VAR_8 ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 TYPE_1__* VAR_9 ;
 int VAR_10 ;
 int FUNC_9 () ;
 int FUNC_10 () ;

int
FUNC_11(void)
{
 int VAR_11;

 if ((VAR_11 = FUNC_10()) != 0)
  return (VAR_11);

 FUNC_3(VAR_0 | VAR_1);
 FUNC_6();

 FUNC_7();

 FUNC_1(&VAR_10, ((void*)0), VAR_3, ((void*)0));
 VAR_9 = FUNC_0(sizeof (zfsdev_state_t), VAR_2);
 VAR_9->zs_minor = -1;

 if ((VAR_11 = FUNC_8()) != 0)
  goto out;

 FUNC_4(&VAR_8, ((void*)0));
 FUNC_4(&VAR_5, VAR_4);
 FUNC_4(&VAR_7, VAR_6);

 return (0);
out:
 FUNC_5();
 FUNC_2();
 FUNC_9();

 return (VAR_11);
}
