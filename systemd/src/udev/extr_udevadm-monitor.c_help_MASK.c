
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*) ;
 char* VAR_0 ;

__attribute__((used)) static int FUNC_1(void) {
        FUNC_0("%s monitor [OPTIONS]\n\n"
               "Listen to kernel and udev events.\n\n"
               "  -h --help                                Show this help\n"
               "  -V --version                             Show package version\n"
               "  -p --property                            Print the event properties\n"
               "  -k --kernel                              Print kernel uevents\n"
               "  -u --udev                                Print udev events\n"
               "  -s --subsystem-match=SUBSYSTEM[/DEVTYPE] Filter events by subsystem\n"
               "  -t --tag-match=TAG                       Filter events by tag\n"
               , VAR_0);

        return 0;
}
