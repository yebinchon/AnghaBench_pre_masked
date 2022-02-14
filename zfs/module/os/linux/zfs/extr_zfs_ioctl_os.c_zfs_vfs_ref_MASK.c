
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* z_sb; } ;
typedef TYPE_2__ zfsvfs_t ;
struct TYPE_4__ {int s_active; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;

int
FUNC_2(zfsvfs_t **VAR_1)
{
 if (*VAR_1 == ((void*)0) || (*VAR_1)->z_sb == ((void*)0) ||
     !FUNC_1(&((*VAR_1)->z_sb->s_active))) {
  return (FUNC_0(VAR_0));
 }
 return (0);
}
