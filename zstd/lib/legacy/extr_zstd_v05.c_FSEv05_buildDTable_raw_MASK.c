
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ U16 ;
struct TYPE_4__ {int fastMode; scalar_t__ tableLog; } ;
struct TYPE_3__ {void* nbBits; void* symbol; scalar_t__ newState; } ;
typedef TYPE_1__ FSEv05_decode_t ;
typedef TYPE_2__ FSEv05_DTableHeader ;
typedef int FSEv05_DTable ;
typedef void* BYTE ;


 size_t FUNC_0 (int ) ;
 int VAR_0 ;

size_t FUNC_1 (FSEv05_DTable* VAR_1, unsigned VAR_2)
{
    void* VAR_3 = VAR_1;
    FSEv05_DTableHeader* const VAR_4 = (FSEv05_DTableHeader*)VAR_3;
    void* VAR_5 = VAR_1 + 1;
    FSEv05_decode_t* const VAR_6 = (FSEv05_decode_t*)VAR_5;
    const unsigned VAR_7 = 1 << VAR_2;
    const unsigned VAR_8 = VAR_7 - 1;
    const unsigned VAR_9 = VAR_8;
    unsigned VAR_10;


    if (VAR_2 < 1) return FUNC_0(VAR_0);


    VAR_4->tableLog = (U16)VAR_2;
    VAR_4->fastMode = 1;
    for (VAR_10=0; VAR_10<=VAR_9; VAR_10++) {
        VAR_6[VAR_10].newState = 0;
        VAR_6[VAR_10].symbol = (BYTE)VAR_10;
        VAR_6[VAR_10].nbBits = (BYTE)VAR_2;
    }

    return 0;
}
