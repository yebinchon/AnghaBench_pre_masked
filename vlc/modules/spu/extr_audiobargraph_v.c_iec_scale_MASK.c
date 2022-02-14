
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static float FUNC_0(float VAR_0)
{
    if (VAR_0 < -70.0f)
        return 0.0f;
    if (VAR_0 < -60.0f)
        return (VAR_0 + 70.0f) * 0.0025f;
    if (VAR_0 < -50.0f)
        return (VAR_0 + 60.0f) * 0.005f + 0.025f;
    if (VAR_0 < -40.0f)
        return (VAR_0 + 50.0f) * 0.0075f + 0.075f;
    if (VAR_0 < -30.0f)
        return (VAR_0 + 40.0f) * 0.015f + 0.15f;
    if (VAR_0 < -20.0f)
        return (VAR_0 + 30.0f) * 0.02f + 0.3f;
    if (VAR_0 < -0.001f || VAR_0 > 0.001f)
        return (VAR_0 + 20.0f) * 0.025f + 0.5f;
    return 1.0f;
}
