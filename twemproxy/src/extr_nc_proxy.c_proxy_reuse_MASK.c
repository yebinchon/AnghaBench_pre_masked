
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_un {int sun_path; } ;
struct conn {int family; scalar_t__ addr; int sd; } ;
typedef int rstatus_t ;





 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static rstatus_t
FUNC_3(struct conn *VAR_2)
{
    rstatus_t VAR_3;
    struct sockaddr_un *VAR_4;

    switch (VAR_2->family) {
    case 130:
    case 129:
        VAR_3 = FUNC_1(VAR_2->sd);
        break;

    case 128:





        VAR_4 = (struct sockaddr_un *) VAR_2->addr;
        FUNC_2(VAR_4->sun_path);
        VAR_3 = VAR_1;
        break;

    default:
        FUNC_0();
        VAR_3 = VAR_0;
    }

    return VAR_3;
}
