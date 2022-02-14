
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int io_parent_list; } ;
typedef TYPE_1__ zio_t ;
struct TYPE_10__ {TYPE_1__* zl_parent; TYPE_1__* zl_child; } ;
typedef TYPE_2__ zio_link_t ;
typedef int list_t ;


 int FUNC_0 (int) ;
 TYPE_2__* FUNC_1 (int *) ;
 TYPE_2__* FUNC_2 (int *,TYPE_2__*) ;

zio_t *
FUNC_3(zio_t *VAR_0, zio_link_t **VAR_1)
{
 list_t *VAR_2 = &VAR_0->io_parent_list;

 *VAR_1 = (*VAR_1 == ((void*)0)) ? FUNC_1(VAR_2) : FUNC_2(VAR_2, *VAR_1);
 if (*VAR_1 == ((void*)0))
  return (((void*)0));

 FUNC_0((*VAR_1)->zl_child == VAR_0);
 return ((*VAR_1)->zl_parent);
}
