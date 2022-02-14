
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int serv; int host; int addrinfo; int userdata; int (* destroy_callback ) (int ) ;} ;
typedef TYPE_1__ sd_resolve_query ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 TYPE_1__* FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static sd_resolve_query *FUNC_6(sd_resolve_query *VAR_0) {
        FUNC_0(VAR_0);

        FUNC_4(VAR_0);

        if (VAR_0->destroy_callback)
                VAR_0->destroy_callback(VAR_0->userdata);

        FUNC_3(VAR_0->addrinfo);
        FUNC_1(VAR_0->host);
        FUNC_1(VAR_0->serv);

        return FUNC_2(VAR_0);
}
