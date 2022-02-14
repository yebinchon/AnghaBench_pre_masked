
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lpc_uart_softc {char* name; char* opts; int enabled; int iobase; int uart_softc; int irq; } ;
struct inout_port {char* name; struct lpc_uart_softc* arg; int handler; int flags; int size; int port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct inout_port*,int) ;
 int FUNC_3 (int ,char*,char*,...) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct lpc_uart_softc* VAR_6 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct inout_port*) ;
 int * VAR_7 ;
 int VAR_8 ;
 int FUNC_6 (int ,int ,struct lpc_uart_softc*) ;
 scalar_t__ FUNC_7 (int,int *,int *) ;
 scalar_t__ FUNC_8 (int ,char*,char*) ;

__attribute__((used)) static int
FUNC_9(void)
{
 struct lpc_uart_softc *VAR_9;
 struct inout_port VAR_10;
 int VAR_11, VAR_12;

    if (VAR_7 != ((void*)0)) {
        VAR_12 = FUNC_1(VAR_7);
        if (VAR_12)
            return VAR_12;
    }


 for (VAR_11 = 0; VAR_11 < VAR_1; VAR_11++) {
  VAR_9 = &VAR_6[VAR_11];

  if (FUNC_7(VAR_11, &VAR_9->iobase, &VAR_9->irq) != 0) {
   FUNC_3(VAR_8, "Unable to allocate resources for "
       "LPC device %s\n", VAR_9->name);
   return (-1);
  }
  FUNC_4(VAR_9->irq);

  VAR_9->uart_softc = FUNC_6(VAR_3,
        VAR_4, VAR_9);

  if (FUNC_8(VAR_9->uart_softc, VAR_9->opts, VAR_9->name) != 0) {
   FUNC_3(VAR_8, "Unable to initialize backend '%s' "
       "for LPC device %s\n", VAR_9->opts, VAR_9->name);
   return (-1);
  }

  FUNC_2(&VAR_10, sizeof(struct inout_port));
  VAR_10.name = VAR_9->name;
  VAR_10.port = VAR_9->iobase;
  VAR_10.size = VAR_2;
  VAR_10.flags = VAR_0;
  VAR_10.handler = VAR_5;
  VAR_10.arg = VAR_9;

  VAR_12 = FUNC_5(&VAR_10);
  FUNC_0(VAR_12 == 0);
  VAR_9->enabled = 1;
 }

 return (0);
}
