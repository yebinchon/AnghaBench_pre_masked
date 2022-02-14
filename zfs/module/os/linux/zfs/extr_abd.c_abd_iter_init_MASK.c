
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct abd_iter {int * iter_sg; int iter_offset; scalar_t__ iter_pos; scalar_t__ iter_mapsize; int * iter_mapaddr; int * iter_abd; } ;
typedef int abd_t ;
struct TYPE_2__ {int * abd_sgl; int abd_offset; } ;


 TYPE_1__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(struct abd_iter *VAR_0, abd_t *VAR_1, int VAR_2)
{
 FUNC_2(VAR_1);
 VAR_0->iter_abd = VAR_1;
 VAR_0->iter_mapaddr = ((void*)0);
 VAR_0->iter_mapsize = 0;
 VAR_0->iter_pos = 0;
 if (FUNC_1(VAR_1)) {
  VAR_0->iter_offset = 0;
  VAR_0->iter_sg = ((void*)0);
 } else {
  VAR_0->iter_offset = FUNC_0(VAR_1).abd_offset;
  VAR_0->iter_sg = FUNC_0(VAR_1).abd_sgl;
 }
}
