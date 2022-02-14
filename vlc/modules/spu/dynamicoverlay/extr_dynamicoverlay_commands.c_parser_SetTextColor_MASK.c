
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int i_font_color; } ;
struct TYPE_5__ {int i_id; TYPE_1__ fontstyle; } ;
typedef TYPE_2__ commandparams_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (unsigned char) ;
 scalar_t__ FUNC_2 (char**,int*) ;
 int FUNC_3 (char**) ;

__attribute__((used)) static int FUNC_4( char *VAR_2, char *VAR_3,
                                commandparams_t *VAR_4 )
{
    int VAR_5 = 0, VAR_6 = 0, VAR_7 = 0;
    FUNC_0(VAR_3);

    FUNC_3( &VAR_2 );
    if( FUNC_1( (unsigned char)*VAR_2 ) )
    {
        if( FUNC_2( &VAR_2, &VAR_4->i_id ) == VAR_0 )
            return VAR_0;
    }
    FUNC_3( &VAR_2 );
    if( FUNC_1( (unsigned char)*VAR_2 ) )
    {
        if( FUNC_2( &VAR_2, &VAR_5 ) == VAR_0 )
            return VAR_0;
    }
    FUNC_3( &VAR_2 );
    if( FUNC_1( (unsigned char)*VAR_2 ) )
    {
        if( FUNC_2( &VAR_2, &VAR_6 ) == VAR_0 )
            return VAR_0;
    }
    FUNC_3( &VAR_2 );
    if( FUNC_1( (unsigned char)*VAR_2 ) )
    {
        if( FUNC_2( &VAR_2, &VAR_7 ) == VAR_0 )
            return VAR_0;
    }
    VAR_4->fontstyle.i_font_color = (VAR_5<<16) | (VAR_6<<8) | (VAR_7<<0);
    return VAR_1;
}
