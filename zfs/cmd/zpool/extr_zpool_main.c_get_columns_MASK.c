
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct winsize {int ws_col; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,struct winsize*) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(void)
{
 struct winsize VAR_2;
 int VAR_3 = 80;
 int VAR_4;

 if (FUNC_1(VAR_0)) {
  VAR_4 = FUNC_0(VAR_0, VAR_1, &VAR_2);
  if (VAR_4 == 0)
   VAR_3 = VAR_2.ws_col;
 } else {
  VAR_3 = 999;
 }

 return (VAR_3);
}
