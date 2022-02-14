
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {int opened; } ;
struct uart_softc {int lcr; int dll; int dlh; int mcr; int thre_int_pending; int ier; int fcr; int msr; int scr; int mtx; TYPE_1__ tty; int lsr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;

 int VAR_21 ;
 int VAR_22 ;







 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct uart_softc*,int) ;
 int FUNC_3 (struct uart_softc*,int) ;
 int FUNC_4 (TYPE_1__*,int) ;
 int FUNC_5 (struct uart_softc*) ;

void
FUNC_6(struct uart_softc *VAR_23, int VAR_24, uint8_t VAR_25)
{
 int VAR_26;
 uint8_t VAR_27;

 FUNC_0(&VAR_23->mtx);




 if ((VAR_23->lcr & VAR_5) != 0) {
  if (VAR_24 == VAR_22) {
   VAR_23->dll = VAR_25;
   goto done;
  }

  if (VAR_24 == VAR_21) {
   VAR_23->dlh = VAR_25;
   goto done;
  }
 }

        switch (VAR_24) {
 case 135:
  if (VAR_23->mcr & VAR_8) {
   if (FUNC_2(VAR_23, VAR_25) != 0)
    VAR_23->lsr |= VAR_6;
  } else if (VAR_23->tty.opened) {
   FUNC_4(&VAR_23->tty, VAR_25);
  }
  VAR_23->thre_int_pending = 1;
  break;
 case 133:




  VAR_23->ier = VAR_25 & 0x0F;
  break;
  case 134:




   if ((VAR_23->fcr & VAR_1) ^ (VAR_25 & VAR_1)) {
    VAR_26 = (VAR_25 & VAR_1) ? VAR_4 : 1;
    FUNC_3(VAR_23, VAR_26);
   }





   if ((VAR_25 & VAR_1) == 0) {
    VAR_23->fcr = 0;
   } else {
    if ((VAR_25 & VAR_2) != 0)
     FUNC_3(VAR_23, VAR_4);

    VAR_23->fcr = VAR_25 &
      (VAR_1 | VAR_0 | VAR_3);
   }
   break;
  case 132:
   VAR_23->lcr = VAR_25;
   break;
  case 130:

   VAR_23->mcr = VAR_25 & 0x1F;

   VAR_27 = 0;
   if (VAR_23->mcr & VAR_8) {




    if (VAR_23->mcr & VAR_11)
     VAR_27 |= VAR_12;
    if (VAR_23->mcr & VAR_7)
     VAR_27 |= VAR_18;
    if (VAR_23->mcr & VAR_9)
     VAR_27 |= VAR_19;
    if (VAR_23->mcr & VAR_10)
     VAR_27 |= VAR_13;
   }






   if ((VAR_27 & VAR_12) ^ (VAR_23->msr & VAR_12))
    VAR_23->msr |= VAR_14;
   if ((VAR_27 & VAR_18) ^ (VAR_23->msr & VAR_18))
    VAR_23->msr |= VAR_16;
   if ((VAR_27 & VAR_13) ^ (VAR_23->msr & VAR_13))
    VAR_23->msr |= VAR_15;
   if ((VAR_23->msr & VAR_19) != 0 && (VAR_27 & VAR_19) == 0)
    VAR_23->msr |= VAR_20;





   VAR_23->msr &= VAR_17;
   VAR_23->msr |= VAR_27;
   break;
  case 131:




   break;
  case 129:



   break;
  case 128:
   VAR_23->scr = VAR_25;
   break;
  default:
   break;
 }

done:
 FUNC_5(VAR_23);
 FUNC_1(&VAR_23->mtx);
}
