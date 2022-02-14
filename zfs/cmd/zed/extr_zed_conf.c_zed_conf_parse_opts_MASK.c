
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zed_conf {int do_verbose; int do_force; int do_foreground; int do_memlock; int do_zero; int state_file; int path; int pid_file; int zedlet_dir; int conf_file; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int ,char*,char*,char*,char) ;
 int FUNC_5 (int,char**,char const* const) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 char VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (char*) ;

void
FUNC_7(struct zed_conf *VAR_6, int VAR_7, char **VAR_8)
{
 const char * const VAR_9 = ":hLVc:d:p:P:s:vfFMZ";
 int VAR_10;

 if (!VAR_6 || !VAR_8 || !VAR_8[0])
  FUNC_6("Failed to parse options: Internal error");

 VAR_3 = 0;

 while ((VAR_10 = FUNC_5(VAR_7, VAR_8, VAR_9)) != -1) {
  switch (VAR_10) {
  case 'h':
   FUNC_0(VAR_8[0], VAR_1);
   break;
  case 'L':
   FUNC_1();
   break;
  case 'V':
   FUNC_2();
   break;
  case 'c':
   FUNC_3(&VAR_6->conf_file, VAR_2);
   break;
  case 'd':
   FUNC_3(&VAR_6->zedlet_dir, VAR_2);
   break;
  case 'p':
   FUNC_3(&VAR_6->pid_file, VAR_2);
   break;
  case 'P':
   FUNC_3(&VAR_6->path, VAR_2);
   break;
  case 's':
   FUNC_3(&VAR_6->state_file, VAR_2);
   break;
  case 'v':
   VAR_6->do_verbose = 1;
   break;
  case 'f':
   VAR_6->do_force = 1;
   break;
  case 'F':
   VAR_6->do_foreground = 1;
   break;
  case 'M':
   VAR_6->do_memlock = 1;
   break;
  case 'Z':
   VAR_6->do_zero = 1;
   break;
  case '?':
  default:
   if (VAR_4 == '?')
    FUNC_0(VAR_8[0], VAR_1);

   FUNC_4(VAR_5, "%s: %s '-%c'\n\n", VAR_8[0],
       "Invalid option", VAR_4);
   FUNC_0(VAR_8[0], VAR_0);
   break;
  }
 }
}
