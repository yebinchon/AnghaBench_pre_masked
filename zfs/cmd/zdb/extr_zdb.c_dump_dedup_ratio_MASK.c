
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ dds_blocks; scalar_t__ dds_dsize; scalar_t__ dds_ref_dsize; scalar_t__ dds_ref_psize; scalar_t__ dds_ref_lsize; } ;
typedef TYPE_1__ ddt_stat_t ;


 int FUNC_0 (char*,double,double,double,double) ;

__attribute__((used)) static void
FUNC_1(const ddt_stat_t *VAR_0)
{
 double VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7;

 if (VAR_0->dds_blocks == 0)
  return;

 VAR_1 = (double)VAR_0->dds_ref_lsize;
 VAR_2 = (double)VAR_0->dds_ref_psize;
 VAR_3 = (double)VAR_0->dds_ref_dsize;
 VAR_4 = (double)VAR_0->dds_dsize;

 VAR_5 = VAR_3 / VAR_4;
 VAR_6 = VAR_1 / VAR_2;
 VAR_7 = VAR_3 / VAR_2;

 (void) FUNC_0("dedup = %.2f, compress = %.2f, copies = %.2f, "
     "dedup * compress / copies = %.2f\n\n",
     VAR_5, VAR_6, VAR_7, VAR_5 * VAR_6 / VAR_7);
}
