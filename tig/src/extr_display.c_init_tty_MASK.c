
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct termios {int dummy; } ;
struct TYPE_2__ {int fd; int opgrp; int attr; int file; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 () ;
 TYPE_1__ VAR_5 ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int ) ;

void
FUNC_10(void)
{

 VAR_5.file = FUNC_3("/dev/tty", "r+");
 if (!VAR_5.file)
  FUNC_1("Failed to open tty for input");
 VAR_5.fd = FUNC_2(VAR_5.file);


 VAR_5.attr = FUNC_0(1, sizeof(struct termios));
 if (!VAR_5.attr)
  FUNC_1("Failed allocation for tty attributes");
 FUNC_7(VAR_5.fd, VAR_5.attr);


 FUNC_6(VAR_0, VAR_2);
 FUNC_5(FUNC_4(), FUNC_4());
 VAR_5.opgrp = FUNC_8(VAR_5.fd);
 FUNC_9(VAR_5.fd, FUNC_4());
 FUNC_6(VAR_0, VAR_1);

 VAR_3 = VAR_4;
}
