
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct virtio_softc {int vs_pi; int vs_flags; TYPE_1__* vs_vc; } ;
struct TYPE_2__ {int vc_nvq; } ;


 int VAR_0 ;
 int FUNC_0 (struct virtio_softc*) ;
 int FUNC_1 (struct virtio_softc*) ;
 int FUNC_2 (int ,int) ;
 scalar_t__ FUNC_3 (int ,int,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct virtio_softc*) ;

int
FUNC_6(struct virtio_softc *VAR_1, int VAR_2, int VAR_3)
{
 int VAR_4;

 if (VAR_3) {
  VAR_1->vs_flags |= VAR_0;
  FUNC_0(VAR_1);
  FUNC_5(VAR_1);
  FUNC_1(VAR_1);
  VAR_4 = VAR_1->vs_vc->vc_nvq + 1;
  if (FUNC_3(VAR_1->vs_pi, VAR_4, VAR_2))
   return (1);
 } else
  VAR_1->vs_flags &= ~VAR_0;


 FUNC_2(VAR_1->vs_pi, 1);


 FUNC_4(VAR_1->vs_pi);

 return (0);
}
