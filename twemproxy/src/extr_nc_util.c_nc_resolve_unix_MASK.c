
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct string {size_t len; int data; } ;
struct sockaddr_un {char* sun_path; void* sun_family; } ;
struct TYPE_2__ {struct sockaddr_un un; } ;
struct sockinfo {int addrlen; void* family; TYPE_1__ addr; } ;


 void* VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (char*,int ,size_t) ;

__attribute__((used)) static int
FUNC_1(struct string *VAR_2, struct sockinfo *VAR_3)
{
    struct sockaddr_un *VAR_4;

    if (VAR_2->len >= VAR_1) {
        return -1;
    }

    VAR_4 = &VAR_3->addr.un;

    VAR_4->sun_family = VAR_0;
    FUNC_0(VAR_4->sun_path, VAR_2->data, VAR_2->len);
    VAR_4->sun_path[VAR_2->len] = '\0';

    VAR_3->family = VAR_0;
    VAR_3->addrlen = sizeof(*VAR_4);


    return 0;
}
