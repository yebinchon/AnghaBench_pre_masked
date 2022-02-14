
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {int i_style_flags; } ;
typedef TYPE_1__ text_style_t ;
struct TYPE_14__ {int i_data; int p_data; } ;
typedef TYPE_2__ input_attachment_t ;
struct TYPE_15__ {TYPE_4__* p_sys; } ;
typedef TYPE_3__ filter_t ;
struct TYPE_16__ {int i_font_attachments; int face_map; int p_library; TYPE_2__** pp_font_attachments; } ;
typedef TYPE_4__ filter_sys_t ;
struct TYPE_17__ {int stream; int flags; int member_0; } ;
typedef int FT_Stream ;
typedef TYPE_5__ FT_Open_Args ;
typedef int * FT_Face ;


 int FUNC_0 (TYPE_3__*,TYPE_1__ const*) ;
 scalar_t__ FUNC_1 (TYPE_3__*,int,int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ,char const*,int,int **) ;
 scalar_t__ FUNC_4 (int ,int ,int ,int,int **) ;
 int VAR_0 ;
 scalar_t__ FUNC_5 (int ,TYPE_5__*,int,int **) ;
 scalar_t__ FUNC_6 (int *,int ) ;
 scalar_t__ FUNC_7 (int *,int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_8 (char**,char*,char const*,int,int,int) ;
 int FUNC_9 (char const*) ;
 int FUNC_10 (char*) ;
 int VAR_4 ;
 int FUNC_11 (char const*,char*,int) ;
 int FUNC_12 (TYPE_3__*,char*,...) ;
 int FUNC_13 (int *,char*,int *) ;
 int * FUNC_14 (int *,char*) ;

__attribute__((used)) static FT_Face FUNC_15( filter_t *VAR_5, const char *VAR_6, int VAR_7,
                  const text_style_t *VAR_8 )
{
    filter_sys_t *VAR_9 = VAR_5->p_sys;
    char *VAR_10 = ((void*)0);

    int VAR_11 = FUNC_0( VAR_5, VAR_8 );
    int VAR_12 = VAR_11;
    if( VAR_8->i_style_flags & VAR_2 )
        VAR_12 /= 2;
    else if( VAR_8->i_style_flags & VAR_1 )
        VAR_12 *= 2;

    if( FUNC_8( &VAR_10, "%s - %d - %d - %d",
                  VAR_6, VAR_7,
                  VAR_11, VAR_12 ) < 0 )
        return ((void*)0);

    FT_Face VAR_13 = FUNC_14( &VAR_9->face_map, VAR_10 );
    if( VAR_13 != ((void*)0) )
        goto done;

    if( VAR_6[0] == ':' && VAR_6[1] == '/' )
    {
        int VAR_14 = FUNC_9( VAR_6 + 2 );
        if( VAR_14 < 0 || VAR_14 >= VAR_9->i_font_attachments )
            FUNC_12( VAR_5, "LoadFace: Invalid font attachment index" );
        else
        {
            input_attachment_t *VAR_15 = VAR_9->pp_font_attachments[ VAR_14 ];
            if( FUNC_4( VAR_9->p_library, VAR_15->p_data,
                                    VAR_15->i_data, VAR_7, &VAR_13 ) )
                FUNC_12( VAR_5, "LoadFace: Error creating face for %s", VAR_10 );
        }
    }
    else
        if( FUNC_3( VAR_9->p_library, VAR_6, VAR_7, &VAR_13 ) )
            FUNC_12( VAR_5, "LoadFace: Error creating face for %s", VAR_10 );

    if( !VAR_13 )
        goto done;

    if( FUNC_6( VAR_13, VAR_4 ) )
    {



        FUNC_12( VAR_5, "LoadFace: Error selecting charmap for %s", VAR_10 );
        FUNC_2( VAR_13 );
        VAR_13 = ((void*)0);
        goto done;
    }

    if( FUNC_7( VAR_13, VAR_12, VAR_11 ) )
    {
        FUNC_12( VAR_5,
                 "LoadFace: Failed to set font size for %s", VAR_10 );
        FUNC_2( VAR_13 );
        VAR_13 = ((void*)0);
        goto done;
    }

    FUNC_13( &VAR_9->face_map, VAR_10, VAR_13 );

done:
    FUNC_10( VAR_10 );
    return VAR_13;
}
