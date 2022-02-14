
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ i_chroma; } ;
typedef TYPE_1__ video_format_t ;
typedef int picture_t ;
struct TYPE_13__ {int p_parent; } ;
typedef TYPE_2__ image_handler_t ;
struct TYPE_14__ {int i_buffer; int p_buffer; } ;
typedef TYPE_3__ block_t ;
typedef int FILE ;


 TYPE_3__* FUNC_0 (TYPE_2__*,int *,TYPE_1__ const*,TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_3__*) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int ,int ,int,int *) ;
 scalar_t__ FUNC_4 (char const*) ;
 int FUNC_5 (int ,char*,char const*,int ) ;
 int * FUNC_6 (char const*,char*) ;
 int FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8( image_handler_t *VAR_3, picture_t *VAR_4,
                          const video_format_t *VAR_5, const video_format_t *VAR_6,
                          const char *VAR_7 )
{
    block_t *VAR_8;
    FILE *VAR_9;
    video_format_t VAR_10 = *VAR_6;

    if( !VAR_10.i_chroma )
    {

        VAR_10.i_chroma = FUNC_4( VAR_7 );
    }

    VAR_9 = FUNC_6( VAR_7, "wb" );
    if( !VAR_9 )
    {
        FUNC_5( VAR_3->p_parent, "%s: %s", VAR_7, FUNC_7(VAR_2) );
        return VAR_0;
    }

    VAR_8 = FUNC_0( VAR_3, VAR_4, VAR_5, &VAR_10 );

    int VAR_11 = 0;
    if( VAR_8 )
    {
        if( FUNC_3( VAR_8->p_buffer, VAR_8->i_buffer, 1, VAR_9 ) != 1 )
            VAR_11 = VAR_2;
        FUNC_1( VAR_8 );
    }

    if( FUNC_2( VAR_9 ) && !VAR_11 )
        VAR_11 = VAR_2;

    if( VAR_11 )
    {
       VAR_2 = VAR_11;
       FUNC_5( VAR_3->p_parent, "%s: %s", VAR_7, FUNC_7(VAR_2) );
    }

    return VAR_11 ? VAR_0 : VAR_1;
}
