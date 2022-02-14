
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t FUNC_0 (size_t,unsigned int) ;
 size_t FUNC_1 (char const*) ;
 int FUNC_2 (char const*,char const*,size_t) ;

bool FUNC_3( const char *VAR_0, unsigned int VAR_1 )
{
    static const char *VAR_2[] = {

        "OMX.PV.",

        "OMX.google.",



        "OMX.ARICENT.",

        "OMX.SEC.WMV.Decoder",






        "OMX.SEC.MP3.Decoder",

        "OMX.MTK.VIDEO.DECODER.VC1",

        "OMX.SEC.vp8.dec",
        ((void*)0)
    };

    static const char *VAR_3[] = {


        ".secure",

        ".sw.dec",
        ((void*)0)
    };



    for( const char **VAR_4 = VAR_2; *VAR_4 != ((void*)0);
          VAR_4++ )
    {
        if( !FUNC_2( VAR_0, *VAR_4,
           FUNC_0( FUNC_1(*VAR_4), VAR_1 ) ) )
           return 1;
    }

    for( const char **VAR_5 = VAR_3; *VAR_5 != ((void*)0);
         VAR_5++ )
    {
       size_t VAR_6 = FUNC_1( *VAR_5 );

       if( VAR_1 > VAR_6
        && !FUNC_2( VAR_0 + VAR_1 - VAR_6, *VAR_5,
                     VAR_6 ) )
           return 1;
    }

    return 0;
}
