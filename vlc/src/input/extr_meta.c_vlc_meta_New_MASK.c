
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int extra_tags; scalar_t__ i_status; int ppsz_meta; } ;
typedef TYPE_1__ vlc_meta_t ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int *,int ) ;

vlc_meta_t *FUNC_3( void )
{
    vlc_meta_t *VAR_0 = (vlc_meta_t*)FUNC_0( sizeof(*VAR_0) );
    if( !VAR_0 )
        return ((void*)0);
    FUNC_1( VAR_0->ppsz_meta, 0, sizeof(VAR_0->ppsz_meta) );
    VAR_0->i_status = 0;
    FUNC_2( &VAR_0->extra_tags, 0 );
    return VAR_0;
}
