
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int answer; int key; } ;
typedef TYPE_1__ DnsTransaction ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*,int *) ;
 int FUNC_4 (TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_5(DnsTransaction *VAR_0) {
        int VAR_1;

        FUNC_0(VAR_0);




        VAR_1 = FUNC_3(VAR_0, ((void*)0));
        if (VAR_1 < 0)
                return VAR_1;
        if (VAR_1 > 0)
                return 0;



        VAR_1 = FUNC_4(VAR_0, FUNC_2(VAR_0->key));
        if (VAR_1 < 0)
                return VAR_1;
        if (VAR_1 > 0)
                return 0;





        VAR_1 = FUNC_1(VAR_0->answer);
        if (VAR_1 < 0)
                return VAR_1;
        if (VAR_1 > 0)
                return 0;

        return 1;
}
