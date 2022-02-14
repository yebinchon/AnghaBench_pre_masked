
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct utsname {char const* sysname; long release; int version; } ;
struct tmuxproc {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (char*,char const*,long,int ,int ,int ) ;
 int FUNC_4 (char const*) ;
 int FUNC_5 (struct utsname*,int ,int) ;
 int FUNC_6 (char*,char const*,int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_7 (struct utsname*) ;
 struct tmuxproc* FUNC_8 (int,int) ;
 int FUNC_9 (char const*) ;

struct tmuxproc *
FUNC_10(const char *VAR_3)
{
 struct tmuxproc *VAR_4;
 struct utsname VAR_5;

 FUNC_4(VAR_3);
 FUNC_6("%s (%s)", VAR_3, VAR_2);

 if (FUNC_7(&VAR_5) < 0)
  FUNC_5(&VAR_5, 0, sizeof VAR_5);

 FUNC_3("%s started (%ld): version %s, socket %s, protocol %d", VAR_3,
     (long)FUNC_2(), VAR_1, VAR_2, VAR_0);
 FUNC_3("on %s %s %s; libevent %s (%s)", VAR_5.sysname, VAR_5.release,
     VAR_5.version, FUNC_1(), FUNC_0());

 VAR_4 = FUNC_8(1, sizeof *VAR_4);
 VAR_4->name = FUNC_9(VAR_3);

 return (VAR_4);
}
