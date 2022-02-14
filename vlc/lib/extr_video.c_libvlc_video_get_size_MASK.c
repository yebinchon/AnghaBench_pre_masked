
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ i_type; TYPE_1__* video; } ;
typedef TYPE_2__ libvlc_media_track_t ;
struct TYPE_9__ {int * p_md; } ;
typedef TYPE_3__ libvlc_media_player_t ;
struct TYPE_7__ {unsigned int i_width; unsigned int i_height; } ;


 unsigned int FUNC_0 (int *,TYPE_2__***) ;
 int FUNC_1 (TYPE_2__**,unsigned int) ;
 scalar_t__ VAR_0 ;

int FUNC_2( libvlc_media_player_t *VAR_1, unsigned VAR_2,
                           unsigned *restrict VAR_3, unsigned *restrict VAR_4 )
{
    if (VAR_1->p_md == ((void*)0))
        return -1;

    libvlc_media_track_t **VAR_5;
    unsigned VAR_6 = FUNC_0(VAR_1->p_md, &VAR_5);
    int VAR_7 = -1;

    for (unsigned VAR_8 = 0; VAR_8 < VAR_6; VAR_8++)
        if (VAR_5[VAR_8]->i_type == VAR_0 && VAR_2-- == 0) {
            *VAR_3 = VAR_5[VAR_8]->video->i_width;
            *VAR_4 = VAR_5[VAR_8]->video->i_height;
            VAR_7 = 0;
            break;
        }

    FUNC_1(VAR_5, VAR_6);
    return VAR_7;
}
