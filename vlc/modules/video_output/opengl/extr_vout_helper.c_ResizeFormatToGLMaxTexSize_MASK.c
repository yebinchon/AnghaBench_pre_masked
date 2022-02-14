
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ i_width; scalar_t__ i_height; unsigned int i_visible_width; unsigned int i_visible_height; } ;
typedef TYPE_1__ video_format_t ;



__attribute__((used)) static void
FUNC_0(video_format_t *VAR_0, unsigned int VAR_1)
{
    if (VAR_0->i_width > VAR_0->i_height)
    {
        unsigned int const VAR_2 = VAR_0->i_visible_width;
        unsigned int const VAR_3 = VAR_0->i_visible_height;
        unsigned int const VAR_4 = VAR_1;
        unsigned int const VAR_5 = VAR_4 * VAR_2 / VAR_0->i_width;

        VAR_0->i_height = VAR_4 * VAR_0->i_height / VAR_0->i_width;
        VAR_0->i_width = VAR_4;
        VAR_0->i_visible_height = VAR_5 * VAR_3 / VAR_2;
        VAR_0->i_visible_width = VAR_5;
    }
    else
    {
        unsigned int const VAR_6 = VAR_0->i_visible_width;
        unsigned int const VAR_7 = VAR_0->i_visible_height;
        unsigned int const VAR_8 = VAR_1;
        unsigned int const VAR_9 = VAR_8 * VAR_7 / VAR_0->i_height;

        VAR_0->i_width = VAR_8 * VAR_0->i_width / VAR_0->i_height;
        VAR_0->i_height = VAR_8;
        VAR_0->i_visible_width = VAR_9 * VAR_6 / VAR_7;
        VAR_0->i_visible_height = VAR_9;
    }
}
