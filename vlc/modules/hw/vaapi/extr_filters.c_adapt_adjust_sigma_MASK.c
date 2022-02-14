
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct range {float member_0; float member_1; } ;


 float FUNC_0 (float const,struct range const,struct range const) ;
 int FUNC_1 (char const*,char*) ;

__attribute__((used)) static float
FUNC_2(char const * VAR_0, float const VAR_1,
                   struct range const * VAR_2)
{
    if (!FUNC_1(VAR_0, "contrast"))
    {
        struct range const VAR_3 = { .0f, .35f };
        return FUNC_0(VAR_1, *VAR_2, VAR_3);
    }
    else if (!FUNC_1(VAR_0, "saturation"))
    {
        struct range const VAR_4 = { .0f, 1.f };
        return FUNC_0(VAR_1, *VAR_2, VAR_4);
    }
    return VAR_1;
}
