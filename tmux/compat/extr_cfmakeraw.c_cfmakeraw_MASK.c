
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct termios {int c_iflag; int c_lflag; int c_cflag; int c_oflag; } ;


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

void
FUNC_0(struct termios *VAR_17)
{
 VAR_17->c_iflag &= ~(VAR_8|VAR_0|VAR_16|VAR_12|VAR_10|VAR_9|VAR_6|VAR_13);
 VAR_17->c_oflag &= ~VAR_14;
 VAR_17->c_lflag &= ~(VAR_3|VAR_4|VAR_5|VAR_11|VAR_7);
 VAR_17->c_cflag &= ~(VAR_2|VAR_15);
 VAR_17->c_cflag |= VAR_1;
}
