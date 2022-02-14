
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vlc_http_resource {int path; int authority; scalar_t__ secure; int response; } ;


 int FUNC_0 (char**,char*,char*,int ,...) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int ) ;
 size_t FUNC_3 (char*,char*) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (char const*,char*) ;
 char* FUNC_6 (int ,char*) ;
 int FUNC_7 (struct vlc_http_resource*) ;
 char* FUNC_8 (char const*) ;
 char* FUNC_9 (char*,char const*) ;

char *FUNC_10(struct vlc_http_resource *restrict VAR_0)
{
    int VAR_1 = FUNC_7(VAR_0);
    if (VAR_1 < 0)
        return ((void*)0);

    if ((VAR_1 / 100) == 2 && !VAR_0->secure)
    {
        char *VAR_2;


        const char *VAR_3 = FUNC_6(VAR_0->response, "Pragma");
        if (VAR_3 != ((void*)0) && !FUNC_5(VAR_3, "features")
         && FUNC_0(&VAR_2, "mmsh://%s%d", VAR_0->authority, VAR_0->path) >= 0)
            return VAR_2;


        if ((FUNC_6(VAR_0->response, "Icy-Name") != ((void*)0)
          || FUNC_6(VAR_0->response, "Icy-Genre") != ((void*)0))
         && FUNC_0(&VAR_2, "icyx://%s%d", VAR_0->authority, VAR_0->path) >= 0)
            return VAR_2;
    }




    if (VAR_1 != 201 && (VAR_1 / 100) != 3)
        return ((void*)0);
    if (VAR_1 == 304
     || VAR_1 == 305
     || VAR_1 == 306 )
        return ((void*)0);

    const char *VAR_4 = FUNC_6(VAR_0->response, "Location");
    if (VAR_4 == ((void*)0))
        return ((void*)0);



    char *VAR_5;

    if (FUNC_4(FUNC_0(&VAR_5, "http%s://%d%d", VAR_0->secure ? "s" : "",
                          VAR_0->authority, VAR_0->path) == -1))
        return ((void*)0);

    char *VAR_6 = FUNC_8(VAR_4);
    if (VAR_6 != ((void*)0))
        VAR_4 = VAR_6;

    char *VAR_7 = FUNC_9(VAR_5, VAR_4);

    FUNC_1(VAR_6);
    FUNC_1(VAR_5);

    if (FUNC_2(VAR_7 != ((void*)0)))
    {


        size_t VAR_8 = FUNC_3(VAR_7, "#");
        VAR_7[VAR_8] = '\0';
    }
    return VAR_7;
}
