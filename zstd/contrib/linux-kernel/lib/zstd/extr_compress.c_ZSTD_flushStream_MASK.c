
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {size_t size; size_t pos; scalar_t__ dst; } ;
typedef TYPE_1__ ZSTD_outBuffer ;
struct TYPE_7__ {size_t outBuffContentSize; size_t outBuffFlushedSize; } ;
typedef TYPE_2__ ZSTD_CStream ;


 size_t FUNC_0 (TYPE_2__*,char*,size_t*,size_t*,size_t*,int ) ;
 scalar_t__ FUNC_1 (size_t const) ;
 int VAR_0 ;

size_t FUNC_2(ZSTD_CStream *VAR_1, ZSTD_outBuffer *VAR_2)
{
 size_t VAR_3 = 0;
 size_t VAR_4 = VAR_2->size - VAR_2->pos;
 size_t const VAR_5 = FUNC_0(VAR_1, (char *)(VAR_2->dst) + VAR_2->pos, &VAR_4, &VAR_3,
         &VAR_3,
         VAR_0);
 VAR_2->pos += VAR_4;
 if (FUNC_1(VAR_5))
  return VAR_5;
 return VAR_1->outBuffContentSize - VAR_1->outBuffFlushedSize;
}
