
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int picture_t ;
struct TYPE_8__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ filter_t ;
struct TYPE_9__ {int i_mode; int lock; } ;
typedef TYPE_2__ filter_sys_t ;


 int * FUNC_0 (int *,int *) ;

 int FUNC_1 (TYPE_1__*,int *,int *) ;
 int FUNC_2 (TYPE_1__*,int *,int *) ;
 int FUNC_3 (TYPE_1__*,int *,int *) ;


 int * FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static picture_t *FUNC_8( filter_t *VAR_0, picture_t *VAR_1 )
{
    picture_t *VAR_2;

    if( !VAR_1 ) return ((void*)0);

    VAR_2 = FUNC_4( VAR_0 );
    if( !VAR_2 )
    {
        FUNC_5( VAR_1 );
        return ((void*)0);
    }

    filter_sys_t *VAR_3 = VAR_0->p_sys;

    FUNC_6( &VAR_3->lock );
    switch( VAR_3->i_mode )
    {
        case 130:
            FUNC_1( VAR_0, VAR_1, VAR_2 );
            break;

        case 129:
            FUNC_2( VAR_0, VAR_1, VAR_2 );
            break;

        case 128:
            FUNC_3( VAR_0, VAR_1, VAR_2 );
            break;

        default:
            break;
    }
    FUNC_7( &VAR_3->lock );

    return FUNC_0( VAR_2, VAR_1 );
}
