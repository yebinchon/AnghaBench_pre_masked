
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ zpool_state; int zpool_name; } ;
typedef TYPE_1__ zpool_handle_t ;
typedef int libzfs_handle_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *,int ,int ,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__* FUNC_3 (int *,char const*) ;

zpool_handle_t *
FUNC_4(libzfs_handle_t *VAR_3, const char *VAR_4)
{
 zpool_handle_t *VAR_5;

 if ((VAR_5 = FUNC_3(VAR_3, VAR_4)) == ((void*)0))
  return (((void*)0));

 if (VAR_5->zpool_state == VAR_1) {
  (void) FUNC_1(VAR_3, VAR_0,
      FUNC_0(VAR_2, "cannot open '%s'"), VAR_5->zpool_name);
  FUNC_2(VAR_5);
  return (((void*)0));
 }

 return (VAR_5);
}
