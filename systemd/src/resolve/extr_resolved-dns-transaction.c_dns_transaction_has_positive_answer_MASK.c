
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int key; int answer; } ;
typedef TYPE_1__ DnsTransaction ;
typedef int DnsAnswerFlags ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int ,int *,int *) ;
 int FUNC_2 (int ,int ,int *) ;

__attribute__((used)) static int FUNC_3(DnsTransaction *VAR_0, DnsAnswerFlags *VAR_1) {
        int VAR_2;

        FUNC_0(VAR_0);




        VAR_2 = FUNC_2(VAR_0->answer, VAR_0->key, VAR_1);
        if (VAR_2 != 0)
                return VAR_2;

        VAR_2 = FUNC_1(VAR_0->answer, VAR_0->key, ((void*)0), VAR_1);
        if (VAR_2 != 0)
                return VAR_2;

        return 0;
}
