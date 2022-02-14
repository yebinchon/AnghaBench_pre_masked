
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int fd; int opened; char* name; } ;
struct uart_softc {TYPE_1__ tty; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int ,int) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_6 (char*,char const*) ;
 int FUNC_7 (struct uart_softc*) ;
 int VAR_6 ;
 scalar_t__ FUNC_8 (struct uart_softc*,char const*) ;
 int FUNC_9 (int) ;

int
FUNC_10(struct uart_softc *VAR_7, const char *VAR_8, const char *VAR_9)
{
 int VAR_10;
 int VAR_11;
 char *VAR_12;

 VAR_10 = -1;

 if (VAR_8 == ((void*)0))
  return (0);

 if (FUNC_6("stdio", VAR_8) == 0 && !VAR_6) {
  VAR_7->tty.fd = VAR_3;
  VAR_7->tty.opened = 1;
  VAR_6 = 1;
  VAR_10 = FUNC_0(VAR_7->tty.fd, VAR_0, VAR_1);
 } else if (FUNC_6("autopty", VAR_8) == 0) {
  if ((VAR_11 = FUNC_3("/dev/ptmx", VAR_2 | VAR_1)) == -1) {
   FUNC_1(VAR_4, "error opening /dev/ptmx char device");
   return VAR_10;
  }

  if ((VAR_12 = FUNC_5(VAR_11)) == ((void*)0)) {
   FUNC_4("ptsname: error getting name for slave pseudo terminal");
   return VAR_10;
  }

  if ((VAR_10 = FUNC_2(VAR_11)) == -1) {
   FUNC_4("error setting up ownership and permissions on slave pseudo terminal");
   return VAR_10;
  }

  if ((VAR_10 = FUNC_9(VAR_11)) == -1) {
   FUNC_4("error unlocking slave pseudo terminal, to allow its usage");
   return VAR_10;
  }

  FUNC_1(VAR_5, "%s connected to %s\n", VAR_9, VAR_12);
  VAR_7->tty.fd = VAR_11;
  VAR_7->tty.name = VAR_12;
  VAR_7->tty.opened = 1;
  VAR_10 = 0;
 } else if (FUNC_8(VAR_7, VAR_8) == 0) {
  VAR_10 = 0;
 }

 if (VAR_10 == 0)
  FUNC_7(VAR_7);

 return (VAR_10);
}
