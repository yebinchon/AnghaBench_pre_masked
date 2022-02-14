
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {uintptr_t nvb_cur; uintptr_t nvb_lim; } ;
typedef TYPE_1__ nvbuf_t ;
struct TYPE_5__ {TYPE_1__* nva_arg; } ;
typedef TYPE_2__ nv_alloc_t ;


 uintptr_t FUNC_0 (uintptr_t,int) ;

__attribute__((used)) static void *
FUNC_1(nv_alloc_t *VAR_0, size_t VAR_1)
{
 nvbuf_t *VAR_2 = VAR_0->nva_arg;
 uintptr_t VAR_3 = VAR_2->nvb_cur;

 if (VAR_1 == 0 || VAR_3 + VAR_1 > VAR_2->nvb_lim)
  return (((void*)0));

 VAR_2->nvb_cur = FUNC_0(VAR_3 + VAR_1, sizeof (uintptr_t));

 return ((void *)VAR_3);
}
