
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct flock {scalar_t__ l_type; int l_pid; scalar_t__ l_len; scalar_t__ l_start; int l_whence; } ;
typedef int pid_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int,int ,struct flock*) ;

pid_t
FUNC_1(int VAR_6)
{
 struct flock VAR_7;

 if (VAR_6 < 0) {
  VAR_5 = VAR_0;
  return (-1);
 }
 VAR_7.l_type = VAR_3;
 VAR_7.l_whence = VAR_4;
 VAR_7.l_start = 0;
 VAR_7.l_len = 0;

 if (FUNC_0(VAR_6, VAR_1, &VAR_7) < 0)
  return (-1);

 if (VAR_7.l_type == VAR_2)
  return (0);

 return (VAR_7.l_pid);
}
