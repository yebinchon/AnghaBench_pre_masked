
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int zfs_keystatus_t ;
struct TYPE_4__ {scalar_t__ dd_crypto_obj; } ;
typedef TYPE_1__ dsl_dir_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static zfs_keystatus_t
FUNC_1(dsl_dir_t *VAR_3)
{

 if (VAR_3->dd_crypto_obj == 0)
  return (VAR_1);

 return (FUNC_0(VAR_3) == 0 ?
     VAR_0 : VAR_2);
}
