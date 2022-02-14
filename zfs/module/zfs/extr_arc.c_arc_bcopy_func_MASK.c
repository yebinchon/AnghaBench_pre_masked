
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int zio_t ;
typedef int zbookmark_phys_t ;
typedef int blkptr_t ;
struct TYPE_5__ {int b_data; } ;
typedef TYPE_1__ arc_buf_t ;


 int FUNC_0 (TYPE_1__*,void*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,void*,int ) ;

void
FUNC_3(zio_t *VAR_0, const zbookmark_phys_t *VAR_1, const blkptr_t *VAR_2,
    arc_buf_t *VAR_3, void *VAR_4)
{
 if (VAR_3 == ((void*)0))
  return;

 FUNC_2(VAR_3->b_data, VAR_4, FUNC_1(VAR_3));
 FUNC_0(VAR_3, VAR_4);
}
