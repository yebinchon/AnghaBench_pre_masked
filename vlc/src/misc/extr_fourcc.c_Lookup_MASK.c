
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_fourcc_t ;
struct fourcc_mapping {char* desc; int fourcc; } ;
struct fourcc_desc {char* desc; int fourcc; } ;


 struct fourcc_mapping* FUNC_0 (int *,struct fourcc_mapping const*,size_t,int,int ) ;
 int VAR_0 ;

__attribute__((used)) static vlc_fourcc_t FUNC_1(vlc_fourcc_t VAR_1, const char **restrict VAR_2,
                           const struct fourcc_mapping *VAR_3, size_t VAR_4,
                           const struct fourcc_desc *VAR_5, size_t VAR_6)
{
    const struct fourcc_mapping *VAR_7;
    const struct fourcc_desc *VAR_8;

    VAR_7 = FUNC_0(&VAR_1, VAR_3, VAR_4, sizeof (*VAR_3), VAR_0);
    if (VAR_7 != ((void*)0))
    {
        if (VAR_2 != ((void*)0))
        {
            VAR_8 = FUNC_0(&VAR_1, VAR_5, VAR_6, sizeof (*VAR_5), VAR_0);
            if (VAR_8 != ((void*)0))
            {
                *VAR_2 = VAR_8->desc;
                return VAR_7->fourcc;
            }
        }
        VAR_1 = VAR_7->fourcc;
    }

    VAR_8 = FUNC_0(&VAR_1, VAR_5, VAR_6, sizeof (*VAR_5), VAR_0);
    if (VAR_8 == ((void*)0))
        return 0;
    if (VAR_2 != ((void*)0))
        *VAR_2 = VAR_8->desc;
    return VAR_1;
}
