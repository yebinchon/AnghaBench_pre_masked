
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int stateLog; int symbolTT; } ;
typedef int FSE_CTable ;
typedef TYPE_1__ FSE_CState_t ;


 unsigned int FUNC_0 (int ,unsigned int const,unsigned int,unsigned int const) ;
 int FUNC_1 (TYPE_1__*,int const*) ;
 int VAR_0 ;
 int FUNC_2 (int,int ,char*,unsigned int const,...) ;
 unsigned int const FUNC_3 (int const*) ;

__attribute__((used)) static size_t FUNC_4(
    FSE_CTable const* VAR_1,
    unsigned const* VAR_2,
    unsigned const VAR_3)
{
    unsigned const VAR_4 = 8;
    size_t VAR_5 = 0;
    unsigned VAR_6;
    FSE_CState_t VAR_7;
    FUNC_1(&VAR_7, VAR_1);
    FUNC_2(FUNC_3(VAR_1) < VAR_3, VAR_0,
                    "Repeat FSE_CTable has maxSymbolValue %u < %u",
                    FUNC_3(VAR_1), VAR_3);
    for (VAR_6 = 0; VAR_6 <= VAR_3; ++VAR_6) {
        unsigned const VAR_8 = VAR_7.stateLog;
        unsigned const VAR_9 = (VAR_8 + 1) << VAR_4;
        unsigned const VAR_10 = FUNC_0(VAR_7.symbolTT, VAR_8, VAR_6, VAR_4);
        if (VAR_2[VAR_6] == 0)
            continue;
        FUNC_2(VAR_10 >= VAR_9, VAR_0,
                        "Repeat FSE_CTable has Prob[%u] == 0", VAR_6);
        VAR_5 += VAR_2[VAR_6] * VAR_10;
    }
    return VAR_5 >> VAR_4;
}
