
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int va_list ;
struct timeval {scalar_t__ tv_usec; scalar_t__ tv_sec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*,long long,int,char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct timeval*,int *) ;
 int * VAR_4 ;
 int FUNC_5 (char**,char*,int) ;
 int FUNC_6 (char**,char const*,int ) ;

__attribute__((used)) static void
FUNC_7(const char *VAR_5, va_list VAR_6)
{
 char *VAR_7, *VAR_8;
 struct timeval VAR_9;

 if (VAR_4 == ((void*)0))
  return;

 if (FUNC_6(&VAR_7, VAR_5, VAR_6) == -1)
  FUNC_0(1);
 if (FUNC_5(&VAR_8, VAR_7, VAR_2|VAR_0|VAR_3|VAR_1) == -1)
  FUNC_0(1);

 FUNC_4(&VAR_9, ((void*)0));
 if (FUNC_2(VAR_4, "%lld.%06d %s\n", (long long)VAR_9.tv_sec,
     (int)VAR_9.tv_usec, VAR_8) == -1)
  FUNC_0(1);
 FUNC_1(VAR_4);

 FUNC_3(VAR_8);
 FUNC_3(VAR_7);
}
