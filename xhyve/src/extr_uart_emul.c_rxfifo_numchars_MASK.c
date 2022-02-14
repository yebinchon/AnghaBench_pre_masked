
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fifo {int num; } ;
struct uart_softc {struct fifo rxfifo; } ;



__attribute__((used)) static int
FUNC_0(struct uart_softc *VAR_0)
{
 struct fifo *VAR_1 = &VAR_0->rxfifo;

 return (VAR_1->num);
}
