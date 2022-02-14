
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int io_spa; TYPE_2__* io_private; } ;
typedef TYPE_1__ zio_t ;
struct TYPE_7__ {int vcsa_obsolete_segs; } ;
typedef TYPE_2__ vdev_copy_segment_arg_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,TYPE_2__*) ;
 int FUNC_3 (int ,int ,int ) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_4(zio_t *VAR_2)
{
 vdev_copy_segment_arg_t *VAR_3 = VAR_2->io_private;

 FUNC_2(VAR_3->vcsa_obsolete_segs,
     VAR_1, VAR_3);
 FUNC_1(VAR_3->vcsa_obsolete_segs);
 FUNC_0(VAR_3, sizeof (*VAR_3));

 FUNC_3(VAR_2->io_spa, VAR_0, VAR_2->io_spa);
}
