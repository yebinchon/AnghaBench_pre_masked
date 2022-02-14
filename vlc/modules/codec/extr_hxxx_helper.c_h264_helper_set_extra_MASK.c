
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct hxxx_helper {int i_nal_length_size; int b_is_xvcC; int p_obj; int b_need_xvcC; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hxxx_helper*,void const*,size_t,int ,int*) ;
 scalar_t__ FUNC_1 (void const*,size_t) ;
 int FUNC_2 (struct hxxx_helper*) ;
 int FUNC_3 (struct hxxx_helper*,void const*,size_t) ;
 scalar_t__ FUNC_4 (void const*,size_t) ;
 int FUNC_5 (int ,char*) ;

__attribute__((used)) static int
FUNC_6(struct hxxx_helper *VAR_2, const void *VAR_3,
                      size_t VAR_4)
{
    if (FUNC_1(VAR_3, VAR_4))
    {
        VAR_2->i_nal_length_size = (((uint8_t*)VAR_3)[4] & 0x03) + 1;
        if (!FUNC_2(VAR_2))
            return VAR_0;
        VAR_2->b_is_xvcC = 1;







        if (!VAR_2->b_need_xvcC && VAR_2->i_nal_length_size != 4)
        {
            FUNC_5(VAR_2->p_obj, "nal_length_size is too small");
            return VAR_0;
        }

        return FUNC_3(VAR_2, VAR_3, VAR_4);
    }
    else if (FUNC_4(VAR_3, VAR_4))
    {
        VAR_2->i_nal_length_size = 4;
        bool VAR_5;
        return VAR_4 == 0 ? VAR_1 :
               FUNC_0(VAR_2, VAR_3, VAR_4, 0, &VAR_5);
    }
    else
        return VAR_0;
}
