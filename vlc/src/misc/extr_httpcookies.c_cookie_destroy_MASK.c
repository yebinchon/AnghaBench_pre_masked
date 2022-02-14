
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* psz_path; struct TYPE_4__* psz_domain; struct TYPE_4__* psz_value; struct TYPE_4__* psz_name; } ;
typedef TYPE_1__ http_cookie_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_2(http_cookie_t *VAR_0)
{
    FUNC_0(VAR_0 != ((void*)0));
    FUNC_1(VAR_0->psz_name);
    FUNC_1(VAR_0->psz_value);
    FUNC_1(VAR_0->psz_domain);
    FUNC_1(VAR_0->psz_path);
    FUNC_1(VAR_0);
}
