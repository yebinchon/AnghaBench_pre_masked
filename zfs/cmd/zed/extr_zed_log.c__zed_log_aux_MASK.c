
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int va_list ;
typedef int buf ;
struct TYPE_2__ {int priority; scalar_t__ do_stderr; scalar_t__ do_syslog; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (int ,char*,char*) ;
 int VAR_2 ;
 int FUNC_1 (int,char*,char*) ;
 int FUNC_2 (char*,int,char const*,int ) ;

__attribute__((used)) static void
FUNC_3(int VAR_3, const char *VAR_4, va_list VAR_5)
{
 char VAR_6[VAR_0];
 int VAR_7;

 if (!VAR_4)
  return;

 VAR_7 = FUNC_2(VAR_6, sizeof (VAR_6), VAR_4, VAR_5);
 if ((VAR_7 < 0) || (VAR_7 >= sizeof (VAR_6))) {
  VAR_6[sizeof (VAR_6) - 2] = '+';
  VAR_6[sizeof (VAR_6) - 1] = '\0';
 }

 if (VAR_1.do_syslog)
  FUNC_1(VAR_3, "%s", VAR_6);

 if (VAR_1.do_stderr && (VAR_3 <= VAR_1.priority))
  FUNC_0(VAR_2, "%s\n", VAR_6);
}
