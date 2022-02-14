
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,char*) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_2(void)
{
 (void) FUNC_1(VAR_1,
     "usage: %s -i inputfile -o outputfile -b blocksize -c count \n"
     "           -s stride [ -k seekblocks]\n"
     "\n"
     "Simplified version of dd that supports the stride option.\n"
     "A stride of n means that for each block written, n - 1 blocks\n"
     "are skipped in both the input and output file. A stride of 1\n"
     "means that blocks are read and written consecutively.\n"
     "All numeric parameters must be integers.\n"
     "\n"
     "    inputfile:  File to read from\n"
     "    outputfile: File to write to\n"
     "    blocksize:  Size of each block to read/write\n"
     "    count:      Number of blocks to read/write\n"
     "    stride:     Read/write a block then skip (stride - 1) blocks\n"
     "    seekblocks: Number of blocks to skip at start of output\n",
     VAR_0);
 (void) FUNC_0(1);
}
