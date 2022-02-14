
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int fd; int opened; } ;
struct uart_softc {TYPE_1__ tty; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (char const*,int) ;

__attribute__((used)) static int
FUNC_2(struct uart_softc *VAR_2, const char *VAR_3)
{
 int VAR_4;
 int VAR_5;

 VAR_5 = -1;

 VAR_4 = FUNC_1(VAR_3, VAR_1 | VAR_0);
 if (VAR_4 > 0 && FUNC_0(VAR_4)) {
  VAR_2->tty.fd = VAR_4;
  VAR_2->tty.opened = 1;
  VAR_5 = 0;
 }

 return (VAR_5);
}
