
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ blockType_t ;
struct TYPE_3__ {scalar_t__ blockType; size_t origSize; } ;
typedef TYPE_1__ blockProperties_t ;
typedef size_t U32 ;
typedef int BYTE ;


 size_t FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static size_t FUNC_1(const void* VAR_3, size_t VAR_4, blockProperties_t* VAR_5)
{
    const BYTE* const VAR_6 = (const BYTE* const)VAR_3;
    BYTE VAR_7;
    U32 VAR_8;

    if (VAR_4 < 3)
        return FUNC_0(VAR_2);

    VAR_7 = *VAR_6;
    VAR_8 = VAR_6[2] + (VAR_6[1]<<8) + ((VAR_6[0] & 7)<<16);

    VAR_5->blockType = (blockType_t)(VAR_7 >> 6);
    VAR_5->origSize = (VAR_5->blockType == VAR_1) ? VAR_8 : 0;

    if (VAR_5->blockType == VAR_0) return 0;
    if (VAR_5->blockType == VAR_1) return 1;
    return VAR_8;
}
