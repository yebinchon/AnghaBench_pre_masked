
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {size_t size; size_t pos; scalar_t__ dst; } ;
typedef TYPE_1__ ZSTD_outBuffer ;
struct TYPE_6__ {size_t size; size_t pos; scalar_t__ src; } ;
typedef TYPE_2__ ZSTD_inBuffer ;
typedef int ZSTD_CStream ;


 size_t FUNC_0 (int *,char*,size_t*,char const*,size_t*,int ) ;
 int VAR_0 ;

size_t FUNC_1(ZSTD_CStream *VAR_1, ZSTD_outBuffer *VAR_2, ZSTD_inBuffer *VAR_3)
{
 size_t VAR_4 = VAR_3->size - VAR_3->pos;
 size_t VAR_5 = VAR_2->size - VAR_2->pos;
 size_t const VAR_6 =
     FUNC_0(VAR_1, (char *)(VAR_2->dst) + VAR_2->pos, &VAR_5, (const char *)(VAR_3->src) + VAR_3->pos, &VAR_4, VAR_0);
 VAR_3->pos += VAR_4;
 VAR_2->pos += VAR_5;
 return VAR_6;
}
