
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
typedef scalar_t__ ngx_uint_t ;


 int FUNC_0 (char*,int,int) ;
 scalar_t__ FUNC_1 (int *,int *,size_t) ;

__attribute__((used)) static u_char *
FUNC_2(u_char *VAR_0, u_char *VAR_1, u_char *VAR_2, size_t VAR_3)
{
    ngx_uint_t VAR_4, VAR_5;

    VAR_5 = (ngx_uint_t) *VAR_2++;
    VAR_1 -= VAR_3;

    do {
        do {
            if (VAR_0 >= VAR_1) {
                return ((void*)0);
            }

            VAR_4 = (ngx_uint_t) *VAR_0++;

            FUNC_0("testing char '%c' vs '%c'", (int) VAR_4, (int) VAR_5);

        } while (VAR_4 != VAR_5);

        FUNC_0("testing against pattern \"%.*s\"", (int) VAR_3, *VAR_2);

    } while (FUNC_1(VAR_0, VAR_2, VAR_3) != 0);

    return --VAR_0;
}
