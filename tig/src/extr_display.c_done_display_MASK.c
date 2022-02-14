
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int opgrp; int fd; int * attr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 TYPE_1__ VAR_5 ;
 int FUNC_4 (int ,int ) ;
 scalar_t__ VAR_6 ;
 int FUNC_5 (int ,int ,int *) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (scalar_t__) ;

__attribute__((used)) static void
FUNC_8(void)
{
 if (VAR_4) {
  if (VAR_6) {
   FUNC_7(VAR_6);
   FUNC_1();
  }
  FUNC_0(1);
  FUNC_2();
 }
 VAR_4 = 0;

 if (VAR_5.attr) {
  FUNC_5(VAR_5.fd, VAR_3, VAR_5.attr);
  FUNC_3(VAR_5.attr);
  VAR_5.attr = ((void*)0);
 }
 FUNC_4(VAR_0, VAR_2);
 FUNC_6(VAR_5.fd, VAR_5.opgrp);
 FUNC_4(VAR_0, VAR_1);
}
