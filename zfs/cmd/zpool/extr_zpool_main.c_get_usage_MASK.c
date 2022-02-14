
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zpool_help_t ;
 int FUNC_0 () ;
 char const* FUNC_1 (char*) ;

__attribute__((used)) static const char *
FUNC_2(zpool_help_t VAR_0)
{
 switch (VAR_0) {
 case 159:
  return (FUNC_1("\tadd [-fgLnP] [-o property=value] "
      "<pool> <vdev> ...\n"));
 case 158:
  return (FUNC_1("\tattach [-fw] [-o property=value] "
      "<pool> <device> <new-device>\n"));
 case 156:
  return (FUNC_1("\tclear [-nF] <pool> [device]\n"));
 case 155:
  return (FUNC_1("\tcreate [-fnd] [-o property=value] ... \n"
      "\t    [-O file-system-property=value] ... \n"
      "\t    [-m mountpoint] [-R root] <pool> <vdev> ...\n"));
 case 157:
  return (FUNC_1("\tcheckpoint [-d [-w]] <pool> ...\n"));
 case 154:
  return (FUNC_1("\tdestroy [-f] <pool>\n"));
 case 153:
  return (FUNC_1("\tdetach <pool> <device>\n"));
 case 151:
  return (FUNC_1("\texport [-af] <pool> ...\n"));
 case 149:
  return (FUNC_1("\thistory [-il] [<pool>] ...\n"));
 case 148:
  return (FUNC_1("\timport [-d dir] [-D]\n"
      "\timport [-o mntopts] [-o property=value] ... \n"
      "\t    [-d dir | -c cachefile] [-D] [-l] [-f] [-m] [-N] "
      "[-R root] [-F [-n]] -a\n"
      "\timport [-o mntopts] [-o property=value] ... \n"
      "\t    [-d dir | -c cachefile] [-D] [-l] [-f] [-m] [-N] "
      "[-R root] [-F [-n]]\n"
      "\t    [--rewind-to-checkpoint] <pool | id> [newpool]\n"));
 case 146:
  return (FUNC_1("\tiostat [[[-c [script1,script2,...]"
      "[-lq]]|[-rw]] [-T d | u] [-ghHLpPvy]\n"
      "\t    [[pool ...]|[pool vdev ...]|[vdev ...]]"
      " [[-n] interval [count]]\n"));
 case 145:
  return (FUNC_1("\tlabelclear [-f] <vdev>\n"));
 case 144:
  return (FUNC_1("\tlist [-gHLpPv] [-o property[,...]] "
      "[-T d|u] [pool] ... \n"
      "\t    [interval [count]]\n"));
 case 143:
  return (FUNC_1("\toffline [-f] [-t] <pool> <device> ...\n"));
 case 142:
  return (FUNC_1("\tonline [-e] <pool> <device> ...\n"));
 case 138:
  return (FUNC_1("\treplace [-fw] [-o property=value] "
      "<pool> <device> [new-device]\n"));
 case 140:
  return (FUNC_1("\tremove [-npsw] <pool> <device> ...\n"));
 case 139:
  return (FUNC_1("\treopen [-n] <pool>\n"));
 case 147:
  return (FUNC_1("\tinitialize [-c | -s] [-w] <pool> "
      "[<device> ...]\n"));
 case 136:
  return (FUNC_1("\tscrub [-s | -p] [-w] <pool> ...\n"));
 case 137:
  return (FUNC_1("\tresilver <pool> ...\n"));
 case 131:
  return (FUNC_1("\ttrim [-d] [-r <rate>] [-c | -s] <pool> "
      "[<device> ...]\n"));
 case 133:
  return (FUNC_1("\tstatus [-c [script1,script2,...]] "
      "[-igLpPstvxD]  [-T d|u] [pool] ... \n"
      "\t    [interval [count]]\n"));
 case 130:
  return (FUNC_1("\tupgrade\n"
      "\tupgrade -v\n"
      "\tupgrade [-V version] <-a | pool ...>\n"));
 case 152:
  return (FUNC_1("\tevents [-vHf [pool] | -c]\n"));
 case 150:
  return (FUNC_1("\tget [-Hp] [-o \"all\" | field[,...]] "
      "<\"all\" | property[,...]> <pool> ...\n"));
 case 135:
  return (FUNC_1("\tset <property=value> <pool> \n"));
 case 134:
  return (FUNC_1("\tsplit [-gLnPl] [-R altroot] [-o mntopts]\n"
      "\t    [-o property=value] <pool> <newpool> "
      "[<device> ...]\n"));
 case 141:
  return (FUNC_1("\treguid <pool>\n"));
 case 132:
  return (FUNC_1("\tsync [pool] ...\n"));
 case 129:
  return (FUNC_1("\tversion\n"));
 case 128:
  return (FUNC_1("\twait [-Hp] [-T d|u] [-t <activity>[,...]] "
      "<pool> [interval]\n"));
 }

 FUNC_0();

}
