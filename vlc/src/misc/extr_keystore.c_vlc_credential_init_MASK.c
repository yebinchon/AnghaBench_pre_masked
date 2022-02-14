
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int vlc_url_t ;
struct TYPE_5__ {int const* p_url; int i_get_order; } ;
typedef TYPE_1__ vlc_credential ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;

void
FUNC_2(vlc_credential *VAR_1, const vlc_url_t *VAR_2)
{
    FUNC_0(VAR_1);

    FUNC_1(VAR_1, 0, sizeof(*VAR_1));
    VAR_1->i_get_order = VAR_0;
    VAR_1->p_url = VAR_2;
}
