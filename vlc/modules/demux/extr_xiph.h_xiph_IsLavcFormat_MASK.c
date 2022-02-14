
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_fourcc_t ;


 int FUNC_0 (void const*) ;



__attribute__((used)) static inline bool FUNC_1(const void *VAR_0, unsigned VAR_1,
                                     vlc_fourcc_t VAR_2)
{
    switch(VAR_2)
    {
        case 128:
            return VAR_1 >= 6 && FUNC_0(VAR_0) == 30;
        case 129:
            return VAR_1 >= 6 && FUNC_0(VAR_0) == 42;
        default:
            return 0;
    }
}
