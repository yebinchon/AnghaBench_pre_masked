
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int dummy; } ;
typedef int file_t ;


 void* FUNC_0 (char*,int,int,int ,int ,int *,int *,int *,int ) ;
 int FUNC_1 (int *) ;
 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

int
FUNC_2(void)
{
 FUNC_1(&VAR_6);

 VAR_0 = FUNC_0("spl_vn_cache",
     sizeof (struct vnode), 64, VAR_1,
     VAR_2, ((void*)0), ((void*)0), ((void*)0), 0);

 VAR_3 = FUNC_0("spl_vn_file_cache",
     sizeof (file_t), 64, VAR_4,
     VAR_5, ((void*)0), ((void*)0), ((void*)0), 0);

 return (0);
}
