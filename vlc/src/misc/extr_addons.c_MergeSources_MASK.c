
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_16__ {int (* addon_found ) (TYPE_4__*,TYPE_5__*) ;} ;
struct TYPE_17__ {TYPE_3__ owner; TYPE_2__* p_priv; } ;
typedef TYPE_4__ addons_manager_t ;
typedef int addon_uuid_t ;
struct TYPE_18__ {int lock; int e_flags; scalar_t__ psz_version; int uuid; } ;
typedef TYPE_5__ addon_entry_t ;
struct TYPE_14__ {int entries; } ;
struct TYPE_15__ {TYPE_1__ finder; } ;


 int VAR_0 ;
 int FUNC_0 (int ,TYPE_5__*) ;
 int FUNC_1 (TYPE_5__*) ;
 TYPE_5__* FUNC_2 (TYPE_4__*,int ) ;
 scalar_t__ FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int ,int) ;
 scalar_t__ FUNC_5 (scalar_t__,scalar_t__) ;
 int FUNC_6 (TYPE_4__*,TYPE_5__*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9( addons_manager_t *VAR_1,
                          addon_entry_t **VAR_2, int VAR_3 )
{
    addon_entry_t *VAR_4, *VAR_5;
    addon_uuid_t VAR_6;
    FUNC_4( VAR_6, 0, sizeof( addon_uuid_t ) );
    for ( int VAR_7=0; VAR_7 < VAR_3; VAR_7++ )
    {
        VAR_4 = VAR_2[VAR_7];
        FUNC_7( &VAR_4->lock );
        if ( FUNC_3( VAR_4->uuid, VAR_6, sizeof( addon_uuid_t ) ) )
            VAR_5 = FUNC_2( VAR_1, VAR_4->uuid );
        else
            VAR_5 = ((void*)0);
        if ( !VAR_5 )
        {
            FUNC_0( VAR_1->p_priv->finder.entries, VAR_4 );
            VAR_1->owner.addon_found( VAR_1, VAR_4 );
        }
        else
        {
            FUNC_7( &VAR_5->lock );
            if ( ( VAR_5->psz_version && VAR_4->psz_version )
                 &&
                 FUNC_5( VAR_5->psz_version, VAR_4->psz_version )
                 )
            {
                VAR_5->e_flags |= VAR_0;
            }
            FUNC_8( &VAR_5->lock );
            FUNC_1( VAR_5 );
        }
        FUNC_8( &VAR_4->lock );
    }
}
