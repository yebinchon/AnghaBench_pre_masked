
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int nbDDict; } ;
struct TYPE_5__ {TYPE_2__ dictionaries; scalar_t__ dictNb; int nbDicts; int * dctx; } ;
typedef TYPE_1__ decompressInstructions ;
typedef TYPE_2__ ddict_collection_t ;


 int * FUNC_0 () ;
 int FUNC_1 (int ) ;

decompressInstructions FUNC_2(ddict_collection_t VAR_0)
{
    decompressInstructions VAR_1;
    VAR_1.dctx = FUNC_0();
    FUNC_1(VAR_1.dctx != ((void*)0));
    VAR_1.nbDicts = VAR_0.nbDDict;
    VAR_1.dictNb = 0;
    VAR_1.dictionaries = VAR_0;
    return VAR_1;
}
