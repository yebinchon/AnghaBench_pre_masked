
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct string {int * data; } ;
struct server_pool {int dist_type; int server; int ncontinuum; int continuum; struct string hash_tag; } ;


 int FUNC_0 (int) ;



 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int ,int) ;
 int * FUNC_5 (int *,int *,int ) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (struct server_pool*,int *,int) ;
 int FUNC_8 (struct string*) ;

uint32_t
FUNC_9(struct server_pool *VAR_0, uint8_t *VAR_1, uint32_t VAR_2)
{
    uint32_t VAR_3, VAR_4;

    FUNC_0(FUNC_2(&VAR_0->server) != 0);
    FUNC_0(VAR_1 != ((void*)0));






    if (!FUNC_8(&VAR_0->hash_tag)) {
        struct string *VAR_5 = &VAR_0->hash_tag;
        uint8_t *VAR_6, *VAR_7;

        VAR_6 = FUNC_5(VAR_1, VAR_1 + VAR_2, VAR_5->data[0]);
        if (VAR_6 != ((void*)0)) {
            VAR_7 = FUNC_5(VAR_6 + 1, VAR_1 + VAR_2, VAR_5->data[1]);
            if ((VAR_7 != ((void*)0)) && (VAR_7 - VAR_6 > 1)) {
                VAR_1 = VAR_6 + 1;
                VAR_2 = (uint32_t)(VAR_7 - VAR_1);
            }
        }
    }

    switch (VAR_0->dist_type) {
    case 130:
        VAR_3 = FUNC_7(VAR_0, VAR_1, VAR_2);
        VAR_4 = FUNC_3(VAR_0->continuum, VAR_0->ncontinuum, VAR_3);
        break;

    case 129:
        VAR_3 = FUNC_7(VAR_0, VAR_1, VAR_2);
        VAR_4 = FUNC_4(VAR_0->continuum, VAR_0->ncontinuum, VAR_3);
        break;

    case 128:
        VAR_4 = FUNC_6(VAR_0->continuum, VAR_0->ncontinuum, 0);
        break;

    default:
        FUNC_1();
        return 0;
    }
    FUNC_0(VAR_4 < FUNC_2(&VAR_0->server));
    return VAR_4;
}
