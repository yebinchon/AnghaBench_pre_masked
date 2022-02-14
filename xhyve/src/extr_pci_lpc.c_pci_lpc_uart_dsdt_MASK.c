
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct lpc_uart_softc {scalar_t__ irq; scalar_t__ iobase; int enabled; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (int) ;
 int * VAR_2 ;
 struct lpc_uart_softc* VAR_3 ;

__attribute__((used)) static void
FUNC_5(void)
{
 struct lpc_uart_softc *VAR_4;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  VAR_4 = &VAR_3[VAR_5];
  if (!VAR_4->enabled)
   continue;
  FUNC_3("");
  FUNC_3("Device (%s)", VAR_2[VAR_5]);
  FUNC_3("{");
  FUNC_3("  Name (_HID, EisaId (\"PNP0501\"))");
  FUNC_3("  Name (_UID, %d)", VAR_5 + 1);
  FUNC_3("  Name (_CRS, ResourceTemplate ()");
  FUNC_3("  {");
  FUNC_2(2);
  FUNC_0(((uint16_t) VAR_4->iobase), VAR_1);
  FUNC_1(((uint8_t) VAR_4->irq));
  FUNC_4(2);
  FUNC_3("  })");
  FUNC_3("}");
 }
}
