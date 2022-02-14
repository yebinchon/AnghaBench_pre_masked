
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct server_pool {int dummy; } ;
struct context {int dummy; } ;
typedef int err_t ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct context*,struct server_pool*,int ) ;
 int FUNC_1 (struct context*,struct server_pool*,int ) ;

__attribute__((used)) static void
FUNC_2(struct context *VAR_3, struct server_pool *VAR_4, err_t VAR_5,
                   unsigned VAR_6)
{
    FUNC_0(VAR_3, VAR_4, VAR_0);

    if (VAR_6) {
        FUNC_1(VAR_3, VAR_4, VAR_1);
        return;
    }

    switch (VAR_5) {
    case 129:
    case 128:
    case 135:
    case 136:
    case 130:
    case 132:
    case 131:
    case 134:
    case 133:
    default:
        FUNC_1(VAR_3, VAR_4, VAR_2);
        break;
    }
}
