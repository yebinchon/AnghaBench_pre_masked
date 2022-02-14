
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int key ;
struct TYPE_4__ {int hmac_running; int hmac; int fsprg_state; int seal; } ;
typedef TYPE_1__ JournalFile ;


 int FUNC_0 (int ,int *,int,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int *,int) ;

int FUNC_4(JournalFile *VAR_0) {
        uint8_t VAR_1[256 / 8];
        FUNC_1(VAR_0);

        if (!VAR_0->seal)
                return 0;

        if (VAR_0->hmac_running)
                return 0;


        FUNC_2(VAR_0->hmac);
        FUNC_0(VAR_0->fsprg_state, VAR_1, sizeof(VAR_1), 0);
        FUNC_3(VAR_0->hmac, VAR_1, sizeof(VAR_1));

        VAR_0->hmac_running = 1;

        return 0;
}
