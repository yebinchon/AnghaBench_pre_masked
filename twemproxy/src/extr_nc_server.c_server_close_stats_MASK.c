
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct server {int dummy; } ;
struct context {int dummy; } ;
typedef int err_t ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct context*,struct server*,int ) ;
 int FUNC_1 (struct context*,struct server*,int ) ;

__attribute__((used)) static void
FUNC_2(struct context *VAR_4, struct server *VAR_5, err_t VAR_6,
                   unsigned VAR_7, unsigned VAR_8)
{
    if (VAR_8) {
        FUNC_0(VAR_4, VAR_5, VAR_0);
    }

    if (VAR_7) {
        FUNC_1(VAR_4, VAR_5, VAR_1);
        return;
    }

    switch (VAR_6) {
    case 128:
        FUNC_1(VAR_4, VAR_5, VAR_3);
        break;
    case 129:
    case 135:
    case 137:
    case 136:
    case 130:
    case 132:
    case 131:
    case 134:
    case 133:
    default:
        FUNC_1(VAR_4, VAR_5, VAR_2);
        break;
    }
}
