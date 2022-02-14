
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_fourcc_t ;
typedef int const MP4_Box_t ;


 int const* FUNC_0 (int const*,int ,char const*,int const*) ;

__attribute__((used)) static MP4_Box_t * FUNC_1( MP4_Box_t *VAR_0, MP4_Box_t *VAR_1,
                            vlc_fourcc_t VAR_2, const char *VAR_3,
                            bool(*VAR_4)(const MP4_Box_t *, void *),
                            void *VAR_5 )
{
    while( (VAR_1 = FUNC_0( VAR_0, VAR_2, VAR_3, VAR_1 )) )
    {
        if( VAR_4( VAR_1, VAR_5 ) )
            return VAR_1;
    }
    return ((void*)0);
}
