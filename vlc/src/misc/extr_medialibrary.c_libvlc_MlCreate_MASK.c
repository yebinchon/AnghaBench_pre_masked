
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int * p_module; int * cbs; } ;
struct TYPE_6__ {TYPE_2__ m; int lock; int cbs; } ;
typedef TYPE_1__ vlc_medialibrary_t ;
typedef int libvlc_int_t ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int * FUNC_1 (TYPE_2__*,char*,int *,int) ;
 scalar_t__ FUNC_2 (int ) ;
 TYPE_1__* FUNC_3 (int ,int,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_2__*) ;

vlc_medialibrary_t* FUNC_8( libvlc_int_t* VAR_1 )
{
    vlc_medialibrary_t *VAR_2 = FUNC_3( FUNC_0( VAR_1 ),
                                                  sizeof( *VAR_2 ), "medialibrary" );
    if ( FUNC_2( VAR_2 == ((void*)0) ) )
        return ((void*)0);
    FUNC_6( &VAR_2->lock );
    FUNC_4( &VAR_2->cbs );
    VAR_2->m.cbs = &VAR_0;
    VAR_2->m.p_module = FUNC_1( &VAR_2->m, "medialibrary", ((void*)0), 0 );
    if ( VAR_2->m.p_module == ((void*)0) )
    {
        FUNC_5( &VAR_2->lock );
        FUNC_7(&VAR_2->m);
        return ((void*)0);
    }
    return VAR_2;
}
