
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int FUNC_1(void)
{
    FUNC_0( "\nAdvanced options :\n");
    FUNC_0( " -T#          : set level 1 speed objective \n");
    FUNC_0( " -B#          : cut input into blocks of size # (default : single block) \n");
    FUNC_0( " --optimize=  : same as -O with more verbose syntax (see README.md)\n");
    FUNC_0( " -S           : Single run \n");
    FUNC_0( " --zstd       : Single run, parameter selection same as zstdcli \n");
    FUNC_0( " -P#          : generated sample compressibility (default : %.1f%%) \n", VAR_0 * 100);
    FUNC_0( " -t#          : Caps runtime of operation in seconds (default : %u seconds (%.1f hours)) \n",
                                (unsigned)VAR_1, (double)VAR_1 / 3600);
    FUNC_0( " -v           : Prints Benchmarking output\n");
    FUNC_0( " -D           : Next argument dictionary file\n");
    FUNC_0( " -s           : Seperate Files\n");
    return 0;
}
