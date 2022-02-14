
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*) ;
 char* VAR_0 ;

__attribute__((used)) static void FUNC_1(void) {
        FUNC_0("Usage: %s [OPTION...] DEVICE\n\n"
               "SCSI device identification.\n\n"
               "  -h --help                        Print this message\n"
               "     --version                     Print version of the program\n\n"
               "  -d --device=                     Device node for SG_IO commands\n"
               "  -f --config=                     Location of config file\n"
               "  -p --page=0x80|0x83|pre-spc3-83  SCSI page (0x80, 0x83, pre-spc3-83)\n"
               "  -s --sg-version=3|4              Use SGv3 or SGv4\n"
               "  -b --blacklisted                 Treat device as blacklisted\n"
               "  -g --whitelisted                 Treat device as whitelisted\n"
               "  -u --replace-whitespace          Replace all whitespace by underscores\n"
               "  -v --verbose                     Verbose logging\n"
               "  -x --export                      Print values as environment keys\n"
               , VAR_0);

}
