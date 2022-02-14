
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ps2mouse_softc {int mtx; struct atkbdc_softc* atkbdc_sc; } ;
struct atkbdc_softc {int dummy; } ;


 struct ps2mouse_softc* FUNC_0 (int,int) ;
 int FUNC_1 (int ,struct ps2mouse_softc*,int) ;
 int FUNC_2 (struct ps2mouse_softc*) ;
 int VAR_0 ;
 int FUNC_3 (struct ps2mouse_softc*) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

struct ps2mouse_softc *
FUNC_7(struct atkbdc_softc *VAR_1)
{
 struct ps2mouse_softc *VAR_2;

 VAR_2 = FUNC_0(1, sizeof (struct ps2mouse_softc));
 FUNC_4(&VAR_2->mtx, ((void*)0));
 FUNC_2(VAR_2);
 VAR_2->atkbdc_sc = VAR_1;

 FUNC_5(&VAR_2->mtx);
 FUNC_3(VAR_2);
 FUNC_6(&VAR_2->mtx);

 FUNC_1(VAR_0, VAR_2, 1);

 return (VAR_2);
}
