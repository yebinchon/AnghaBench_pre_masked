
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum es_format_category_e { ____Placeholder_es_format_category_e } es_format_category_e ;






__attribute__((used)) static inline const char *
FUNC_0(enum es_format_category_e VAR_0)
{
    switch (VAR_0)
    {
        case 128: return "Video";
        case 130: return "Audio";
        case 129: return "Subtitle";
        default: return ((void*)0);
    }
}
