
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct winsize {scalar_t__ ws_row; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,struct winsize*) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(void)
{
 struct winsize VAR_2;

 if (FUNC_1(VAR_0) == 0)
  return (-1);

 if (FUNC_0(VAR_0, VAR_1, &VAR_2) != -1 && VAR_2.ws_row > 0)
  return (VAR_2.ws_row);

 return (-1);
}
