
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int demux_t ;



__attribute__((used)) static inline bool FUNC_0( demux_t *VAR_0, const char **VAR_1,
                                   bool(*VAR_2)(demux_t *, const char *) )
{
    while( *VAR_1 )
    {
        if( VAR_2( VAR_0, *VAR_1 ) )
            return 1;
        VAR_1++;
    }
    return 0;
}
