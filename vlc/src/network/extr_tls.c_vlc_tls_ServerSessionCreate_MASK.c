
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {struct TYPE_11__* p; } ;
typedef TYPE_2__ vlc_tls_t ;
struct TYPE_12__ {TYPE_1__* ops; } ;
typedef TYPE_3__ vlc_tls_server_t ;
struct TYPE_10__ {TYPE_2__* (* open ) (TYPE_3__*,TYPE_2__*,char const* const*) ;} ;


 TYPE_2__* FUNC_0 (TYPE_3__*,TYPE_2__*,char const* const*) ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;

vlc_tls_t *FUNC_3(vlc_tls_server_t *VAR_0,
                                       vlc_tls_t *VAR_1,
                                       const char *const *VAR_2)
{
    int VAR_3 = FUNC_2();
    vlc_tls_t *VAR_4 = VAR_0->ops->open(VAR_0, VAR_1, VAR_2);
    FUNC_1(VAR_3);
    if (VAR_4 != ((void*)0))
        VAR_4->p = VAR_1;
    return VAR_4;
}
