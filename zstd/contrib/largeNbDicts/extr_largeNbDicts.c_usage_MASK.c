
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,...) ;

int FUNC_1(const char* VAR_2)
{
    FUNC_0 (" \n");
    FUNC_0 (" %s [Options] filename(s) \n", VAR_2);
    FUNC_0 (" \n");
    FUNC_0 ("Options : \n");
    FUNC_0 ("-r          : recursively load all files in subdirectories (default: off) \n");
    FUNC_0 ("-B#         : split input into blocks of size # (default: no split) \n");
    FUNC_0 ("-#          : use compression level # (default: %u) \n", VAR_1);
    FUNC_0 ("-D #        : use # as a dictionary (default: create one) \n");
    FUNC_0 ("-i#         : nb benchmark rounds (default: %u) \n", VAR_0);
    FUNC_0 ("--nbBlocks=#: use # blocks for bench (default: one per file) \n");
    FUNC_0 ("--nbDicts=# : create # dictionaries for bench (default: one per block) \n");
    FUNC_0 ("-h          : help (this text) \n");
    return 0;
}
