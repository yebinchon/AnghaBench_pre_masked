
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vlc_meta_t ;
typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_3__ {scalar_t__ i_tag; int psz; int type; } ;


 size_t FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int const*,size_t,int *,int*) ;
 char* FUNC_2 (int const*,size_t,int const,char**) ;
 char* FUNC_3 (int const*,size_t,char**) ;
 int FUNC_4 (int const*,size_t,int ,int ,int *,int*) ;
 TYPE_1__* VAR_0 ;
 scalar_t__ FUNC_5 (char,char,char,char) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char const*) ;
 int FUNC_8 (char const*,char*,int) ;
 int FUNC_9 (int *,char const*,char const*) ;
 scalar_t__ FUNC_10 (int *) ;

__attribute__((used)) static bool FUNC_11( const uint8_t *VAR_1, size_t VAR_2,
                          uint32_t VAR_3,
                          vlc_meta_t *VAR_4, bool *VAR_5 )
{
    if( VAR_3 == FUNC_5('W', 'X', 'X', 'X') )
    {
        return FUNC_1( VAR_1, VAR_2, VAR_4, VAR_5 );
    }
    else if( VAR_3 == FUNC_5('T', 'X', 'X', 'X') )
    {
        char *VAR_6;
        const char *VAR_7 = FUNC_3( VAR_1, VAR_2, &VAR_6 );
        if( VAR_7 )
        {
            const size_t VAR_8 = FUNC_7( VAR_7 ) + 2;
            if( VAR_8 < VAR_2 )
            {

                if( !FUNC_8( VAR_7, "REPLAYGAIN_", 11 ) )
                {
                    char *VAR_9;
                    const char *VAR_10 = FUNC_2( &VAR_1[VAR_8], VAR_2 - VAR_8,
                                                       VAR_1[0], &VAR_9 );
                    if( VAR_10 )
                    {
                        FUNC_9( VAR_4, VAR_7, VAR_10 );
                        FUNC_6( VAR_9 );
                    }
                }
            }
            FUNC_6( VAR_6 );
            return (FUNC_10( VAR_4 ) > 0);
        }
    }
    else if ( ((const char *) &VAR_3)[0] == 'T' )
    {
        for( size_t VAR_11=0; VAR_11<FUNC_0(VAR_0); VAR_11++ )
        {
            if( VAR_0[VAR_11].i_tag == VAR_3 )
                return FUNC_4( VAR_1, VAR_2,
                                          VAR_0[VAR_11].type,
                                          VAR_0[VAR_11].psz,
                                          VAR_4, VAR_5 );
        }
    }

    return 0;
}
