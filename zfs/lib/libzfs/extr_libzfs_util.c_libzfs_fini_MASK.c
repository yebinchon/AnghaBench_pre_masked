
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ libzfs_sharetab; scalar_t__ libzfs_mnttab; int libzfs_fd; } ;
typedef TYPE_1__ libzfs_handle_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 () ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 () ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*) ;

void
FUNC_10(libzfs_handle_t *VAR_0)
{
 (void) FUNC_0(VAR_0->libzfs_fd);
 if (VAR_0->libzfs_mnttab)



  (void) FUNC_2(VAR_0->libzfs_mnttab);

 if (VAR_0->libzfs_sharetab)
  (void) FUNC_2(VAR_0->libzfs_sharetab);
 FUNC_8(VAR_0);
 FUNC_9(VAR_0);
 FUNC_7(VAR_0);
 FUNC_6(VAR_0);
 FUNC_5();
 FUNC_3();
 FUNC_4(VAR_0);
}
