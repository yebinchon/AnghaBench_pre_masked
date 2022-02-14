
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vod_media_t ;
typedef uintptr_t vlc_tick_t ;
typedef uintptr_t uint64_t ;


 int FUNC_0 (size_t,int) ;
 int FUNC_1 (uintptr_t*,char const*,int ) ;
 size_t FUNC_2 (char const*) ;
 uintptr_t FUNC_3 () ;

__attribute__((used)) static vlc_tick_t FUNC_4( const vod_media_t *VAR_0,
                            const char *VAR_1 )
{
    if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
        return FUNC_3();

    uint64_t VAR_2 = 0;

    size_t VAR_3 = FUNC_2(VAR_1);
    FUNC_1(&VAR_2, VAR_1, FUNC_0(VAR_3,
                                              sizeof(uint64_t)));
    VAR_2 ^= (uintptr_t)VAR_0;


    VAR_2 &= 0xFFFFFFFFFFFF;
    return VAR_2;
}
