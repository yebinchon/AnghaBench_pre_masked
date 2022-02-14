
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint_fast32_t ;
struct vlc_http_msg {int dummy; } ;
struct vlc_h2_frame {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 struct vlc_http_msg* FUNC_1 (unsigned int,char const***) ;

struct vlc_h2_frame *
FUNC_2(uint_fast32_t VAR_2, uint_fast32_t VAR_3, bool VAR_4,
                     unsigned VAR_5, const char *const VAR_6[][2])
{
    struct vlc_http_msg *VAR_7;

    FUNC_0(VAR_2 == 1);
    FUNC_0(VAR_3 == VAR_0);
    FUNC_0(VAR_4);

    const char *VAR_8[VAR_1][2];

    for (unsigned VAR_9 = 0; VAR_9 < VAR_5; VAR_9++)
    {
        VAR_8[VAR_9][0] = VAR_6[VAR_9][0];
        VAR_8[VAR_9][1] = VAR_6[VAR_9][1];
    }

    VAR_7 = FUNC_1(VAR_5, VAR_8);
    return (struct vlc_h2_frame *)VAR_7;
}
