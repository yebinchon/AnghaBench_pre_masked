
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ZSTD_compressionParameters ;
struct TYPE_4__ {int compressionLevel; } ;
typedef TYPE_1__ ZSTD_CDict ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (void const*,size_t,int ,int ,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int,int ,size_t) ;

ZSTD_CDict* FUNC_2(const void* VAR_5, size_t VAR_6, int VAR_7)
{
    ZSTD_compressionParameters VAR_8 = FUNC_1(VAR_7, VAR_1, VAR_6);
    ZSTD_CDict* VAR_9 = FUNC_0(VAR_5, VAR_6,
                                                  VAR_4, VAR_2,
                                                  VAR_8, VAR_3);
    if (VAR_9)
        VAR_9->compressionLevel = VAR_7 == 0 ? VAR_0 : VAR_7;
    return VAR_9;
}
