
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct window {int options; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,char*) ;

__attribute__((used)) static int
FUNC_1(struct window *VAR_3, int VAR_4)
{
 if (VAR_4 & VAR_1) {
  if (FUNC_0(VAR_3->options, "monitor-bell"))
   return (1);
 }
 if (VAR_4 & VAR_0) {
  if (FUNC_0(VAR_3->options, "monitor-activity"))
   return (1);
 }
 if (VAR_4 & VAR_2) {
  if (FUNC_0(VAR_3->options, "monitor-silence") != 0)
   return (1);
 }
 return (0);
}
