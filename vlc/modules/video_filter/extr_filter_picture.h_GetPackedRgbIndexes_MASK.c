
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ i_chroma; int i_bmask; int i_gmask; int i_rmask; } ;
typedef TYPE_1__ video_format_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static inline int FUNC_1( const video_format_t *VAR_4, int *VAR_5,
                                      int *VAR_6, int *VAR_7 )
{
    if( VAR_4->i_chroma != VAR_0 && VAR_4->i_chroma != VAR_1 )
        return VAR_2;







    *VAR_5 = FUNC_0(VAR_4->i_rmask) / 8;
    *VAR_6 = FUNC_0(VAR_4->i_gmask) / 8;
    *VAR_7 = FUNC_0(VAR_4->i_bmask) / 8;

    return VAR_3;
}
