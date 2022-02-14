
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int pos; scalar_t__ savings; } ;
typedef TYPE_1__ dictItem ;
typedef int U32 ;


 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*,TYPE_1__,int,void const*) ;

__attribute__((used)) static void FUNC_2(dictItem* VAR_0, U32 VAR_1, dictItem VAR_2, const void* VAR_3)
{

    U32 VAR_4 = FUNC_1(VAR_0, VAR_2, 0, VAR_3);
    if (VAR_4) {
        U32 VAR_5 = 1;
        while (VAR_5) {
            VAR_5 = FUNC_1(VAR_0, VAR_0[VAR_4], VAR_4, VAR_3);
            if (VAR_5) FUNC_0(VAR_0, VAR_4);
            VAR_4 = VAR_5;
        }
        return;
    }


    { U32 VAR_6;
        U32 VAR_7 = VAR_0->pos;
        if (VAR_7 >= VAR_1) VAR_7 = VAR_1-1;
        VAR_6 = VAR_7-1;
        while (VAR_0[VAR_6].savings < VAR_2.savings) {
            VAR_0[VAR_6+1] = VAR_0[VAR_6];
            VAR_6--;
        }
        VAR_0[VAR_6+1] = VAR_2;
        VAR_0->pos = VAR_7+1;
    }
}
