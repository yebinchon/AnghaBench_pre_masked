
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_5__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ filter_t ;
struct TYPE_6__ {int p_data; } ;
typedef TYPE_2__ filter_sys_t ;


 int FUNC_0 (TYPE_1__* const,TYPE_2__* const) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 int * VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,int ,int ) ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static void
FUNC_4(vlc_object_t * VAR_3)
{
    filter_t *const VAR_4 = (filter_t *)VAR_3;
    filter_sys_t *const VAR_5 = VAR_4->p_sys;

    for (unsigned int VAR_6 = 0; VAR_6 < VAR_1; ++VAR_6)
    {
        FUNC_2(VAR_3, VAR_2[VAR_6],
                        VAR_0, VAR_5->p_data);
        FUNC_3(VAR_3, VAR_2[VAR_6]);
    }
    FUNC_1(VAR_5->p_data);
    FUNC_0(VAR_4, VAR_5);
}
