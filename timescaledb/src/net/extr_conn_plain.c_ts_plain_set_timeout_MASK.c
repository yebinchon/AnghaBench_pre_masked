
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct timeval {unsigned long tv_sec; unsigned long tv_usec; } ;
struct TYPE_3__ {void* err; int sock; } ;
typedef unsigned long DWORD ;
typedef TYPE_1__ Connection ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int ,int ,int ,char const*,int) ;

int
FUNC_1(Connection *VAR_3, unsigned long VAR_4)
{







 struct timeval VAR_5 = {
  .tv_sec = VAR_4 / 1000L,
  .tv_usec = (VAR_4 % 1000L) * 1000L,
 };
 int VAR_6 = sizeof(struct timeval);






 VAR_3->err = FUNC_0(VAR_3->sock, VAR_0, VAR_1, (const char *) &VAR_5, VAR_6);

 if (VAR_3->err != 0)
  return -1;

 VAR_3->err = FUNC_0(VAR_3->sock, VAR_0, VAR_2, (const char *) &VAR_5, VAR_6);

 if (VAR_3->err != 0)
  return -1;

 return 0;
}
