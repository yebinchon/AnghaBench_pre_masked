
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


struct TYPE_18__ {int i_planes; } ;
typedef TYPE_1__ picture_t ;
struct TYPE_19__ {TYPE_3__* p_sys; } ;
typedef TYPE_2__ filter_t ;
struct TYPE_20__ {int i_direction; int i_split; } ;
typedef TYPE_3__ filter_sys_t ;


 TYPE_1__* FUNC_0 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,TYPE_1__*,int,int) ;
 int FUNC_2 (TYPE_1__*,TYPE_1__*,int,int) ;
 int FUNC_3 (int *) ;
 TYPE_1__* FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,char*) ;
 int FUNC_6 (TYPE_1__*) ;

__attribute__((used)) static picture_t *FUNC_7( filter_t *VAR_0, picture_t *VAR_1 )
{
    picture_t *VAR_2;
    bool VAR_3, VAR_4;

    if( !VAR_1 ) return ((void*)0);

    filter_sys_t *VAR_5 = VAR_0->p_sys;
    VAR_3 = !FUNC_3( &VAR_5->i_split );
    VAR_4 = !FUNC_3( &VAR_5->i_direction );

    VAR_2 = FUNC_4( VAR_0 );
    if( !VAR_2 )
    {
        FUNC_5( VAR_0, "can't get output picture" );
        FUNC_6( VAR_1 );
        return ((void*)0);
    }

    for( int VAR_6 = 0 ; VAR_6 < VAR_1->i_planes ; VAR_6++ )
    {
        if ( VAR_3 )
            FUNC_2( VAR_1, VAR_2, VAR_6, VAR_4 );
        else
            FUNC_1( VAR_1, VAR_2, VAR_6, VAR_4 );
    }

    return FUNC_0( VAR_2, VAR_1 );
}
