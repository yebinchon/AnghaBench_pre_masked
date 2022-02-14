
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ protocol; } ;
typedef TYPE_1__ DnsScope ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int,int ,int ) ;

int FUNC_2(DnsScope *VAR_3, bool VAR_4) {
        FUNC_0(VAR_3);

        if (VAR_3->protocol != VAR_0)
                return 0;

        return FUNC_1(VAR_3, VAR_4, VAR_1, VAR_2);
}
