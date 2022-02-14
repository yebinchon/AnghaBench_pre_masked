
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_6__ {int psz_name; } ;
struct basic_filter_data {TYPE_1__ sigma; } ;
struct TYPE_7__ {TYPE_3__* p_sys; } ;
typedef TYPE_2__ filter_t ;
struct TYPE_8__ {struct basic_filter_data* p_data; } ;
typedef TYPE_3__ filter_sys_t ;


 int FUNC_0 (TYPE_2__* const,TYPE_3__* const) ;
 int VAR_0 ;
 int FUNC_1 (struct basic_filter_data* const) ;
 int FUNC_2 (int *,int ,int ,struct basic_filter_data* const) ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static void
FUNC_4(vlc_object_t * VAR_1)
{
    filter_t *const VAR_2 = (filter_t *)VAR_1;
    filter_sys_t *const VAR_3 = VAR_2->p_sys;
    struct basic_filter_data *const VAR_4 = VAR_3->p_data;

    FUNC_2(VAR_1, VAR_4->sigma.psz_name, VAR_0, VAR_4);
    FUNC_3(VAR_1, VAR_4->sigma.psz_name);
    FUNC_1(VAR_4);
    FUNC_0(VAR_2, VAR_3);
}
