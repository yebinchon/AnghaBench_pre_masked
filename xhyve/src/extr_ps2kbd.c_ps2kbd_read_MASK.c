
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ps2kbd_softc {int mtx; } ;


 int FUNC_0 (struct ps2kbd_softc*,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int
FUNC_3(struct ps2kbd_softc *VAR_0, uint8_t *VAR_1)
{
 int VAR_2;

 FUNC_1(&VAR_0->mtx);
 VAR_2 = FUNC_0(VAR_0, VAR_1);
 FUNC_2(&VAR_0->mtx);

 return (VAR_2);
}
