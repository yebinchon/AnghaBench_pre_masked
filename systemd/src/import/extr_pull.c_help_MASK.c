
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*) ;
 char* VAR_0 ;

__attribute__((used)) static int FUNC_1(int VAR_1, char *VAR_2[], void *VAR_3) {

        FUNC_0("%s [OPTIONS...] {COMMAND} ...\n\n"
               "Download container or virtual machine images.\n\n"
               "  -h --help                   Show this help\n"
               "     --version                Show package version\n"
               "     --force                  Force creation of image\n"
               "     --verify=MODE            Verify downloaded image, one of: 'no',\n"
               "                              'checksum', 'signature'\n"
               "     --settings=BOOL          Download settings file with image\n"
               "     --roothash=BOOL          Download root hash file with image\n"
               "     --image-root=PATH        Image root directory\n\n"
               "Commands:\n"
               "  tar URL [NAME]              Download a TAR image\n"
               "  raw URL [NAME]              Download a RAW image\n",
               VAR_0);

        return 0;
}
