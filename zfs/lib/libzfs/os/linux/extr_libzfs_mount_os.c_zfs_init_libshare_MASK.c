
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int libzfs_shareflags; int * libzfs_sharehdl; } ;
typedef TYPE_1__ libzfs_handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*) ;

int
FUNC_3(libzfs_handle_t *VAR_3, int VAR_4)
{
 int VAR_5 = VAR_1;

 if (VAR_5 == VAR_1 && VAR_3->libzfs_shareflags & VAR_2) {
  VAR_3->libzfs_shareflags &= ~VAR_2;
  if (FUNC_1(VAR_3->libzfs_sharehdl)) {
   FUNC_2(VAR_3);
   VAR_3->libzfs_sharehdl = FUNC_0(VAR_4);
  }
 }

 if (VAR_5 == VAR_1 && VAR_3 && VAR_3->libzfs_sharehdl == ((void*)0))
  VAR_3->libzfs_sharehdl = FUNC_0(VAR_4);

 if (VAR_5 == VAR_1 && VAR_3->libzfs_sharehdl == ((void*)0))
  VAR_5 = VAR_0;
 return (VAR_5);
}
