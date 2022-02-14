
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_7__ {unsigned int i_pitch; scalar_t__ i_lines; scalar_t__ i_visible_pitch; scalar_t__ i_visible_lines; int * p_pixels; } ;
typedef TYPE_2__ plane_t ;
struct TYPE_6__ {scalar_t__ i_height; scalar_t__ i_chroma; } ;
struct TYPE_8__ {int i_planes; TYPE_1__ format; TYPE_2__* p; } ;
typedef TYPE_3__ picture_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*) ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__) ;

int FUNC_3(picture_t *VAR_8, uint8_t *VAR_9, unsigned VAR_10)
{

    VAR_8->p->p_pixels = VAR_9;
    VAR_8->p->i_pitch = VAR_10;
    VAR_8->p->i_lines = VAR_8->format.i_height;
    FUNC_0(VAR_8->p->i_visible_pitch <= VAR_8->p->i_pitch);
    FUNC_0(VAR_8->p->i_visible_lines <= VAR_8->p->i_lines);


    if (VAR_8->format.i_chroma == VAR_2 ||
        VAR_8->format.i_chroma == VAR_3 ||
        VAR_8->format.i_chroma == VAR_4) {

        for (int VAR_11 = 1; VAR_11 < VAR_8->i_planes; VAR_11++) {
            const plane_t *VAR_12 = &VAR_8->p[VAR_11-1];
            plane_t *VAR_13 = &VAR_8->p[VAR_11];

            VAR_13->p_pixels = VAR_12->p_pixels + VAR_12->i_lines * VAR_12->i_pitch;
            VAR_13->i_pitch = VAR_10;
            VAR_13->i_lines = VAR_8->format.i_height / 2;
            FUNC_0(VAR_13->i_visible_pitch <= VAR_13->i_pitch);
            FUNC_0(VAR_13->i_visible_lines <= VAR_13->i_lines);
        }

        if (FUNC_2(VAR_8->format.i_chroma, VAR_2)) {

            return VAR_6;
        }
    }


    else
    if (VAR_8->format.i_chroma == VAR_0 ||
        VAR_8->format.i_chroma == VAR_1 ||
        VAR_8->format.i_chroma == VAR_5) {

        for (int VAR_14 = 1; VAR_14 < VAR_8->i_planes; VAR_14++) {
            const plane_t *VAR_15 = &VAR_8->p[VAR_14-1];
            plane_t *VAR_16 = &VAR_8->p[VAR_14];

            VAR_16->p_pixels = VAR_15->p_pixels + VAR_15->i_lines * VAR_15->i_pitch;
            VAR_16->i_pitch = VAR_10 / 2;
            VAR_16->i_lines = VAR_8->format.i_height / 2;
        }

        if (FUNC_2(VAR_8->format.i_chroma, VAR_5))
            FUNC_1( VAR_8 );
    }
    return VAR_7;
}
