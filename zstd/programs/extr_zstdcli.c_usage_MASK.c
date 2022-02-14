
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_1(const char* VAR_2)
{
    FUNC_0( "Usage : \n");
    FUNC_0( "      %s [args] [FILE(s)] [-o file] \n", VAR_2);
    FUNC_0( "\n");
    FUNC_0( "FILE    : a filename \n");
    FUNC_0( "          with no FILE, or when FILE is - , read standard input\n");
    FUNC_0( "Arguments : \n");

    FUNC_0( " -#     : # compression level (1-%d, default: %d) \n", VAR_1, VAR_0);


    FUNC_0( " -d     : decompression \n");

    FUNC_0( " -D file: use `file` as Dictionary \n");
    FUNC_0( " -o file: result stored into `file` (only if 1 input file) \n");
    FUNC_0( " -f     : overwrite output without prompting and (de)compress links \n");
    FUNC_0( "--rm    : remove source file(s) after successful de/compression \n");
    FUNC_0( " -k     : preserve source file(s) (default) \n");
    FUNC_0( " -h/-H  : display help/long help and exit \n");
    return 0;
}
