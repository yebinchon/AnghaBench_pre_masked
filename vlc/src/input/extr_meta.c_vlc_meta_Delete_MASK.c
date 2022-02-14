
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int extra_tags; struct TYPE_4__** ppsz_meta; } ;
typedef TYPE_1__ vlc_meta_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,int ,int *) ;
 int VAR_1 ;

void FUNC_2( vlc_meta_t *VAR_2 )
{
    for( int VAR_3 = 0; VAR_3 < VAR_0 ; VAR_3++ )
        FUNC_0( VAR_2->ppsz_meta[VAR_3] );
    FUNC_1( &VAR_2->extra_tags, VAR_1, ((void*)0) );
    FUNC_0( VAR_2 );
}
