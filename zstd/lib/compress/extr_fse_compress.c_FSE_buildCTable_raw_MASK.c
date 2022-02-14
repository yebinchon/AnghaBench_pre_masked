
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int U32 ;
typedef scalar_t__ U16 ;
struct TYPE_2__ {unsigned int deltaNbBits; unsigned int deltaFindState; } ;
typedef TYPE_1__ FSE_symbolCompressionTransform ;
typedef int FSE_CTable ;


 size_t FUNC_0 (int ) ;
 int VAR_0 ;

size_t FUNC_1 (FSE_CTable* VAR_1, unsigned VAR_2)
{
    const unsigned VAR_3 = 1 << VAR_2;
    const unsigned VAR_4 = VAR_3 - 1;
    const unsigned VAR_5 = VAR_4;
    void* const VAR_6 = VAR_1;
    U16* const VAR_7 = ( (U16*) VAR_6) + 2;
    void* const VAR_8 = ((U32*)VAR_6) + 1 + (VAR_3>>1);
    FSE_symbolCompressionTransform* const VAR_9 = (FSE_symbolCompressionTransform*) (VAR_8);
    unsigned VAR_10;


    if (VAR_2 < 1) return FUNC_0(VAR_0);


    VAR_7[-2] = (U16) VAR_2;
    VAR_7[-1] = (U16) VAR_5;


    for (VAR_10=0; VAR_10<VAR_3; VAR_10++)
        VAR_7[VAR_10] = (U16)(VAR_3 + VAR_10);


    { const U32 VAR_11 = (VAR_2 << 16) - (1 << VAR_2);
        for (VAR_10=0; VAR_10<=VAR_5; VAR_10++) {
            VAR_9[VAR_10].deltaNbBits = VAR_11;
            VAR_9[VAR_10].deltaFindState = VAR_10-1;
    } }

    return 0;
}
