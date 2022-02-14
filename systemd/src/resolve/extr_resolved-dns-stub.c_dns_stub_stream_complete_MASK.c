
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int queries; } ;
typedef TYPE_1__ DnsStream ;
typedef int DnsQuery ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int,char*) ;
 int * FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(DnsStream *VAR_0, int VAR_1) {
        FUNC_0(VAR_0);

        FUNC_3(VAR_1, "DNS TCP connection terminated, destroying queries: %m");

        for (;;) {
                DnsQuery *VAR_2;

                VAR_2 = FUNC_4(VAR_0->queries);
                if (!VAR_2)
                        break;

                FUNC_1(VAR_2);
        }



        FUNC_2(VAR_0);
        return 0;
}
