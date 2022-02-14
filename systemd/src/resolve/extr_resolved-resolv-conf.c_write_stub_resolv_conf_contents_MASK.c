
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int OrderedSet ;
typedef int FILE ;


 int FUNC_0 (int *) ;
 int FUNC_1 (char*,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;

__attribute__((used)) static int FUNC_4(FILE *VAR_0, OrderedSet *VAR_1, OrderedSet *VAR_2) {
        FUNC_1("# This file is managed by man:systemd-resolved(8). Do not edit.\n"
                       "#\n"
                       "# This is a dynamic resolv.conf file for connecting local clients to the\n"
                       "# internal DNS stub resolver of systemd-resolved. This file lists all\n"
                       "# configured search domains.\n"
                       "#\n"
                       "# Run \"resolvectl status\" to see details about the uplink DNS servers\n"
                       "# currently in use.\n"
                       "#\n"
                       "# Third party programs must not access this file directly, but only through the\n"
                       "# symlink at /etc/resolv.conf. To manage man:resolv.conf(5) in a different way,\n"
                       "# replace this symlink by a static file or a different symlink.\n"
                       "#\n"
                       "# See man:systemd-resolved.service(8) for details about the supported modes of\n"
                       "# operation for /etc/resolv.conf.\n"
                       "\n"
                       "nameserver 127.0.0.53\n"
                       "options edns0\n", VAR_0);

        if (!FUNC_2(VAR_2))
                FUNC_3(VAR_2, VAR_0);

        return FUNC_0(VAR_0);
}
