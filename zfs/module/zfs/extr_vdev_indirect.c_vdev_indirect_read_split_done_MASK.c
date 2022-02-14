
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ io_error; TYPE_2__* io_private; } ;
typedef TYPE_1__ zio_t ;
struct TYPE_5__ {int * ic_data; } ;
typedef TYPE_2__ indirect_child_t ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1(zio_t *VAR_0)
{
 indirect_child_t *VAR_1 = VAR_0->io_private;

 if (VAR_0->io_error != 0) {




  FUNC_0(VAR_1->ic_data);
  VAR_1->ic_data = ((void*)0);
 }
}
