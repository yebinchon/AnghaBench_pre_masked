
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct atkbdc_softc {int mtx; } ;


 int FUNC_0 (struct atkbdc_softc*) ;
 int FUNC_1 (struct atkbdc_softc*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void
FUNC_4(struct atkbdc_softc *VAR_0, int VAR_1)
{
 FUNC_2(&VAR_0->mtx);

 if (VAR_1)
  FUNC_1(VAR_0);
 else
  FUNC_0(VAR_0);
 FUNC_3(&VAR_0->mtx);
}
