
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ zt_bufsize; struct TYPE_6__* zt_next; int zt_orig_size; int zt_orig_abd; int (* zt_transform ) (TYPE_2__*,int ,int ) ;} ;
typedef TYPE_1__ zio_transform_t ;
struct TYPE_7__ {TYPE_1__* io_transform_stack; int io_size; int io_abd; } ;
typedef TYPE_2__ zio_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_2__*,int ,int ) ;

void
FUNC_3(zio_t *VAR_0)
{
 zio_transform_t *VAR_1;

 while ((VAR_1 = VAR_0->io_transform_stack) != ((void*)0)) {
  if (VAR_1->zt_transform != ((void*)0))
   VAR_1->zt_transform(VAR_0,
       VAR_1->zt_orig_abd, VAR_1->zt_orig_size);

  if (VAR_1->zt_bufsize != 0)
   FUNC_0(VAR_0->io_abd);

  VAR_0->io_abd = VAR_1->zt_orig_abd;
  VAR_0->io_size = VAR_1->zt_orig_size;
  VAR_0->io_transform_stack = VAR_1->zt_next;

  FUNC_1(VAR_1, sizeof (zio_transform_t));
 }
}
