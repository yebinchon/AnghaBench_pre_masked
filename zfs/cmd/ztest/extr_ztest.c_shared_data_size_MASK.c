
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int zh_hdr_size; int zh_stats_size; int zh_stats_count; int zh_ds_size; int zh_ds_count; scalar_t__ zh_size; scalar_t__ zh_opts_size; } ;
typedef TYPE_1__ ztest_shared_hdr_t ;



__attribute__((used)) static int
FUNC_0(ztest_shared_hdr_t *VAR_0)
{
 int VAR_1;

 VAR_1 = VAR_0->zh_hdr_size;
 VAR_1 += VAR_0->zh_opts_size;
 VAR_1 += VAR_0->zh_size;
 VAR_1 += VAR_0->zh_stats_size * VAR_0->zh_stats_count;
 VAR_1 += VAR_0->zh_ds_size * VAR_0->zh_ds_count;

 return (VAR_1);
}
