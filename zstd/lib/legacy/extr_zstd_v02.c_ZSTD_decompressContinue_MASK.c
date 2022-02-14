
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ blockType; } ;
typedef TYPE_1__ blockProperties_t ;
struct TYPE_7__ {size_t expected; void* previousDstEnd; int phase; scalar_t__ bType; void* base; } ;
typedef TYPE_2__ ZSTD_DCtx ;
typedef scalar_t__ U32 ;


 size_t FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (void const*) ;
 void* VAR_1 ;
 size_t FUNC_2 (void*,size_t,void const*,size_t) ;
 size_t FUNC_3 (TYPE_2__*,void*,size_t,void const*,size_t) ;
 size_t FUNC_4 (void const*,void*,TYPE_1__*) ;
 scalar_t__ FUNC_5 (size_t) ;
 scalar_t__ VAR_2 ;




 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static size_t FUNC_6(ZSTD_DCtx* VAR_5, void* VAR_6, size_t VAR_7, const void* VAR_8, size_t VAR_9)
{

    if (VAR_9 != VAR_5->expected) return FUNC_0(VAR_4);
    if (VAR_6 != VAR_5->previousDstEnd)
        VAR_5->base = VAR_6;


    if (VAR_5->phase == 0)
    {

        U32 VAR_10 = FUNC_1(VAR_8);
        if (VAR_10 != VAR_2) return FUNC_0(VAR_3);
        VAR_5->phase = 1;
        VAR_5->expected = VAR_1;
        return 0;
    }


    if (VAR_5->phase == 1)
    {
        blockProperties_t VAR_11;
        size_t VAR_12 = FUNC_4(VAR_8, VAR_1, &VAR_11);
        if (FUNC_5(VAR_12)) return VAR_12;
        if (VAR_11.blockType == 130)
        {
            VAR_5->expected = 0;
            VAR_5->phase = 0;
        }
        else
        {
            VAR_5->expected = VAR_12;
            VAR_5->bType = VAR_11.blockType;
            VAR_5->phase = 2;
        }

        return 0;
    }


    {
        size_t VAR_13;
        switch(VAR_5->bType)
        {
        case 131:
            VAR_13 = FUNC_3(VAR_5, VAR_6, VAR_7, VAR_8, VAR_9);
            break;
        case 129 :
            VAR_13 = FUNC_2(VAR_6, VAR_7, VAR_8, VAR_9);
            break;
        case 128 :
            return FUNC_0(VAR_0);
            break;
        case 130 :
            VAR_13 = 0;
            break;
        default:
            return FUNC_0(VAR_0);
        }
        VAR_5->phase = 1;
        VAR_5->expected = VAR_1;
        VAR_5->previousDstEnd = (void*)( ((char*)VAR_6) + VAR_13);
        return VAR_13;
    }

}
