
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int flags; int question_idna; } ;
typedef TYPE_1__ DnsScope ;
typedef int DnsQueryCandidate ;
typedef TYPE_1__ DnsQuery ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int **,TYPE_1__*,TYPE_1__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_7(DnsQuery *VAR_1, DnsScope *VAR_2) {
        DnsQueryCandidate *VAR_3;
        int VAR_4;

        FUNC_0(VAR_1);
        FUNC_0(VAR_2);

        VAR_4 = FUNC_2(&VAR_3, VAR_1, VAR_2);
        if (VAR_4 < 0)
                return VAR_4;


        if ((VAR_1->flags & VAR_0) == 0 &&
            FUNC_6(VAR_2, FUNC_5(VAR_1->question_idna))) {


                VAR_4 = FUNC_3(VAR_3);
                if (VAR_4 <= 0)
                        goto fail;
        }

        VAR_4 = FUNC_4(VAR_3);
        if (VAR_4 < 0)
                goto fail;

        return 0;

fail:
        FUNC_1(VAR_3);
        return VAR_4;
}
