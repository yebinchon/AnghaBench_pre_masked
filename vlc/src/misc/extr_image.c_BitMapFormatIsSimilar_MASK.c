
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ i_chroma; scalar_t__ i_rmask; scalar_t__ i_gmask; scalar_t__ i_bmask; } ;
typedef TYPE_1__ video_format_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static bool FUNC_1( const video_format_t *VAR_4,
                                   const video_format_t *VAR_5 )
{
    if( VAR_4->i_chroma == VAR_0 ||
        VAR_4->i_chroma == VAR_1 ||
        VAR_4->i_chroma == VAR_2 ||
        VAR_4->i_chroma == VAR_3 )
    {
        video_format_t VAR_6 = *VAR_4;
        video_format_t VAR_7 = *VAR_5;

        FUNC_0( &VAR_6 );
        FUNC_0( &VAR_7 );

        if( VAR_6 != VAR_7 ||
            VAR_6 != VAR_7 ||
            VAR_6 != VAR_7 )
            return 0;
    }
    return 1;
}
