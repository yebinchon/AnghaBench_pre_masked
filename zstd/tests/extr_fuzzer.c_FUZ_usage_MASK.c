
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_1(const char* VAR_2)
{
    FUNC_0( "Usage :\n");
    FUNC_0( "      %s [args]\n", VAR_2);
    FUNC_0( "\n");
    FUNC_0( "Arguments :\n");
    FUNC_0( " -i#    : Nb of tests (default:%i) \n", VAR_1);
    FUNC_0( " -s#    : Select seed (default:prompt user)\n");
    FUNC_0( " -t#    : Select starting test number (default:0)\n");
    FUNC_0( " -P#    : Select compressibility in %% (default:%i%%)\n", VAR_0);
    FUNC_0( " -v     : verbose\n");
    FUNC_0( " -p     : pause at the end\n");
    FUNC_0( " -h     : display help and exit\n");
    return 0;
}
