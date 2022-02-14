
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_15__ {int i_chroma; } ;
struct TYPE_16__ {TYPE_4__* p; TYPE_1__ format; } ;
typedef TYPE_2__ picture_t ;
struct TYPE_17__ {int * p_sys; } ;
typedef TYPE_3__ filter_t ;
typedef int filter_sys_t ;
struct TYPE_18__ {unsigned int i_visible_lines; unsigned int i_visible_pitch; } ;


 TYPE_2__* FUNC_0 (TYPE_2__*,TYPE_2__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int ) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 TYPE_2__* FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_4__*,TYPE_4__*) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static picture_t *FUNC_6( filter_t *VAR_5, picture_t *VAR_6 )
{
    picture_t *VAR_7;
    const int VAR_8 = -1;
    const int VAR_9 = 3;
    const unsigned VAR_10 = VAR_6->p[VAR_2].i_visible_lines;
    const unsigned VAR_11 = VAR_6->p[VAR_2].i_visible_pitch;

    VAR_7 = FUNC_3( VAR_5 );
    if( !VAR_7 )
    {
        FUNC_4( VAR_6 );
        return ((void*)0);
    }

    filter_sys_t *VAR_12 = VAR_5->p_sys;

    if (!FUNC_1(VAR_6->format.i_chroma))
        FUNC_2(255, VAR_4);
    else
        FUNC_2(1023, VAR_3);

    FUNC_5( &VAR_7->p[VAR_0], &VAR_6->p[VAR_0] );
    FUNC_5( &VAR_7->p[VAR_1], &VAR_6->p[VAR_1] );

    return FUNC_0( VAR_7, VAR_6 );
}
