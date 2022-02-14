
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int io_abd; int io_lock; int io_error; struct TYPE_3__* io_private; } ;
typedef TYPE_1__ zio_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static void
FUNC_4(zio_t *VAR_0)
{
 zio_t *VAR_1 = VAR_0->io_private;

 FUNC_1(&VAR_1->io_lock);
 VAR_1->io_error = FUNC_3(VAR_1->io_error, VAR_0->io_error);
 FUNC_2(&VAR_1->io_lock);

 FUNC_0(VAR_0->io_abd);
}
