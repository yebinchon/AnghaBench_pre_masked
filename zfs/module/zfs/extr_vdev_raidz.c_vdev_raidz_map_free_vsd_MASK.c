
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* io_vsd; } ;
typedef TYPE_1__ zio_t ;
struct TYPE_6__ {int rm_freed; scalar_t__ rm_reports; } ;
typedef TYPE_2__ raidz_map_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_2(zio_t *VAR_0)
{
 raidz_map_t *VAR_1 = VAR_0->io_vsd;

 FUNC_0(VAR_1->rm_freed);
 VAR_1->rm_freed = 1;

 if (VAR_1->rm_reports == 0)
  FUNC_1(VAR_1);
}
