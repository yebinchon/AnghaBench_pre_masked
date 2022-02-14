
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int picture_t ;
struct TYPE_13__ {scalar_t__ i_chroma; } ;
struct TYPE_14__ {TYPE_2__ video; } ;
struct TYPE_19__ {TYPE_3__ fmt_in; TYPE_9__* p_sys; } ;
typedef TYPE_8__ filter_t ;
struct TYPE_15__ {int i_chroma_for_420; scalar_t__ i_dimmer_strength; } ;
struct TYPE_12__ {int ** pp_history; } ;
struct TYPE_20__ {TYPE_7__* chroma; TYPE_4__ phosphor; TYPE_1__ context; } ;
typedef TYPE_9__ filter_sys_t ;
typedef int compose_chroma_t ;
struct TYPE_18__ {TYPE_6__* p; } ;
struct TYPE_16__ {int num; int den; } ;
struct TYPE_17__ {TYPE_5__ h; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_8__*,int *,int *,int *,int ,int) ;
 int FUNC_1 (int *,int,scalar_t__,int) ;
 int FUNC_2 (int *,int,scalar_t__,int) ;
 int VAR_5 ;




 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 () ;

int FUNC_7( filter_t *VAR_9,
                    picture_t *VAR_10, picture_t *VAR_11,
                    int VAR_12, int VAR_13 )
{
    FUNC_3(VAR_11);
    FUNC_4( VAR_9 != ((void*)0) );
    FUNC_4( VAR_10 != ((void*)0) );
    FUNC_4( VAR_12 >= 0 && VAR_12 <= 2 );
    FUNC_4( VAR_13 == 0 || VAR_13 == 1 );

    filter_sys_t *VAR_14 = VAR_9->p_sys;


    picture_t *VAR_15 = VAR_14->context.pp_history[VAR_5-1];
    picture_t *VAR_16 = VAR_14->context.pp_history[VAR_5-2];


    if( !VAR_16 )
        VAR_16 = VAR_15;


    if( !VAR_15 )
        return VAR_7;

    FUNC_4( VAR_16 != ((void*)0) );
    FUNC_4( VAR_15 != ((void*)0) );


    picture_t *VAR_17 = VAR_15;
    picture_t *VAR_18 = VAR_15;


    if( VAR_12 == 0 )
    {
        if( VAR_13 == 0 )
            VAR_18 = VAR_16;
        else
            VAR_17 = VAR_16;
    }

    compose_chroma_t VAR_19 = VAR_0;
    if( 2 * VAR_14->chroma->p[1].h.num == VAR_14->chroma->p[1].h.den &&
        2 * VAR_14->chroma->p[2].h.num == VAR_14->chroma->p[2].h.den )
    {

        switch( VAR_14->phosphor.i_chroma_for_420 )
        {
        case 130:
            VAR_19 = VAR_1;
            break;
        case 129:
            if( VAR_13 == 0 )
                VAR_19 = VAR_3;
            else
                VAR_19 = VAR_2;
            break;
        case 131:
            VAR_19 = VAR_0;
            break;
        case 128:
            VAR_19 = VAR_4;
            break;
        default:

            FUNC_6();
            break;
        }
    }
    FUNC_0( VAR_9, VAR_10, VAR_17, VAR_18, VAR_19, VAR_9->fmt_in.video.i_chroma == VAR_6 );
    if( VAR_14->phosphor.i_dimmer_strength > 0 )
    {







            FUNC_1( VAR_10, !VAR_13, VAR_14->phosphor.i_dimmer_strength,
                VAR_14->chroma->p[1].h.num == VAR_14->chroma->p[1].h.den &&
                VAR_14->chroma->p[2].h.num == VAR_14->chroma->p[2].h.den );
    }
    return VAR_8;
}
