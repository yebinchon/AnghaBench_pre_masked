
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int data; } ;
struct TYPE_4__ {int data; } ;
struct TYPE_6__ {TYPE_2__ upper; TYPE_1__ lower; } ;
union e1000_tx_udesc {TYPE_3__ td; } ;
typedef int uint16_t ;
struct e82545_softc {union e1000_tx_udesc* esc_txdesc; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_0(struct e82545_softc *VAR_2, uint16_t VAR_3, uint16_t VAR_4,
    uint16_t VAR_5, int *VAR_6)
{
 union e1000_tx_udesc *VAR_7;

 for ( ; VAR_3 != VAR_4; VAR_3 = (VAR_3 + 1) % VAR_5) {
  VAR_7 = &VAR_2->esc_txdesc[VAR_3];
  if (VAR_7->td.lower.data & VAR_0) {
   VAR_7->td.upper.data |= VAR_1;
   *VAR_6 = 1;
  }
 }
}
