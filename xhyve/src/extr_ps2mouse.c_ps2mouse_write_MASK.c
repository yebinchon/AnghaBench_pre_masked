
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ps2mouse_softc {int curcmd; int sampling_rate; int resolution; int status; int mtx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ps2mouse_softc*,int) ;
 int FUNC_1 (struct ps2mouse_softc*) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (struct ps2mouse_softc*) ;
 int FUNC_4 (struct ps2mouse_softc*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_5 ;

void
FUNC_7(struct ps2mouse_softc *VAR_6, uint8_t VAR_7, int VAR_8)
{
 FUNC_5(&VAR_6->mtx);
 FUNC_1(VAR_6);
 if (VAR_6->curcmd) {
  switch (VAR_6->curcmd) {
  case 131:
   VAR_6->sampling_rate = VAR_7;
   FUNC_0(VAR_6, VAR_0);
   break;
  case 132:
   VAR_6->resolution = VAR_7;
   FUNC_0(VAR_6, VAR_0);
   break;
  default:
   FUNC_2(VAR_5, "Unhandled ps2 mouse current "
       "command byte 0x%02x\n", VAR_7);
   break;
  }
  VAR_6->curcmd = 0;

 } else if (VAR_8) {
  FUNC_0(VAR_6, VAR_7);
 } else {
  switch (VAR_7) {
  case 0x00:
   FUNC_0(VAR_6, VAR_0);
   break;
  case 138:
   FUNC_4(VAR_6);
   FUNC_0(VAR_6, VAR_0);
   FUNC_0(VAR_6, VAR_1);
   FUNC_0(VAR_6, VAR_2);
   break;
  case 134:
   FUNC_4(VAR_6);
   FUNC_0(VAR_6, VAR_0);
   break;
  case 140:
   FUNC_1(VAR_6);
   VAR_6->status &= ~VAR_3;
   FUNC_0(VAR_6, VAR_0);
   break;
  case 139:
   FUNC_1(VAR_6);
   VAR_6->status |= VAR_3;
   FUNC_0(VAR_6, VAR_0);
   break;
  case 131:
   VAR_6->curcmd = VAR_7;
   FUNC_0(VAR_6, VAR_0);
   break;
  case 136:
   FUNC_0(VAR_6, VAR_0);
   FUNC_0(VAR_6, VAR_2);
   break;
  case 133:
   VAR_6->status |= VAR_4;
   FUNC_0(VAR_6, VAR_0);
   break;
  case 137:
   FUNC_0(VAR_6, VAR_0);
   FUNC_3(VAR_6);
   break;
  case 128:
   VAR_6->status &= ~VAR_4;
   FUNC_0(VAR_6, VAR_0);
   break;
  case 135:
   FUNC_0(VAR_6, VAR_0);
   FUNC_0(VAR_6, VAR_6->status);
   FUNC_0(VAR_6, VAR_6->resolution);
   FUNC_0(VAR_6, VAR_6->sampling_rate);
   break;
  case 132:
   VAR_6->curcmd = VAR_7;
   FUNC_0(VAR_6, VAR_0);
   break;
  case 130:
  case 129:
   FUNC_0(VAR_6, VAR_0);
   break;
  default:
   FUNC_0(VAR_6, VAR_0);
   FUNC_2(VAR_5, "Unhandled ps2 mouse command "
       "0x%02x\n", VAR_7);
   break;
  }
 }
 FUNC_6(&VAR_6->mtx);
}
