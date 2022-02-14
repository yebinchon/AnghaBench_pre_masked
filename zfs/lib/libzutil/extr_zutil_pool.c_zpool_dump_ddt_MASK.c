
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ddt_stat_t ;
struct TYPE_3__ {int const* ddh_stat; } ;
typedef TYPE_1__ ddt_histogram_t ;


 int FUNC_0 (int const*,int) ;
 int FUNC_1 (char*,...) ;

void
FUNC_2(const ddt_stat_t *VAR_0, const ddt_histogram_t *VAR_1)
{
 int VAR_2;

 (void) FUNC_1("\n");

 (void) FUNC_1("bucket   "
     "           allocated             "
     "          referenced          \n");
 (void) FUNC_1("______   "
     "______________________________   "
     "______________________________\n");

 (void) FUNC_1("%6s   %6s   %5s   %5s   %5s   %6s   %5s   %5s   %5s\n",
     "refcnt",
     "blocks", "LSIZE", "PSIZE", "DSIZE",
     "blocks", "LSIZE", "PSIZE", "DSIZE");

 (void) FUNC_1("%6s   %6s   %5s   %5s   %5s   %6s   %5s   %5s   %5s\n",
     "------",
     "------", "-----", "-----", "-----",
     "------", "-----", "-----", "-----");

 for (VAR_2 = 0; VAR_2 < 64; VAR_2++)
  FUNC_0(&VAR_1->ddh_stat[VAR_2], VAR_2);

 FUNC_0(VAR_0, -1);

 (void) FUNC_1("\n");
}
