
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char const*) ;
 char const* VAR_0 ;

__attribute__((used)) static void FUNC_1 (const char *VAR_1) {
  FUNC_0("%s: ", VAR_0);
  if (VAR_1[1] == 'e' || VAR_1[1] == 'l')
    FUNC_0("'%s' needs argument\n", VAR_1);
  else
    FUNC_0("unrecognized option '%s'\n", VAR_1);
  FUNC_0(
  "usage: %s [options] [script [args]]\n"
  "Available options are:\n"
  "  -e stat  execute string 'stat'\n"
  "  -i       enter interactive mode after executing 'script'\n"
  "  -l name  require library 'name' into global 'name'\n"
  "  -v       show version information\n"
  "  -E       ignore environment variables\n"
  "  --       stop handling options\n"
  "  -        stop handling options and execute stdin\n"
  ,
  VAR_0);
}
