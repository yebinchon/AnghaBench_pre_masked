
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct flock {scalar_t__ l_len; scalar_t__ l_start; int l_whence; int l_type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_0 (int,int ,struct flock*) ;

int
FUNC_1(int VAR_7)
{
 struct flock VAR_8;

 if (VAR_7 < 0) {
  VAR_6 = VAR_2;
  return (-1);
 }
 VAR_8.l_type = VAR_4;
 VAR_8.l_whence = VAR_5;
 VAR_8.l_start = 0;
 VAR_8.l_len = 0;

 if (FUNC_0(VAR_7, VAR_3, &VAR_8) < 0) {
  if ((VAR_6 == VAR_0) || (VAR_6 == VAR_1))
   return (1);

  return (-1);
 }
 return (0);
}
