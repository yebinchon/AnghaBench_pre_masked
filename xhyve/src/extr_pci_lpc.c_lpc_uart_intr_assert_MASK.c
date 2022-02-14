
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lpc_uart_softc {scalar_t__ irq; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void
FUNC_2(void *VAR_0)
{
 struct lpc_uart_softc *VAR_1 = VAR_0;

 FUNC_0(VAR_1->irq >= 0);

 FUNC_1(VAR_1->irq, VAR_1->irq);
}
