
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,...) ;
 char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 () ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (char const*) ;

__attribute__((used)) static int FUNC_3(const char* VAR_7)
{
    FUNC_0(VAR_0);
    FUNC_2(VAR_7);
    FUNC_0( "\n");
    FUNC_0( "Advanced arguments : \n");
    FUNC_0( " -V     : display Version number and exit \n");
    FUNC_0( " -v     : verbose mode; specify multiple times to increase verbosity\n");
    FUNC_0( " -q     : suppress warnings; specify twice to suppress errors too\n");
    FUNC_0( " -c     : force write to standard output, even if it is the console\n");
    FUNC_0( " -l     : print information about zstd compressed files \n");
    FUNC_0( "--exclude-compressed:  only compress files that are not previously compressed \n");

    FUNC_0( "--ultra : enable levels beyond %i, up to %i (requires more memory)\n", VAR_2, FUNC_1());
    FUNC_0( "--long[=#]: enable long distance matching with given window log (default: %u)\n", VAR_5);
    FUNC_0( "--fast[=#]: switch to very fast compression levels (default: %u)\n", 1);
    FUNC_0( "--adapt : dynamically adapt compression level to I/O conditions \n");
    FUNC_0( "--stream-size=# : optimize compression parameters for streaming input of given number of bytes \n");
    FUNC_0( "--size-hint=# optimize compression parameters for streaming input of approximately this size\n");
    FUNC_0( "--target-compressed-block-size=# : make compressed block near targeted size \n");





    FUNC_0( "--no-dictID : don't write dictID into header (dictionary compression)\n");
    FUNC_0( "--[no-]check : integrity check (default: enabled) \n");
    FUNC_0( "--[no-]compress-literals : force (un)compressed literals \n");





    FUNC_0( "--format=zstd : compress files to the .zst format (default) \n");
    FUNC_0( "--test  : test compressed file integrity \n");



    FUNC_0( "--[no-]sparse : sparse mode (default: disabled)\n");


    FUNC_0( " -M#    : Set a memory usage limit for decompression \n");
    FUNC_0( "--no-progress : do not display the progress bar \n");
    FUNC_0( "--      : All arguments after \"--\" are treated as files \n");

    FUNC_0( "\n");
    FUNC_0( "Dictionary builder : \n");
    FUNC_0( "--train ## : create a dictionary from a training set of files \n");
    FUNC_0( "--train-cover[=k=#,d=#,steps=#,split=#,shrink[=#]] : use the cover algorithm with optional args\n");
    FUNC_0( "--train-fastcover[=k=#,d=#,f=#,steps=#,split=#,accel=#,shrink[=#]] : use the fast cover algorithm with optional args\n");
    FUNC_0( "--train-legacy[=s=#] : use the legacy algorithm with selectivity (default: %u)\n", VAR_6);
    FUNC_0( " -o file : `file` is dictionary name (default: %s) \n", VAR_3);
    FUNC_0( "--maxdict=# : limit dictionary to specified size (default: %u) \n", VAR_4);
    FUNC_0( "--dictID=# : force dictionary ID to specified value (default: random)\n");


    FUNC_0( "\n");
    FUNC_0( "Benchmark arguments : \n");
    FUNC_0( " -b#    : benchmark file(s), using # compression level (default: %d) \n", VAR_1);
    FUNC_0( " -e#    : test all compression levels from -bX to # (default: 1)\n");
    FUNC_0( " -i#    : minimum evaluation time in seconds (default: 3s) \n");
    FUNC_0( " -B#    : cut file into independent blocks of size # (default: no block)\n");
    FUNC_0( "--priority=rt : set process priority to real-time \n");

    return 0;
}
