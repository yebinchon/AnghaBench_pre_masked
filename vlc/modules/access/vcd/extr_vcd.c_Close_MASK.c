
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_5__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ stream_t ;
struct TYPE_6__ {int vcddev; int p_toc; TYPE_4__* titles; } ;
typedef TYPE_2__ access_sys_t ;
struct TYPE_7__ {TYPE_2__* seekpoints; } ;


 size_t FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4( vlc_object_t *VAR_0 )
{
    stream_t *VAR_1 = (stream_t *)VAR_0;
    access_sys_t *VAR_2 = VAR_1->p_sys;

    for( size_t VAR_3 = 0; VAR_3 < FUNC_0(VAR_2->titles); VAR_3++ )
        FUNC_1( VAR_2->titles[VAR_3].seekpoints );

    FUNC_3( VAR_2->p_toc );

    FUNC_2( VAR_0, VAR_2->vcddev );
    FUNC_1( VAR_2 );
}
