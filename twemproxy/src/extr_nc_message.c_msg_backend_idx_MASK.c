
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct server_pool {int dummy; } ;
struct msg {struct conn* owner; } ;
struct conn {struct server_pool* owner; } ;


 int FUNC_0 (struct server_pool*,int *,int ) ;

uint32_t
FUNC_1(struct msg *VAR_0, uint8_t *VAR_1, uint32_t VAR_2)
{
    struct conn *VAR_3 = VAR_0->owner;
    struct server_pool *VAR_4 = VAR_3->owner;

    return FUNC_0(VAR_4, VAR_1, VAR_2);
}
