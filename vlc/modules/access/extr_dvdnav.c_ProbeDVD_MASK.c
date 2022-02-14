
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uint16_t ;
struct stat {int st_mode; } ;
typedef int iso_dsc ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_4 (int,struct stat*) ;
 int FUNC_5 (int,int,int ) ;
 scalar_t__ FUNC_6 (char*,char*,int) ;
 int FUNC_7 (int,char*,int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (char const*,int) ;

__attribute__((used)) static int FUNC_10( const char *VAR_8 )
{
    if( !*VAR_8 )

        return VAR_6;

    int VAR_9 = FUNC_9( VAR_8, VAR_3 | VAR_2 );
    if( VAR_9 == -1 )



        return (VAR_7 == VAR_1) ? VAR_5 : VAR_6;


    int VAR_10 = VAR_5;
    struct stat VAR_11;

    if( FUNC_4( VAR_9, &VAR_11 ) == -1 )
         goto bailout;
    if( !FUNC_3( VAR_11.st_mode ) )
    {
        if( FUNC_2( VAR_11.st_mode ) || FUNC_1( VAR_11.st_mode ) )
            VAR_10 = VAR_6;
        goto bailout;
    }


    char VAR_12[6];
    if( FUNC_5( VAR_9, 0x8000 + 1, VAR_4 ) == -1
     || FUNC_7( VAR_9, VAR_12, sizeof (VAR_12) ) < (int)sizeof (VAR_12)
     || FUNC_6( VAR_12, "CD001\x01", 6 ) )
        goto bailout;


    uint16_t VAR_13;

    if( FUNC_5( VAR_9, 256 * VAR_0, VAR_4 ) != -1
     && FUNC_7( VAR_9, &VAR_13, 2 ) == 2
     && FUNC_0( &VAR_13 ) == 2 )
        VAR_10 = VAR_6;
bailout:
    FUNC_8( VAR_9 );
    return VAR_10;
}
