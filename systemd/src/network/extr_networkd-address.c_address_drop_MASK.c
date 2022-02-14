
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int * link; } ;
typedef int Link ;
typedef TYPE_1__ Address ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int,char*) ;

int FUNC_7(Address *VAR_0) {
        Link *VAR_1;
        bool VAR_2;
        int VAR_3;

        FUNC_3(VAR_0);

        VAR_2 = FUNC_1(VAR_0);
        VAR_1 = VAR_0->link;

        VAR_3 = FUNC_2(VAR_0);
        if (VAR_3 < 0)
                FUNC_6(VAR_1, VAR_3, "Failed to disable IP masquerading, ignoring: %m");

        FUNC_0(VAR_0);

        FUNC_5(VAR_1, 1);

        if (VAR_1 && !VAR_2)
                FUNC_4(VAR_1);

        return 0;
}
