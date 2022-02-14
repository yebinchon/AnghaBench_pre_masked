
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t FUNC_0 (char const* const*) ;
 int * FUNC_1 (char const*,char const* const,size_t) ;

__attribute__((used)) static bool FUNC_2(const unsigned char *VAR_0, size_t VAR_1)
{
    static const char *const VAR_2[] =
    {
        "#EXT-X-MEDIA:",
        "#EXT-X-VERSION:",
        "#EXT-X-TARGETDURATION:",
        "#EXT-X-MEDIA-SEQUENCE:",
        "#EXT-X-STREAM-INF:",
    };

    for (size_t VAR_3 = 0; VAR_3 < FUNC_0(VAR_2); VAR_3++)
        if (FUNC_1((const char *)VAR_0, VAR_2[VAR_3], VAR_1) != ((void*)0))
            return 1;

    return 0;
}
