
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vlm_t ;
struct TYPE_5__ {scalar_t__ i_instance; TYPE_1__** instance; } ;
typedef TYPE_2__ vlm_media_sys_t ;
typedef int int64_t ;
struct TYPE_4__ {int psz_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_2( vlm_t *VAR_2, int64_t VAR_3 )
{
    vlm_media_sys_t *VAR_4 = FUNC_0( VAR_2, VAR_3 );

    if( !VAR_4 )
        return VAR_0;

    while( VAR_4->i_instance > 0 )
        FUNC_1( VAR_2, VAR_3, VAR_4->instance[0]->psz_name );

    return VAR_1;
}
