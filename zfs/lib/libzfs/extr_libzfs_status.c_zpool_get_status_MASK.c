
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t zpool_status_t ;
struct TYPE_3__ {int zpool_config; } ;
typedef TYPE_1__ zpool_handle_t ;
typedef int zpool_errata_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t FUNC_0 (int ,int ,int *) ;
 char** VAR_2 ;

zpool_status_t
FUNC_1(zpool_handle_t *VAR_3, char **VAR_4, zpool_errata_t *VAR_5)
{
 zpool_status_t VAR_6 = FUNC_0(VAR_3->zpool_config, VAR_0, VAR_5);
 if (VAR_4 != ((void*)0)) {
  if (VAR_6 >= VAR_1)
   *VAR_4 = ((void*)0);
  else
   *VAR_4 = VAR_2[VAR_6];
 }
 return (VAR_6);
}
