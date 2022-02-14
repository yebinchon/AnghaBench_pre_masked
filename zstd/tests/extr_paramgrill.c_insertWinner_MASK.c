
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int result; } ;
struct TYPE_7__ {struct TYPE_7__* next; TYPE_2__ res; } ;
typedef TYPE_1__ winner_ll_node ;
typedef TYPE_2__ winnerInfo_t ;
typedef int constraint_t ;
typedef int BMK_benchResult_t ;






 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int const) ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;
 TYPE_1__* FUNC_3 (int) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static int
FUNC_5(const winnerInfo_t VAR_1, const constraint_t VAR_2)
{
    BMK_benchResult_t VAR_3 = VAR_1.result;
    winner_ll_node* VAR_4 = VAR_0;

    if(!FUNC_1(VAR_3, VAR_2)) {
        return 1;
    }

    if(VAR_0 == ((void*)0)) {
        winner_ll_node* VAR_5 = FUNC_3(sizeof(winner_ll_node));
        if(VAR_5 == ((void*)0)) {
            return 1;
        }
        VAR_5->next = ((void*)0);
        VAR_5->res = VAR_1;
        VAR_0 = VAR_5;
        return 0;
    }

    while(VAR_4->next != ((void*)0)) {
        switch(FUNC_4(VAR_4->res.result, VAR_3)) {
            case 128:
            {
                return 1;
            }
            case 131:
            {
                winner_ll_node* VAR_6;
                VAR_4->res = VAR_4->next->res;
                VAR_6 = VAR_4->next;
                VAR_4->next = VAR_4->next->next;
                FUNC_2(VAR_6);
                break;
            }
            case 130:
            {
                VAR_4 = VAR_4->next;
                break;
            }
            case 129:
            {
                winner_ll_node* VAR_7 = FUNC_3(sizeof(winner_ll_node));
                if(VAR_7 == ((void*)0)) {
                    return 1;
                }
                VAR_7->res = VAR_4->res;
                VAR_4->res = VAR_1;
                VAR_7->next = VAR_4->next;
                VAR_4->next = VAR_7;
                return 0;
            }
        }

    }

    FUNC_0(VAR_4->next == ((void*)0));
    switch(FUNC_4(VAR_4->res.result, VAR_3)) {
        case 128:
        {
            return 1;
        }
        case 131:
        {
            VAR_4->res = VAR_1;
            return 0;
        }
        case 130:
        {
            winner_ll_node* VAR_8 = FUNC_3(sizeof(winner_ll_node));
            if(VAR_8 == ((void*)0)) {
                return 1;
            }
            VAR_8->res = VAR_1;
            VAR_8->next = ((void*)0);
            VAR_4->next = VAR_8;
            return 0;
        }
        case 129:
        {
            winner_ll_node* VAR_9 = FUNC_3(sizeof(winner_ll_node));
            if(VAR_9 == ((void*)0)) {
                return 1;
            }
            VAR_9->res = VAR_4->res;
            VAR_4->res = VAR_1;
            VAR_9->next = VAR_4->next;
            VAR_4->next = VAR_9;
            return 0;
        }
        default:
            return 1;
    }
}
