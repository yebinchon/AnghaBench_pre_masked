
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {size_t expected; void* previousDstEnd; int phase; scalar_t__ bType; void* base; } ;
typedef TYPE_1__ dctx_t ;
struct TYPE_6__ {scalar_t__ blockType; } ;
typedef TYPE_2__ blockProperties_t ;
typedef int ZSTDv01_Dctx ;
typedef scalar_t__ U32 ;


 size_t FUNC_0 (int ) ;
 int VAR_0 ;
 void* VAR_1 ;
 size_t FUNC_1 (void*,size_t,void const*,size_t) ;
 size_t FUNC_2 (TYPE_1__*,void*,size_t,void const*,size_t) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_3 (void const*) ;
 size_t FUNC_4 (void const*,void*,TYPE_2__*) ;
 scalar_t__ FUNC_5 (size_t) ;




 int VAR_3 ;
 int VAR_4 ;

size_t FUNC_6(ZSTDv01_Dctx* VAR_5, void* VAR_6, size_t VAR_7, const void* VAR_8, size_t VAR_9)
{
    dctx_t* VAR_10 = (dctx_t*)VAR_5;


    if (VAR_9 != VAR_10->expected) return FUNC_0(VAR_4);
    if (VAR_6 != VAR_10->previousDstEnd)
        VAR_10->base = VAR_6;


    if (VAR_10->phase == 0)
    {

        U32 VAR_11 = FUNC_3(VAR_8);
        if (VAR_11 != VAR_2) return FUNC_0(VAR_3);
        VAR_10->phase = 1;
        VAR_10->expected = VAR_1;
        return 0;
    }


    if (VAR_10->phase == 1)
    {
        blockProperties_t VAR_12;
        size_t VAR_13 = FUNC_4(VAR_8, VAR_1, &VAR_12);
        if (FUNC_5(VAR_13)) return VAR_13;
        if (VAR_12.blockType == 130)
        {
            VAR_10->expected = 0;
            VAR_10->phase = 0;
        }
        else
        {
            VAR_10->expected = VAR_13;
            VAR_10->bType = VAR_12.blockType;
            VAR_10->phase = 2;
        }

        return 0;
    }


    {
        size_t VAR_14;
        switch(VAR_10->bType)
        {
        case 131:
            VAR_14 = FUNC_2(VAR_10, VAR_6, VAR_7, VAR_8, VAR_9);
            break;
        case 129 :
            VAR_14 = FUNC_1(VAR_6, VAR_7, VAR_8, VAR_9);
            break;
        case 128 :
            return FUNC_0(VAR_0);
            break;
        case 130 :
            VAR_14 = 0;
            break;
        default:
            return FUNC_0(VAR_0);
        }
        VAR_10->phase = 1;
        VAR_10->expected = VAR_1;
        VAR_10->previousDstEnd = (void*)( ((char*)VAR_6) + VAR_14);
        return VAR_14;
    }

}
