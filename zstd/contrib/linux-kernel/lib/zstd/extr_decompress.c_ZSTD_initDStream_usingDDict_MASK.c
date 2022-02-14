
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int const* ddict; } ;
typedef TYPE_1__ ZSTD_DStream ;
typedef int ZSTD_DDict ;


 TYPE_1__* FUNC_0 (size_t,void*,size_t) ;

ZSTD_DStream *FUNC_1(size_t VAR_0, const ZSTD_DDict *VAR_1, void *VAR_2, size_t VAR_3)
{
 ZSTD_DStream *VAR_4 = FUNC_0(VAR_0, VAR_2, VAR_3);
 if (VAR_4) {
  VAR_4->ddict = VAR_1;
 }
 return VAR_4;
}
