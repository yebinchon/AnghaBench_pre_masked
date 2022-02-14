
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int U32 ;
struct TYPE_5__ {size_t state; scalar_t__ table; } ;
struct TYPE_4__ {size_t newState; int symbol; int nbBits; } ;
typedef TYPE_1__ FSE_decode_t ;
typedef int FSE_DStream_t ;
typedef TYPE_2__ FSE_DState_t ;
typedef int BYTE ;


 size_t FUNC_0 (int *,int const) ;

__attribute__((used)) static BYTE FUNC_1(FSE_DState_t* VAR_0, FSE_DStream_t* VAR_1)
{
    const FSE_decode_t VAR_2 = ((const FSE_decode_t*)(VAR_0->table))[VAR_0->state];
    const U32 VAR_3 = VAR_2.nbBits;
    BYTE VAR_4 = VAR_2.symbol;
    size_t VAR_5 = FUNC_0(VAR_1, VAR_3);

    VAR_0->state = VAR_2.newState + VAR_5;
    return VAR_4;
}
