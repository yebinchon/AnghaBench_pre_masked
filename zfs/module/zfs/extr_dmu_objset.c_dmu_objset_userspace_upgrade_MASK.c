
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int os_flags; } ;
typedef TYPE_1__ objset_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int ,int ) ;

int
FUNC_7(objset_t *VAR_3)
{
 int VAR_4 = 0;

 if (FUNC_4(VAR_3))
  return (0);
 if (FUNC_1(VAR_3))
  return (FUNC_0(VAR_0));
 if (!FUNC_5(VAR_3))
  return (FUNC_0(VAR_1));

 VAR_4 = FUNC_3(VAR_3);
 if (VAR_4)
  return (VAR_4);

 VAR_3->os_flags |= VAR_2;
 FUNC_6(FUNC_2(VAR_3), 0);
 return (0);
}
