
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * z_ctldir; } ;
typedef TYPE_1__ zfsvfs_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int * FUNC_2 (TYPE_1__*,int ,int *,int *) ;
 int VAR_2 ;
 int VAR_3 ;

int
FUNC_3(zfsvfs_t *VAR_4)
{
 FUNC_0(VAR_4->z_ctldir == ((void*)0));

 VAR_4->z_ctldir = FUNC_2(VAR_4, VAR_1,
     &VAR_2, &VAR_3);
 if (VAR_4->z_ctldir == ((void*)0))
  return (FUNC_1(VAR_0));

 return (0);
}
