
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vlc_fourcc_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_0 (char,char,char,char) ;
 scalar_t__ FUNC_1 (int ,scalar_t__) ;

vlc_fourcc_t FUNC_2( vlc_fourcc_t VAR_11, int VAR_12 )
{
    const int VAR_13 = ( VAR_12 + 7 ) / 8;

    if( VAR_11 == FUNC_0( 'a', 'f', 'l', 't' ) )
    {
        switch( VAR_13 )
        {
        case 4:
            return VAR_1;
        case 8:
            return VAR_2;
        default:
            return 0;
        }
    }
    else if( VAR_11 == FUNC_0( 'a', 'r', 'a', 'w' ) )
    {
        switch( VAR_13 )
        {
        case 1:
            return VAR_10;
        case 2:
            return VAR_4;
        case 3:
            return VAR_6;
        case 4:
            return VAR_8;
        default:
            return 0;
        }
    }
    else if( VAR_11 == FUNC_0( 't', 'w', 'o', 's' ) )
    {
        switch( VAR_13 )
        {
        case 1:
            return VAR_9;
        case 2:
            return VAR_3;
        case 3:
            return VAR_5;
        case 4:
            return VAR_7;
        default:
            return 0;
        }
    }
    else if( VAR_11 == FUNC_0( 's', 'o', 'w', 't' ) )
    {
        switch( VAR_13 )
        {
        case 1:
            return VAR_9;
        case 2:
            return VAR_4;
        case 3:
            return VAR_6;
        case 4:
            return VAR_8;
        default:
            return 0;
        }
    }
    else
    {
        return FUNC_1( VAR_0, VAR_11 );
    }
}
