
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 char* VAR_3 ;
 char* VAR_4 ;
 char* FUNC_0 (char* const) ;
 int FUNC_1 (int * const,char*,...) ;

void FUNC_2(char* const VAR_5, FILE* const VAR_6) {
 FUNC_1(VAR_6, "%s (%s)\n", FUNC_0(VAR_5), VAR_3);




 FUNC_1(VAR_6, "Usage: %s [OPTIONS] PROGRAM -- [ARGS] | --version\n\n", FUNC_0(VAR_5));

 FUNC_1(VAR_6, "Execute a program under the supervision of a valid init process (%s)\n\n", FUNC_0(VAR_5));

 FUNC_1(VAR_6, "Command line options:\n\n");

 FUNC_1(VAR_6, "  --version: Show version and exit.\n");



 FUNC_1(VAR_6, "  -h: Show this help message and exit.\n");



 FUNC_1(VAR_6, "  -p SIGNAL: Trigger SIGNAL when parent dies, e.g. \"-p SIGKILL\".\n");
 FUNC_1(VAR_6, "  -v: Generate more verbose output. Repeat up to 3 times.\n");
 FUNC_1(VAR_6, "  -w: Print a warning when processes are getting reaped.\n");
 FUNC_1(VAR_6, "  -g: Send signals to the child's process group.\n");
 FUNC_1(VAR_6, "  -e EXIT_CODE: Remap EXIT_CODE (from 0 to 255) to 0.\n");
 FUNC_1(VAR_6, "  -l: Show license and exit.\n");


 FUNC_1(VAR_6, "\n");

 FUNC_1(VAR_6, "Environment variables:\n\n");



 FUNC_1(VAR_6, "  %s: Set the verbosity level (default: %d).\n", VAR_4, VAR_0);
 FUNC_1(VAR_6, "  %s: Send signals to the child's process group.\n", VAR_1);

 FUNC_1(VAR_6, "\n");
}
