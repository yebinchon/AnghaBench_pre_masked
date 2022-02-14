
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef int dsl_dir_t ;
struct TYPE_2__ {int dd_compressed_bytes; int dd_uncompressed_bytes; } ;


 TYPE_1__* FUNC_0 (int *) ;

uint64_t
FUNC_1(dsl_dir_t *VAR_0)
{

 return (FUNC_0(VAR_0)->dd_compressed_bytes == 0 ? 100 :
     (FUNC_0(VAR_0)->dd_uncompressed_bytes * 100 /
     FUNC_0(VAR_0)->dd_compressed_bytes));
}
