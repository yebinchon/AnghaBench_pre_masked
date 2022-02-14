
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (char*,int *,int) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (char*,int ) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (char*,char*) ;
 scalar_t__ FUNC_7 () ;

__attribute__((used)) static void
FUNC_8()
{

 char *VAR_3 =
  FUNC_0("timescaledb.allow_install_without_preload", ((void*)0), 1);

 if (VAR_3 == ((void*)0) || FUNC_6(VAR_3, "on") != 0)
 {
  if (FUNC_5(FUNC_1(), VAR_0))

  {
   char *VAR_4 = FUNC_0("config_file", ((void*)0), 0);

   FUNC_2(VAR_2,
     (FUNC_4("extension \"%s\" must be preloaded", VAR_1),
      FUNC_3("Please preload the timescaledb library via "
        "shared_preload_libraries.\n\n"
        "This can be done by editing the config file at: %1$s\n"
        "and adding 'timescaledb' to the list in the shared_preload_libraries "
        "config.\n"
        "	# Modify postgresql.conf:\n	shared_preload_libraries = "
        "'timescaledb'\n\n"
        "Another way to do this, if not preloading other libraries, is with "
        "the command:\n"
        "	echo \"shared_preload_libraries = 'timescaledb'\" >> %1$s \n\n"
        "(Will require a database restart.)\n\n"
        "If you REALLY know what you are doing and would like to load the "
        "library without preloading, you can disable this check with: \n"
        "	SET timescaledb.allow_install_without_preload = 'on';",
        VAR_4)));
  }
  else
  {
   FUNC_2(VAR_2,
     (FUNC_4("extension \"%s\" must be preloaded", VAR_1),
      FUNC_3(
       "Please preload the timescaledb library via shared_preload_libraries.\n\n"
       "This can be done by editing the postgres config file \n"
       "and adding 'timescaledb' to the list in the shared_preload_libraries "
       "config.\n"
       "	# Modify postgresql.conf:\n	shared_preload_libraries = "
       "'timescaledb'\n\n"
       "Another way to do this, if not preloading other libraries, is with the "
       "command:\n"
       "	echo \"shared_preload_libraries = 'timescaledb'\" >> "
       "/path/to/config/file \n\n"
       "(Will require a database restart.)\n\n"
       "If you REALLY know what you are doing and would like to load the library "
       "without preloading, you can disable this check with: \n"
       "	SET timescaledb.allow_install_without_preload = 'on';")));
  }

  return;
 }
}
