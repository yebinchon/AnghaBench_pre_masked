
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int const* table; int state; } ;
struct TYPE_4__ {int tableLog; } ;
typedef TYPE_1__ FSE_DTableHeader ;
typedef int FSE_DTable ;
typedef int FSE_DStream_t ;
typedef TYPE_2__ FSE_DState_t ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(FSE_DState_t* VAR_0, FSE_DStream_t* VAR_1, const FSE_DTable* VAR_2)
{
    const void* VAR_3 = VAR_2;
    const FSE_DTableHeader* const VAR_4 = (const FSE_DTableHeader*)VAR_3;
    VAR_0->state = FUNC_0(VAR_1, VAR_4->tableLog);
    FUNC_1(VAR_1);
    VAR_0->table = VAR_2 + 1;
}
