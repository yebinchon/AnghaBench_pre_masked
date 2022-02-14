
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef scalar_t__ vlc_fourcc_t ;
struct TYPE_15__ {int fmt; TYPE_4__* p_picture; TYPE_9__* p_text; scalar_t__ i_y; scalar_t__ i_x; } ;
typedef TYPE_3__ subpicture_region_t ;
struct TYPE_16__ {int format; } ;
typedef TYPE_4__ picture_t ;
struct TYPE_13__ {unsigned int i_visible_width; unsigned int i_visible_height; } ;
struct TYPE_14__ {TYPE_1__ video; } ;
struct TYPE_17__ {TYPE_2__ fmt_out; } ;
typedef TYPE_5__ filter_t ;
struct TYPE_18__ {int psz_text; } ;


 char* FUNC_0 (TYPE_9__*,unsigned int,int*) ;
 scalar_t__ const VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,char*) ;
 char* FUNC_4 (TYPE_5__*,unsigned int,int,char*) ;
 TYPE_4__* FUNC_5 (TYPE_5__*,char*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int *) ;

__attribute__((used)) static int FUNC_8( filter_t *VAR_3, subpicture_region_t *VAR_4,
                       subpicture_region_t *VAR_5,
                       const vlc_fourcc_t *VAR_6 )
{

    if( !VAR_5 || !VAR_4 || !VAR_5->p_text )
        return VAR_1;

    for( size_t VAR_7=0; VAR_6[VAR_7]; VAR_7++ )
    {
        if( VAR_6[VAR_7] == VAR_0 )
            break;
        if( VAR_6[VAR_7] == 0 )
            return VAR_1;
    }

    VAR_4->i_x = VAR_5->i_x;
    VAR_4->i_y = VAR_5->i_y;

    unsigned VAR_8 = VAR_3->fmt_out.video.i_visible_width;
    if( (unsigned) VAR_4->i_x <= VAR_8 )
        VAR_8 -= VAR_4->i_x;

    unsigned VAR_9 = VAR_3->fmt_out.video.i_visible_height;
    if( (unsigned) VAR_4->i_y <= VAR_9 )
        VAR_9 -= VAR_4->i_y;

    if( VAR_9 == 0 || VAR_8 == 0 )
        return VAR_1;

    char *VAR_10;


    if( VAR_5->p_text && FUNC_3( VAR_5->p_text->psz_text, "<svg" ) )
    {
        VAR_10 = FUNC_2( VAR_5->p_text->psz_text );
    }
    else
    {

        int VAR_11;
        VAR_10 = FUNC_0( VAR_5->p_text, VAR_9, &VAR_11 );
        if( VAR_10 )
        {
            char *VAR_12 = FUNC_4( VAR_3, VAR_8, VAR_11, VAR_10 );
            FUNC_1( VAR_10 );
            VAR_10 = VAR_12;
        }
    }

    if( !VAR_10 )
        return VAR_1;

    picture_t *VAR_13 = FUNC_5( VAR_3, VAR_10 );

    FUNC_1( VAR_10 );

    if (VAR_13)
    {
        VAR_4->p_picture = VAR_13;
        FUNC_6( &VAR_4->fmt );
        FUNC_7( &VAR_4->fmt, &VAR_13->format );
        return VAR_2;
    }
    return VAR_1;
}
