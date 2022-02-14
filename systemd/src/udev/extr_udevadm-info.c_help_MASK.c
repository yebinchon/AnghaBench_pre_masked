
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*) ;
 char* VAR_0 ;

__attribute__((used)) static int FUNC_1(void) {
        FUNC_0("%s info [OPTIONS] [DEVPATH|FILE]\n\n"
               "Query sysfs or the udev database.\n\n"
               "  -h --help                   Print this message\n"
               "  -V --version                Print version of the program\n"
               "  -q --query=TYPE             Query device information:\n"
               "       name                     Name of device node\n"
               "       symlink                  Pointing to node\n"
               "       path                     sysfs device path\n"
               "       property                 The device properties\n"
               "       all                      All values\n"
               "  -p --path=SYSPATH           sysfs device path used for query or attribute walk\n"
               "  -n --name=NAME              Node or symlink name used for query or attribute walk\n"
               "  -r --root                   Prepend dev directory to path names\n"
               "  -a --attribute-walk         Print all key matches walking along the chain\n"
               "                              of parent devices\n"
               "  -d --device-id-of-file=FILE Print major:minor of device containing this file\n"
               "  -x --export                 Export key/value pairs\n"
               "  -P --export-prefix          Export the key name with a prefix\n"
               "  -e --export-db              Export the content of the udev database\n"
               "  -c --cleanup-db             Clean up the udev database\n"
               "  -w --wait-for-initialization[=SECONDS]\n"
               "                              Wait for device to be initialized\n"
               , VAR_0);

        return 0;
}
