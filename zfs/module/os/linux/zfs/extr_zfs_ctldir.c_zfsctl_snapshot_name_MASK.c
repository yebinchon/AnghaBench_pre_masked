
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * z_os; } ;
typedef TYPE_1__ zfsvfs_t ;
typedef int objset_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (char*,char const*) ;
 int FUNC_3 (char const*) ;
 scalar_t__ FUNC_4 (char const*,int *,int *) ;

__attribute__((used)) static int
FUNC_5(zfsvfs_t *VAR_2, const char *VAR_3, int VAR_4,
    char *VAR_5)
{
 objset_t *VAR_6 = VAR_2->z_os;

 if (FUNC_4(VAR_3, ((void*)0), ((void*)0)) != 0)
  return (FUNC_0(VAR_0));

 FUNC_1(VAR_6, VAR_5);
 if ((FUNC_3(VAR_5) + 1 + FUNC_3(VAR_3)) >= VAR_4)
  return (FUNC_0(VAR_1));

 (void) FUNC_2(VAR_5, "@");
 (void) FUNC_2(VAR_5, VAR_3);

 return (0);
}
