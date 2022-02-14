
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char**,char*,char const*,int,char const*,char*,char*,char*) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (int) ;
 char* FUNC_4 (char const*) ;

__attribute__((used)) static size_t FUNC_5 (char **VAR_0, int VAR_1, const char *VAR_2)
{
    const char *VAR_3 = FUNC_3 (VAR_1);
    FUNC_1 (VAR_3);

    char *VAR_4 = FUNC_4 (VAR_2 ? VAR_2 : "");

    int VAR_5 = FUNC_0 (VAR_0,
        "<?xml version=\"1.0\" encoding=\"ascii\" ?>\n"
        "<!DOCTYPE html PUBLIC \"-//W3C//DTD XHTML 1.0 Strict//EN\""
        " \"http://www.w3.org/TR/xhtml10/DTD/xhtml10strict.dtd\">\n"
        "<html lang=\"en\">\n"
        "<head>\n"
        "<title>%s</title>\n"
        "</head>\n"
        "<body>\n"
        "<h1>%d %s%s%s%s</h1>\n"
        "<hr />\n"
        "<a href=\"http://www.videolan.org\">VideoLAN</a>\n"
        "</body>\n"
        "</html>\n", VAR_3, VAR_1, VAR_3,
        (VAR_4 ? " (" : ""), (VAR_4 ? VAR_4 : ""), (VAR_4 ? ")" : ""));

    FUNC_2 (VAR_4);

    if (VAR_5 == -1) {
        *VAR_0 = ((void*)0);
        return 0;
    }

    return (size_t)VAR_5;
}
