
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int video_format_t ;
struct TYPE_10__ {unsigned char* p_pixels; int i_lines; int i_pitch; } ;
typedef TYPE_2__ plane_t ;
struct TYPE_11__ {scalar_t__ i_planes; TYPE_2__* p; TYPE_5__* p_sys; } ;
typedef TYPE_3__ picture_t ;
struct TYPE_9__ {int destroy; } ;
struct TYPE_12__ {scalar_t__ extra; TYPE_3__ picture; TYPE_1__ gc; } ;
typedef TYPE_4__ picture_priv_t ;
struct TYPE_13__ {unsigned char* base; size_t size; scalar_t__ offset; int fd; } ;
typedef TYPE_5__ picture_buffer_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (size_t,size_t,size_t*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int ,int ,size_t*) ;
 unsigned char* FUNC_3 (int *,size_t) ;
 int VAR_2 ;
 TYPE_4__* FUNC_4 (int const*,int) ;
 scalar_t__ FUNC_5 (int) ;

picture_t *FUNC_6(const video_format_t *restrict VAR_3)
{
    picture_priv_t *VAR_4 = FUNC_4(VAR_3, sizeof (picture_buffer_t));
    if (FUNC_5(VAR_4 == ((void*)0)))
        return ((void*)0);

    VAR_4->gc.destroy = VAR_2;

    picture_t *VAR_5 = &VAR_4->picture;
    if (VAR_5->i_planes == 0) {
        VAR_5->p_sys = ((void*)0);
        return VAR_5;
    }


    size_t VAR_6[VAR_0];
    size_t VAR_7 = 0;

    for (int VAR_8 = 0; VAR_8 < VAR_5->i_planes; VAR_8++)
    {
        const plane_t *VAR_9 = &VAR_5->p[VAR_8];

        if (FUNC_5(FUNC_2(VAR_9->i_pitch, VAR_9->i_lines, &VAR_6[VAR_8]))
         || FUNC_5(FUNC_0(VAR_7, VAR_6[VAR_8], &VAR_7)))
            goto error;
    }

    if (FUNC_5(VAR_7 >= VAR_1))
        goto error;

    picture_buffer_t *VAR_10 = (void *)VAR_4->extra;

    unsigned char *VAR_11 = FUNC_3(&VAR_10->fd, VAR_7);
    if (FUNC_5(VAR_11 == ((void*)0)))
        goto error;

    VAR_10->base = VAR_11;
    VAR_10->size = VAR_7;
    VAR_10->offset = 0;
    VAR_5->p_sys = VAR_10;


    for (int VAR_12 = 0; VAR_12 < VAR_5->i_planes; VAR_12++)
    {
        VAR_5->p[VAR_12].p_pixels = VAR_11;
        VAR_11 += VAR_6[VAR_12];
    }

    return VAR_5;
error:
    FUNC_1(VAR_5);
    return ((void*)0);
}
