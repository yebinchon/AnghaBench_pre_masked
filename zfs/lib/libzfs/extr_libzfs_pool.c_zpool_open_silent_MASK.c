
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int zpool_name; int * zpool_hdl; } ;
typedef TYPE_1__ zpool_handle_t ;
typedef int libzfs_handle_t ;
typedef scalar_t__ boolean_t ;


 int FUNC_0 (int ,char const*,int) ;
 TYPE_1__* FUNC_1 (int *,int) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (TYPE_1__*,scalar_t__*) ;

int
FUNC_4(libzfs_handle_t *VAR_0, const char *VAR_1, zpool_handle_t **VAR_2)
{
 zpool_handle_t *VAR_3;
 boolean_t VAR_4;

 if ((VAR_3 = FUNC_1(VAR_0, sizeof (zpool_handle_t))) == ((void*)0))
  return (-1);

 VAR_3->zpool_hdl = VAR_0;
 (void) FUNC_0(VAR_3->zpool_name, VAR_1, sizeof (VAR_3->zpool_name));

 if (FUNC_3(VAR_3, &VAR_4) != 0) {
  FUNC_2(VAR_3);
  return (-1);
 }

 if (VAR_4) {
  FUNC_2(VAR_3);
  *VAR_2 = ((void*)0);
  return (0);
 }

 *VAR_2 = VAR_3;
 return (0);
}
