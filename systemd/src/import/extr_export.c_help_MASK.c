
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*) ;
 char* VAR_0 ;

__attribute__((used)) static int FUNC_1(int VAR_1, char *VAR_2[], void *VAR_3) {

        FUNC_0("%s [OPTIONS...] {COMMAND} ...\n\n"
               "Export container or virtual machine images.\n\n"
               "  -h --help                    Show this help\n"
               "     --version                 Show package version\n"
               "     --format=FORMAT           Select format\n\n"
               "Commands:\n"
               "  tar NAME [FILE]              Export a TAR image\n"
               "  raw NAME [FILE]              Export a RAW image\n",
               VAR_0);

        return 0;
}
