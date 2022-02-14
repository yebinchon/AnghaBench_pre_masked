
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ZSTD_dictContentType_e ;
struct TYPE_4__ {int dictUses; } ;
typedef TYPE_1__ ZSTD_DCtx ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,void const*,size_t,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;

size_t FUNC_2(ZSTD_DCtx* VAR_2, const void* VAR_3, size_t VAR_4, ZSTD_dictContentType_e VAR_5)
{
    FUNC_0(FUNC_1(VAR_2, VAR_3, VAR_4, VAR_0, VAR_5));
    VAR_2->dictUses = VAR_1;
    return 0;
}
