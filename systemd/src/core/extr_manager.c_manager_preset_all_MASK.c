
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ first_boot; } ;
typedef TYPE_1__ Manager ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ,int,char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ,int ,int *,int ,int *,int ) ;

__attribute__((used)) static void FUNC_6(Manager *VAR_5) {
        int VAR_6;

        FUNC_2(VAR_5);

        if (VAR_5->first_boot <= 0)
                return;

        if (!FUNC_0(VAR_5))
                return;

        if (FUNC_1(VAR_5))
                return;


        VAR_6 = FUNC_5(VAR_4, 0, ((void*)0), VAR_3, ((void*)0), 0);
        if (VAR_6 < 0)
                FUNC_3(VAR_6 == -VAR_0 ? VAR_1 : VAR_2, VAR_6,
                               "Failed to populate /etc with preset unit settings, ignoring: %m");
        else
                FUNC_4("Populated /etc with preset unit settings.");
}
