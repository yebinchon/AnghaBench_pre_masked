
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int id; } ;
typedef TYPE_1__ Unit ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,char*,int ) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_2(int VAR_2, int VAR_3, const Unit *VAR_4) {
        FUNC_0(VAR_2 < 0);

        if (VAR_2 == -VAR_0)
                FUNC_1(VAR_3, "Confirmation question timed out for %s, assuming positive response.\n", VAR_4->id);
        else {
                VAR_1 = -VAR_2;
                FUNC_1(VAR_3, "Couldn't ask confirmation for %s: %m, assuming positive response.\n", VAR_4->id);
        }
}
