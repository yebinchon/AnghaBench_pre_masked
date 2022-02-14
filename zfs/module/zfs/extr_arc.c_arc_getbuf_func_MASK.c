
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ io_error; } ;
typedef TYPE_1__ zio_t ;
typedef int zbookmark_phys_t ;
typedef int blkptr_t ;
struct TYPE_6__ {int * b_data; } ;
typedef TYPE_2__ arc_buf_t ;


 int FUNC_0 (int) ;

void
FUNC_1(zio_t *VAR_0, const zbookmark_phys_t *VAR_1, const blkptr_t *VAR_2,
    arc_buf_t *VAR_3, void *VAR_4)
{
 arc_buf_t **VAR_5 = VAR_4;

 if (VAR_3 == ((void*)0)) {
  FUNC_0(VAR_0 == ((void*)0) || VAR_0->io_error != 0);
  *VAR_5 = ((void*)0);
 } else {
  FUNC_0(VAR_0 == ((void*)0) || VAR_0->io_error == 0);
  *VAR_5 = VAR_3;
  FUNC_0(VAR_3->b_data != ((void*)0));
 }
}
