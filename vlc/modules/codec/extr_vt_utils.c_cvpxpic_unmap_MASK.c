
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int i_chroma; } ;
typedef TYPE_1__ video_format_t ;
struct TYPE_13__ {int * context; TYPE_1__ format; } ;
typedef TYPE_2__ picture_t ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;




 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,TYPE_2__*) ;
 TYPE_2__* FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_2__*) ;

picture_t *
FUNC_6(picture_t *VAR_5)
{
    video_format_t VAR_6 = VAR_5->format;
    switch (VAR_6.i_chroma)
    {
        case 128: VAR_6.i_chroma = VAR_4; break;
        case 130: VAR_6.i_chroma = VAR_2; break;
        case 129: VAR_6.i_chroma = VAR_3; break;
        case 131: VAR_6.i_chroma = VAR_1; break;
        case 132: VAR_6.i_chroma = VAR_0; break;
        default:
            FUNC_0(!"invalid mapped_pic fmt");
            FUNC_5(VAR_5);
            return ((void*)0);
    }
    FUNC_0(VAR_5->context != ((void*)0));

    picture_t *VAR_7 = FUNC_4(&VAR_6);
    if (VAR_7 == ((void*)0))
    {
        FUNC_5(VAR_5);
        return ((void*)0);
    }

    FUNC_1(VAR_7, FUNC_2(VAR_5));
    FUNC_3(VAR_7, VAR_5);
    FUNC_5(VAR_5);
    return VAR_7;
}
