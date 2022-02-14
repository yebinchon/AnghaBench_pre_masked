
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ps2kbd_softc {int curcmd; int enabled; int mtx; } ;


 int const VAR_0 ;
 int const VAR_1 ;
 int FUNC_0 (struct ps2kbd_softc*,int const) ;
 int FUNC_1 (struct ps2kbd_softc*) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_2 ;

void
FUNC_5(struct ps2kbd_softc *VAR_3, uint8_t VAR_4)
{
 FUNC_3(&VAR_3->mtx);
 if (VAR_3->curcmd) {
  switch (VAR_3->curcmd) {
  case 128:
   FUNC_0(VAR_3, VAR_0);
   break;
  case 129:
   FUNC_0(VAR_3, VAR_0);
   break;
  case 130:
   FUNC_0(VAR_3, VAR_0);
   break;
  default:
   FUNC_2(VAR_2, "Unhandled ps2 keyboard current "
       "command byte 0x%02x\n", VAR_4);
   break;
  }
  VAR_3->curcmd = 0;
 } else {
  switch (VAR_4) {
  case 0x00:
   FUNC_0(VAR_3, VAR_0);
   break;
  case 132:
   FUNC_1(VAR_3);
   FUNC_0(VAR_3, VAR_0);
   FUNC_0(VAR_3, VAR_1);
   break;
  case 135:
   VAR_3->enabled = 0;
   FUNC_0(VAR_3, VAR_0);
   break;
  case 133:
   VAR_3->enabled = 1;
   FUNC_1(VAR_3);
   FUNC_0(VAR_3, VAR_0);
   break;
  case 128:
   VAR_3->curcmd = VAR_4;
   FUNC_0(VAR_3, VAR_0);
   break;
  case 131:
   FUNC_0(VAR_3, VAR_0);
   FUNC_0(VAR_3, 0xab);
   FUNC_0(VAR_3, 0x83);
   break;
  case 129:
   VAR_3->curcmd = VAR_4;
   FUNC_0(VAR_3, VAR_0);
   break;
  case 134:
   FUNC_0(VAR_3, 134);
   break;
  case 130:
   VAR_3->curcmd = VAR_4;
   FUNC_0(VAR_3, VAR_0);
   break;
  default:
   FUNC_2(VAR_2, "Unhandled ps2 keyboard command "
       "0x%02x\n", VAR_4);
   break;
  }
 }
 FUNC_4(&VAR_3->mtx);
}
