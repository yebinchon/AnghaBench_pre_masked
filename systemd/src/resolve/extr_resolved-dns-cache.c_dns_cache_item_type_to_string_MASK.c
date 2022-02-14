
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int type; int rcode; } ;
typedef TYPE_1__ DnsCacheItem ;






 int FUNC_0 (TYPE_1__*) ;
 char const* FUNC_1 (int ) ;

__attribute__((used)) static const char *FUNC_2(DnsCacheItem *VAR_0) {
        FUNC_0(VAR_0);

        switch (VAR_0->type) {

        case 129:
                return "POSITIVE";

        case 131:
                return "NODATA";

        case 130:
                return "NXDOMAIN";

        case 128:
                return FUNC_1(VAR_0->rcode);
        }

        return ((void*)0);
}
