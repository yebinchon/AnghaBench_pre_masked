
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * ddicts; } ;
struct TYPE_4__ {size_t dictNb; int nbDicts; TYPE_1__ dictionaries; int dctx; } ;
typedef TYPE_2__ decompressInstructions ;


 size_t FUNC_0 (int ,void*,size_t,void const*,size_t,int ) ;

size_t FUNC_1(const void* VAR_0, size_t VAR_1, void* VAR_2, size_t VAR_3, void* VAR_4)
{
    decompressInstructions* const VAR_5 = (decompressInstructions*) VAR_4;

    size_t const VAR_6 = FUNC_0(VAR_5->dctx,
                                        VAR_2, VAR_3,
                                        VAR_0, VAR_1,
                                        VAR_5->dictionaries.ddicts[VAR_5->dictNb]);

    VAR_5->dictNb = VAR_5->dictNb + 1;
    if (VAR_5->dictNb >= VAR_5->nbDicts) VAR_5->dictNb = 0;

    return VAR_6;
}
