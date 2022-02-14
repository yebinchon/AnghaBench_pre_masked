
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*,char const*) ;

__attribute__((used)) static int FUNC_1( const char *VAR_0 )
{
    static const struct
    {
        int i_position;
        const char *psz_name;
    } VAR_1[] =
        { { 0, "center" },
          { 130, "left" },
          { 129, "right" },
          { 128, "top" },
          { 131, "bottom" },
          { 128 |130, "top-left" },
          { 128 |129, "top-right" },
          { 131|130, "bottom-left" },
          { 131|129, "bottom-right" },
          { 0, ((void*)0) } };
    int VAR_2;
    for( VAR_2 = 0; VAR_1[VAR_2].psz_name; VAR_2++ )
    {
        if( !FUNC_0( VAR_0, VAR_1[VAR_2].psz_name ) )
            return VAR_1[VAR_2].i_position;
    }
    return 0;
}
