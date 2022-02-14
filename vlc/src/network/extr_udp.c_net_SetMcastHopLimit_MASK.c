
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_object_t ;
typedef int hlim ;
typedef int buf ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,char*,int,int ) ;
 int FUNC_1 (int *,char*,int,int ) ;
 int FUNC_2 (int *,char*,int ) ;
 int VAR_8 ;
 scalar_t__ FUNC_3 (int,int,int,...) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5( vlc_object_t *VAR_9,
                                 int VAR_10, int VAR_11, int VAR_12 )
{
    int VAR_13, VAR_14;





    switch( VAR_11 )
    {
        default:
            VAR_7 = VAR_0;
            FUNC_2( VAR_9, "%s", FUNC_4(VAR_0) );
            return VAR_5;
    }

    if( FUNC_3( VAR_10, VAR_13, VAR_14, &VAR_12, sizeof( VAR_12 ) ) < 0 )
    {

        unsigned char VAR_15;

        FUNC_0( VAR_9, "cannot set hop limit (%d): %s", VAR_12,
                 FUNC_4(VAR_8) );
        VAR_15 = (unsigned char)(( VAR_12 > 255 ) ? 255 : VAR_12);
        if( FUNC_3( VAR_10, VAR_13, VAR_14, &VAR_15, sizeof( VAR_15 ) ) )
        {
            FUNC_1( VAR_9, "cannot set hop limit (%d): %s", VAR_12,
                     FUNC_4(VAR_8) );
            return VAR_5;
        }
    }

    return VAR_6;
}
