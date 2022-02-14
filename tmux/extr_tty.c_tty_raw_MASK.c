
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct tty {int fd; } ;
typedef scalar_t__ ssize_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (char const*) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ,char const*,scalar_t__) ;

void
FUNC_3(struct tty *VAR_2, const char *VAR_3)
{
 ssize_t VAR_4, VAR_5;
 u_int VAR_6;

 VAR_5 = FUNC_0(VAR_3);
 for (VAR_6 = 0; VAR_6 < 5; VAR_6++) {
  VAR_4 = FUNC_2(VAR_2->fd, VAR_3, VAR_5);
  if (VAR_4 >= 0) {
   VAR_3 += VAR_4;
   VAR_5 -= VAR_4;
   if (VAR_5 == 0)
    break;
  } else if (VAR_4 == -1 && VAR_1 != VAR_0)
   break;
  FUNC_1(100);
 }
}
