
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,...) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_2(void)
{
 (void) FUNC_1(VAR_1,
     "Usage: %s [-c cachefile] [-d dir] <subcommand> <args> ...\n"
     "where <subcommand> <args> is one of the following:\n"
     "\n", VAR_0);

 (void) FUNC_1(VAR_1,
     "    feature stat <pool>\n"
     "        print information about enabled features\n"
     "    feature enable [-r] [-d desc] <pool> <feature>\n"
     "        add a new enabled feature to the pool\n"
     "        -d <desc> sets the feature's description\n"
     "        -r set read-only compatible flag for feature\n"
     "    feature ref [-md] <pool> <feature>\n"
     "        change the refcount on the given feature\n"
     "        -d decrease instead of increase the refcount\n"
     "        -m add the feature to the label if increasing refcount\n"
     "\n"
     "    <feature> : should be a feature guid\n");
 FUNC_0(1);
}
