
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct server_pool {scalar_t__ (* key_hash ) (char*,scalar_t__) ;int server; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (char*,scalar_t__) ;

__attribute__((used)) static uint32_t
FUNC_3(struct server_pool *VAR_0, uint8_t *VAR_1, uint32_t VAR_2)
{
    FUNC_0(FUNC_1(&VAR_0->server) != 0);
    FUNC_0(VAR_1 != ((void*)0));

    if (FUNC_1(&VAR_0->server) == 1) {
        return 0;
    }

    if (VAR_2 == 0) {
        return 0;
    }

    return VAR_0->key_hash((char *)VAR_1, VAR_2);
}
