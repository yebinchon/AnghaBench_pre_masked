
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_6__ {TYPE_3__* p_sys; } ;
typedef TYPE_2__ filter_t ;
struct TYPE_5__ {scalar_t__ p_pic; } ;
struct TYPE_7__ {struct TYPE_7__* psz_path; struct TYPE_7__* psz_prefix; struct TYPE_7__* psz_format; TYPE_1__ scene; int p_image; } ;
typedef TYPE_3__ filter_sys_t ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static void FUNC_3( vlc_object_t *VAR_0 )
{
    filter_t *VAR_1 = (filter_t *)VAR_0;
    filter_sys_t *VAR_2 = VAR_1->p_sys;

    FUNC_1( VAR_2->p_image );

    if( VAR_2->scene.p_pic )
        FUNC_2( VAR_2->scene.p_pic );
    FUNC_0( VAR_2->psz_format );
    FUNC_0( VAR_2->psz_prefix );
    FUNC_0( VAR_2->psz_path );
    FUNC_0( VAR_2 );
}
