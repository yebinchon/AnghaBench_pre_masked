
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* rto_ashift; int rto_v; int rto_dsize; int rto_dcols; int rto_offset; } ;
typedef TYPE_1__ raidz_test_opts_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_5__ {scalar_t__ rto_sweep; } ;
typedef int FILE ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,char*,char*,int ,int ,int ,char*,int ) ;
 int FUNC_2 (int ) ;
 TYPE_3__ VAR_0 ;
 TYPE_1__ VAR_1 ;
 int * VAR_2 ;
 int * VAR_3 ;

__attribute__((used)) static void FUNC_3(boolean_t VAR_4)
{
 const raidz_test_opts_t *VAR_5 = &VAR_1;

 FILE *VAR_6 = VAR_4 ? VAR_3 : VAR_2;

 (void) FUNC_1(VAR_6, "Usage:\n"
     "\t[-a zio ashift (default: %zu)]\n"
     "\t[-o zio offset, exponent radix 2 (default: %zu)]\n"
     "\t[-d number of raidz data columns (default: %zu)]\n"
     "\t[-s zio size, exponent radix 2 (default: %zu)]\n"
     "\t[-S parameter sweep (default: %s)]\n"
     "\t[-t timeout for parameter sweep test]\n"
     "\t[-B benchmark all raidz implementations]\n"
     "\t[-v increase verbosity (default: %zu)]\n"
     "\t[-h (print help)]\n"
     "\t[-T test the test, see if failure would be detected]\n"
     "\t[-D debug (attach gdb on SIGSEGV)]\n"
     "",
     VAR_5->rto_ashift,
     FUNC_2(VAR_5->rto_offset),
     VAR_5->rto_dcols,
     FUNC_2(VAR_5->rto_dsize),
     VAR_0.rto_sweep ? "yes" : "no",
     VAR_5->rto_v);

 FUNC_0(VAR_4 ? 0 : 1);
}
