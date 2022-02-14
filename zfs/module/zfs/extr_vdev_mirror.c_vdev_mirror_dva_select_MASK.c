
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_3__* io_vsd; TYPE_1__* io_bp; } ;
typedef TYPE_2__ zio_t ;
struct TYPE_7__ {int* mm_preferred; } ;
typedef TYPE_3__ mirror_map_t ;
typedef int dva_t ;
struct TYPE_5__ {int * blk_dva; } ;


 scalar_t__ FUNC_0 (int *) ;

__attribute__((used)) static int
FUNC_1(zio_t *VAR_0, int VAR_1)
{
 dva_t *VAR_2 = VAR_0->io_bp->blk_dva;
 mirror_map_t *VAR_3 = VAR_0->io_vsd;
 int VAR_4;
 int VAR_5;

 VAR_4 = VAR_3->mm_preferred[VAR_1];
 for (VAR_1--; VAR_1 >= 0; VAR_1--) {
  VAR_5 = VAR_3->mm_preferred[VAR_1];
  if (FUNC_0(&VAR_2[VAR_5]) == FUNC_0(&VAR_2[VAR_4]))
   VAR_4 = VAR_5;
 }
 return (VAR_4);
}
