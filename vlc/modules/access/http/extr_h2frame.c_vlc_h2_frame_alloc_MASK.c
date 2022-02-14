
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* uint_fast8_t ;
typedef int uint_fast32_t ;
struct vlc_h2_frame {size_t* data; int * next; } ;


 int VAR_0 ;
 int FUNC_0 (size_t*,int) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 struct vlc_h2_frame* FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static struct vlc_h2_frame *
FUNC_4(uint_fast8_t VAR_2, uint_fast8_t VAR_3,
                   uint_fast32_t VAR_4, size_t VAR_5)
{
    FUNC_1((VAR_4 >> 31) == 0);

    if (FUNC_3(VAR_5 >= (1u << 24)))
    {
        VAR_1 = VAR_0;
        return ((void*)0);
    }

    struct vlc_h2_frame *VAR_6 = FUNC_2(sizeof (*VAR_6) + 9 + VAR_5);
    if (FUNC_3(VAR_6 == ((void*)0)))
        return ((void*)0);

    VAR_6->next = ((void*)0);
    VAR_6->data[0] = VAR_5 >> 16;
    VAR_6->data[1] = VAR_5 >> 8;
    VAR_6->data[2] = VAR_5;
    VAR_6->data[3] = VAR_2;
    VAR_6->data[4] = VAR_3;
    FUNC_0(VAR_6->data + 5, VAR_4);
    return VAR_6;
}
