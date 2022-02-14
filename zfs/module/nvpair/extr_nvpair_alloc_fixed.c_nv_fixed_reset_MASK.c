
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {uintptr_t nvb_cur; } ;
typedef TYPE_1__ nvbuf_t ;
struct TYPE_5__ {TYPE_1__* nva_arg; } ;
typedef TYPE_2__ nv_alloc_t ;



__attribute__((used)) static void
FUNC_0(nv_alloc_t *VAR_0)
{
 nvbuf_t *VAR_1 = VAR_0->nva_arg;

 VAR_1->nvb_cur = (uintptr_t)&VAR_1[1];
}
