
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vlc_http_resource {int dummy; } ;
struct vlc_http_mgr {int dummy; } ;
struct vlc_http_file {struct vlc_http_resource resource; scalar_t__ offset; } ;


 int FUNC_0 (struct vlc_http_file*) ;
 struct vlc_http_file* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (struct vlc_http_resource*,int *,struct vlc_http_mgr*,char const*,char const*,char const*) ;

struct vlc_http_resource *FUNC_4(struct vlc_http_mgr *VAR_1,
                                               const char *VAR_2, const char *VAR_3,
                                               const char *VAR_4)
{
    struct vlc_http_file *VAR_5 = FUNC_1(sizeof (*VAR_5));
    if (FUNC_2(VAR_5 == ((void*)0)))
        return ((void*)0);

    if (FUNC_3(&VAR_5->resource, &VAR_0, VAR_1,
                          VAR_2, VAR_3, VAR_4))
    {
        FUNC_0(VAR_5);
        return ((void*)0);
    }

    VAR_5->offset = 0;
    return &VAR_5->resource;
}
