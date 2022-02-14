
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct server_pool {int dist_type; int server; } ;
struct TYPE_2__ {int data; int len; } ;
struct server {TYPE_1__ pname; } ;


 int VAR_0 ;
 struct server* FUNC_0 (int *,int ) ;
 int FUNC_1 (int ,char*,int ,int *,int ,int ,int ) ;
 int FUNC_2 (struct server_pool*,int *,int ) ;

__attribute__((used)) static struct server *
FUNC_3(struct server_pool *VAR_1, uint8_t *VAR_2, uint32_t VAR_3)
{
    struct server *VAR_4;
    uint32_t VAR_5;

    VAR_5 = FUNC_2(VAR_1, VAR_2, VAR_3);
    VAR_4 = FUNC_0(&VAR_1->server, VAR_5);

    FUNC_1(VAR_0, "key '%.*s' on dist %d maps to server '%.*s'", VAR_3,
              VAR_2, VAR_1->dist_type, VAR_4->pname.len, VAR_4->pname.data);

    return VAR_4;
}
