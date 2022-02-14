
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef char uint8_t ;
struct TYPE_3__ {int s; } ;
typedef TYPE_1__ demux_t ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (char const*,char,int) ;
 int FUNC_1 (char const*,char const*,int const) ;
 int FUNC_2 (char const*,char const*) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (int ,char const**,int) ;

__attribute__((used)) static int FUNC_5( demux_t *VAR_2, const char *VAR_3 )
{
    static const struct
    {
        int i_offset;
        const char *psz_marker;
    } VAR_4[] = {
        { 0, "ziRCONia" },
        { 0, "Extended Module" },
        { 44, "SCRM" },
        { 0, "IMPM" },
        { 0, "GF1PATCH110" },
        { 20, "!SCREAM!" },
        { 20, "!Scream!" },
        { 20, "BMOD2STM" },
        { 0, "MMD0" },
        { 0, "MMD1" },
        { 0, "MMD2" },
        { 0, "MMD3" },
        { 0, "MTM" },
        { 0, "DMDL" },
        { 0, "DBM0" },
        { 0, "if" },
        { 0, "JN" },
        { 0, "FAR\xfe" },
        { 0, "Extreme" },
        { 0, "OKTASONGCMOD" },
        { 44, "PTMF" },
        { 0, "MAS_UTrack_V00" },
        { 0, "DDMF" },
        { 8, "DSMFSONG" },
        { 0, "\xc1\x83\x2a\x9e" },
        { 0, "ASYLUM Music Format V1.0" },
        { 0, "AMF" },
        { 0, "PSM\xfe" },
        { 0, "PSM " },
        { 0, "MT20" },

        { 1080, "M.K." },
        { 1080, "M!K!" },
        { 1080, "M&K!" },
        { 1080, "N.T." },
        { 1080, "CD81" },
        { 1080, "OKTA" },
        { 1080, "16CN" },
        { 1080, "32CN" },
        { 1080, "FLT4" },
        { 1080, "FLT8" },
        { 1080, "6CHN" },
        { 1080, "8CHN" },
        { 1080, "FLT" },
        { 1080, "TDZ" },
        { 1081, "CHN" },
        { 1082, "CH" },

        { -1, ((void*)0) }
    };
    static const char *VAR_5[] =
    {
        "mod", "s3m", "xm", "it", "669", "amf", "ams", "dbm", "dmf", "dsm",
        "far", "mdl", "med", "mtm", "okt", "ptm", "stm", "ult", "umx", "mt2",
        "psm", "abc", ((void*)0)
    };
    bool VAR_6 = 0;
    if( VAR_3 )
    {
        for( int VAR_7 = 0; VAR_5[VAR_7] != ((void*)0); VAR_7++ )
        {
            VAR_6 |= !FUNC_2( VAR_3, VAR_5[VAR_7] );
            if( VAR_6 )
                break;
        }
    }

    const uint8_t *VAR_8;
    const int VAR_9 = FUNC_4( VAR_2->s, &VAR_8, 2048 );
    if( VAR_9 < 4 )
        return VAR_0;

    for( int VAR_10 = 0; VAR_4[VAR_10].i_offset >= 0; VAR_10++ )
    {
        const char *VAR_11 = VAR_4[VAR_10].psz_marker;
        const int VAR_12 = FUNC_3( VAR_11 );
        const int VAR_13 = VAR_4[VAR_10].i_offset;

        if( VAR_9 < VAR_13 + VAR_12 )
            continue;

        if( !FUNC_1( &VAR_8[VAR_13], VAR_11, VAR_12 ) )
        {
            if( VAR_12 >= 4 || VAR_6 )
                return VAR_1;
        }
    }






    if( VAR_3 && !FUNC_2( VAR_3, "abc" ) )
    {
        bool VAR_14 = 0;
        bool VAR_15 = 0;

        for( int VAR_16 = 0; VAR_16 < VAR_9-1; VAR_16++ )
        {
            VAR_14 |= VAR_8[VAR_16+0] == 'K' && VAR_8[VAR_16+1] == ':';
            VAR_15 |= ( VAR_8[VAR_16+0] == 'X' || VAR_8[VAR_16+0] == 'T') && VAR_8[VAR_16+1] == ':';
        }
        if( !VAR_14 || !VAR_15 )
            return VAR_0;
        return VAR_1;
    }


    if( VAR_3 && !FUNC_2( VAR_3, "mod" ) && VAR_9 >= 20 + 15 * 30 )
    {

        const uint8_t *VAR_17 = FUNC_0( VAR_8, '\0', 20 );
        if( VAR_17 )
        {
            for( ; VAR_17 < &VAR_8[20]; VAR_17++ )
            {
                if( *VAR_17 )
                    return VAR_0;
            }
        }

        for( int VAR_18 = 0; VAR_18 < 15; VAR_18++ )
        {
            const uint8_t *VAR_19 = &VAR_8[20 + VAR_18*30];


            VAR_17 = FUNC_0( &VAR_19[0], '\0', 22 );
            if( VAR_17 )
            {
                for( ; VAR_17 < &VAR_19[22]; VAR_17++ )
                {
                    if( *VAR_17 )
                        return VAR_0;
                }
            }

            if( VAR_19[25] > 64 )
                return VAR_0;
        }
        return VAR_1;
    }
    return VAR_0;
}
