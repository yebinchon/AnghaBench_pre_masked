
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int b_secure; } ;
typedef TYPE_1__ http_cookie_t ;


 int FUNC_0 (TYPE_1__ const*,char const*) ;
 int FUNC_1 (TYPE_1__ const*,char const*) ;

__attribute__((used)) static bool FUNC_2(const http_cookie_t *VAR_0, bool VAR_1,
                                  const char *VAR_2, const char *VAR_3)
{
    bool VAR_4 = VAR_1 || !VAR_0->b_secure;
    bool VAR_5 = FUNC_0(VAR_0, VAR_2);
    bool VAR_6 = FUNC_1(VAR_0, VAR_3);
    return VAR_4 && VAR_5 && VAR_6;
}
