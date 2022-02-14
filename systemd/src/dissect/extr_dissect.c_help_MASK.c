
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*,char*) ;
 char* VAR_0 ;

__attribute__((used)) static void FUNC_1(void) {
        FUNC_0("%s [OPTIONS...] IMAGE\n"
               "%s [OPTIONS...] --mount IMAGE PATH\n"
               "Dissect a file system OS image.\n\n"
               "  -h --help            Show this help\n"
               "     --version         Show package version\n"
               "  -m --mount           Mount the image to the specified directory\n"
               "  -r --read-only       Mount read-only\n"
               "     --discard=MODE    Choose 'discard' mode (disabled, loop, all, crypto)\n"
               "     --root-hash=HASH  Specify root hash for verity\n",
               VAR_0,
               VAR_0);
}
